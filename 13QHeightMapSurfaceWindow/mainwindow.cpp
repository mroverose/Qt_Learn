#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QColorDialog>
#include <QSplitter>
#include <QValue3DAxis>
#include <QScatter3DSeries>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider_scaled->setRange(10,500);
    ui->horizontalSlider_horizontalRotate->setRange(-180,180);
    ui->horizontalSlider_VerticalRotate->setRange(-180,180);
    iniGraph3D();   //创建三维散点图，并会创建一个容器对象graphContainer
    QSplitter   *splitter = new QSplitter(Qt::Horizontal);
    splitter->addWidget(ui->frame_setupChart);
    splitter->addWidget(graphContainer);
    this->setCentralWidget(splitter);       //设置主窗口中心组件
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniGraph3D(){
    graph3D = new Q3DSurface();
    graphContainer = QWidget::createWindowContainer(graph3D,this);
    graph3D->activeTheme()->setLabelBackgroundEnabled(false);

    //创建坐标轴
    QValue3DAxis *axisX = new QValue3DAxis;
    axisX->setTitle("Axis X：西--东");
    axisX->setTitleVisible(true);
    axisX->setLabelFormat("%.2f米");
    axisX->setRange(-5000,5000);
    graph3D->setAxisX(axisX);

    QValue3DAxis *axisY = new QValue3DAxis;
    axisY->setTitle("Axis Y：高度");
    axisY->setTitleVisible(true);
    axisY->setAutoAdjustRange(true);
    graph3D->setAxisY(axisY);

    QValue3DAxis *axisZ = new QValue3DAxis;
    axisZ->setTitle("Axis Z：南--北");
    axisZ->setTitleVisible(true);
    axisZ->setLabelFormat("%.2f米");
    axisZ->setRange(-5000,5000);
    graph3D->setAxisZ(axisZ);

    //创建数据代理
    QImage heightMapImage(":/map/map/flat.png");
    QHeightMapSurfaceDataProxy  *proxy = new QHeightMapSurfaceDataProxy(heightMapImage);
    proxy->setValueRanges(-5000,5000,-5000,5000);
    series = new QSurface3DSeries(proxy);
    series->setItemLabelFormat("(@xLabel,@zLabel,@yLabel)");    //散点标签的格式(x,z,y)
    series->setMeshSmooth(true);
    series->setFlatShadingEnabled(false);
    series->setDrawMode(QSurface3DSeries::DrawSurfaceAndWireframe);
    graph3D->addSeries(series);
    connect(series,&QSurface3DSeries::selectedPointChanged,this,&MainWindow::do_pointSelected);
}

void MainWindow::do_pointSelected(const QPoint& position){

    if((position.x() < 0) || (position.y() < 0))
        return;

    QSurfaceDataItem item = *(series->dataProxy()->itemAt(position));      //当前点数据项
    QString info = QString::asprintf("选中的点的坐标(x,z,y) = (%.2f,%.2f,%.2f)",item.x(),item.z(),item.y());
    ui->statusbar->showMessage(info);
}

void MainWindow::on_action_reBuildChart_triggered()
{
    int N = 45;

    QSurfaceDataArray *dataArray = new QSurfaceDataArray();         //散点对象数组
    dataArray->reserve(N);                                   //设置对象数组大小

    //墨西哥草帽 图，-10：0.5:10,N = 41
    float x,y,z;
    x = -10;
    for(int i = 1;i <= N;i++){
        QSurfaceDataRow *newRow = new QSurfaceDataRow(N);
        y = -10;
        int index = 0;
        for(int j = 1;j <= N;j++){
            z = qSqrt(x * x + y * y);
            if(z != 0)z = 10 * qSin(z) / z;
            else    z = 10;
            (*newRow)[index++].setPosition(QVector3D(x,z,y));      //设置坐标
            y += 0.5;
        }
        x += 0.5;
        dataArray->append(newRow);
    }               //重新设置数据代理
    series->dataProxy()->resetArray(dataArray);             //重新设置数据代理的数据

}


void MainWindow::on_action_changValue_triggered()
{
 //修改当前选中点坐标
    QPoint point  = series->selectedPoint();             //当前选中散点的序号
 if(point.x() < 0 || point.y() < 0)
        return;
    QSurfaceDataItem item = *(series->dataProxy()->itemAt(point));
    QString coord = QString::asprintf("%.2f,%.2f,%.2f",item.x(),item.z(),item.y());
    bool ok = false;
    QString newText = QInputDialog::getText(this,"修改点坐标","按格式输入点的坐标(x,z,y)",QLineEdit::Normal,coord,&ok);
    if(!ok)
        return;
    newText = newText.simplified();     //去掉前后和中间的空格
    QStringList xzy = newText.split(QLatin1Char(','),Qt::SkipEmptyParts); //用逗号分割
    if(xzy.size() != 3){
        QMessageBox::critical(this,"错误","输入坐标数据格式错误");
        return;
    }

    item.setX(xzy[0].toFloat());
    item.setZ(xzy[1].toFloat());
    item.setY(xzy[2].toFloat());
    series->dataProxy()->setItem(point,item);               //重新设置散点的数据项
}

void MainWindow::on_action_addRow_triggered()
{
    //渐变色一
    QLinearGradient gr;
    gr.setColorAt(0.0,Qt::blue);
    gr.setColorAt(1.0,Qt::yellow);
    series->setBaseGradient(gr);
    series->setColorStyle(Q3DTheme::ColorStyleRangeGradient);   //渐变色
}


void MainWindow::on_action_delRow_triggered()
{
    //删除行
    QPoint point = series->selectedPoint();
    if((point.x()) < 0 || (point.y() < 0))
        return;
    int removeCount = 1;
    series->dataProxy()->removeRows(point.x() + 1,removeCount);
}


void MainWindow::on_action_insertRow_triggered()
{
        //渐变色二
    QLinearGradient gr;
    gr.setColorAt(0.0,Qt::cyan);
    gr.setColorAt(1.0,Qt::red);
    series->setBaseGradient(gr);
    series->setColorStyle(Q3DTheme::ColorStyleRangeGradient);   //渐变色
}


void MainWindow::on_comboBox_preView_currentIndexChanged(int index)
{
    //预设视角
    Q3DCamera::CameraPreset  cameraPos = Q3DCamera::CameraPreset(index);
    graph3D->scene()->activeCamera()->setCameraPreset(cameraPos);
}


void MainWindow::on_horizontalSlider_horizontalRotate_valueChanged(int value)
{
    //水平旋转
    graph3D->scene()->activeCamera()->setXRotation(value);
}


void MainWindow::on_horizontalSlider_VerticalRotate_valueChanged(int value)
{
    //垂直旋转
    graph3D->scene()->activeCamera()->setYRotation(value);

}


void MainWindow::on_horizontalSlider_scaled_valueChanged(int value)
{
    //缩放
    graph3D->scene()->activeCamera()->setZoomLevel(value);
}


void MainWindow::on_toolButton_refresh_clicked()
{
    //复位到FrontHigh视角
    graph3D->scene()->activeCamera()->setCameraPreset(Q3DCamera::CameraPresetFrontHigh);
}


void MainWindow::on_toolButton_left_clicked()
{
    //左移
    QVector3D   target3D = graph3D->scene()->activeCamera()->target();
    qreal x = target3D.x();
    target3D.setX(x + 0.1);
    graph3D->scene()->activeCamera()->setTarget(target3D);
}


void MainWindow::on_toolButton_up_clicked()
{
    //上移
    QVector3D   target3D = graph3D->scene()->activeCamera()->target();
    qreal y = target3D.y();
    target3D.setY(y - 0.1);
    graph3D->scene()->activeCamera()->setTarget(target3D);
}


void MainWindow::on_toolButton_right_clicked()
{
    //右移
    QVector3D   target3D = graph3D->scene()->activeCamera()->target();
    qreal x = target3D.x();
    target3D.setX(x - 0.1);
    graph3D->scene()->activeCamera()->setTarget(target3D);

}


void MainWindow::on_toolButton_down_clicked()
{
    //下移
    QVector3D   target3D = graph3D->scene()->activeCamera()->target();
    qreal y = target3D.y();
    target3D.setY(y + 0.1);
    graph3D->scene()->activeCamera()->setTarget(target3D);
}


void MainWindow::on_comboBox_mapTheme_currentIndexChanged(int index)
{
    //图形主题，下拉列表框
    Q3DTheme *currentTheme = graph3D->activeTheme();
    currentTheme->setType(Q3DTheme::Theme(index));
}



void MainWindow::on_spinBox_fontSize_valueChanged(int arg1)
{
    //字体大小，SpinBox
    QFont font = graph3D->activeTheme()->font();
    font.setPointSize(arg1);
    graph3D->activeTheme()->setFont(font);
}


void MainWindow::on_comboBox_selectMode_currentIndexChanged(int index)
{
    //选择模式，下拉列表框
    graph3D->setSelectionMode(QAbstract3DGraph::SelectionFlags(index));
}


void MainWindow::on_checkBox_showBackground_clicked(bool checked)
{
    //显示背景
    graph3D->activeTheme()->setBackgroundEnabled(checked);
}


void MainWindow::on_checkBox_showGrid_clicked(bool checked)
{
    //显示背景网格
    graph3D->activeTheme()->setGridEnabled(checked);
}



void MainWindow::on_checkBox_showReflection_clicked(bool checked)
{
    //显示阴影
    if(checked)
        graph3D->setShadowQuality(QAbstract3DGraph::ShadowQualityMedium);
    else
        graph3D->setShadowQuality(QAbstract3DGraph::ShadowQualityNone);
}



void MainWindow::on_checkBox_reverseValueAxis_clicked(bool checked)
{
    //数值坐标轴反向
    graph3D->axisY()->setReversed(checked);
    graph3D->axisX()->setReversed(checked);
    graph3D->axisZ()->setReversed(checked);
}



void MainWindow::on_checkBox_showAxisTitle_clicked(bool checked)
{
    //显示轴标题
    graph3D->axisX()->setTitleVisible(checked);
    graph3D->axisY()->setTitleVisible(checked);
    graph3D->axisZ()->setTitleVisible(checked);
}


void MainWindow::on_checkBox_showAxisLabelBackground_clicked(bool checked)
{
    //显示轴标题背景
    graph3D->activeTheme()->setLabelBackgroundEnabled(checked);
}


void MainWindow::on_checkBox_smoothEffect_clicked(bool checked)
{
    //光滑效果
    series->setMeshSmooth(checked);
}


void MainWindow::on_checkBox_showSelectedBarLabels_clicked(bool checked)
{
    //显示选中棒柱的标签
    series->setItemLabelFormat("Value at (@xLabel,@zLabel,@yLabel)");
    series->setItemLabelVisible(checked);
}


void MainWindow::on_action_seriesColor_triggered()
{
    //设置曲面的基本颜色
    QColor color = series->baseColor();
    color = QColorDialog::getColor(color);
    if(color.isValid()){
        series->setBaseColor(color);
        series->setColorStyle(Q3DTheme::ColorStyleUniform);    //单一颜色
    }
}




void MainWindow::on_checkBox_clicked(bool checked)
{
    //平面着色
    series->setFlatShadingEnabled(checked);
}


void MainWindow::on_comboBox_pointShape_currentIndexChanged(int index)
{
    //设置数据点的样式
    QAbstract3DSeries::Mesh aMesh;
    aMesh = QAbstract3DSeries::Mesh(index + 1);
    series->setMesh(aMesh);
}


void MainWindow::on_comboBox_surfaceStyle_currentIndexChanged(int index)
{
    //曲面样式，下拉列表框
    if(index == 0)
        series->setDrawMode(QSurface3DSeries::DrawWireframe);
    else if(index == 1)
        series->setDrawMode(QSurface3DSeries::DrawSurface);
    else
        series->setDrawMode(QSurface3DSeries::DrawSurfaceAndWireframe);
}

