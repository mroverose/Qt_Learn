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
    graph3D = new Q3DScatter();
    graphContainer = QWidget::createWindowContainer(graph3D,this);


    //创建序列
    QScatterDataProxy   *proxy = new QScatterDataProxy();       //创建数据代理
    series = new QScatter3DSeries(proxy);                       //创建序列
    series->setItemLabelFormat("(@xLabel,@zLabel,@yLabel)");    //散点标签的格式(x,z,y)
    series->setMeshSmooth(true);
    series->setBaseColor(Qt::yellow);
    graph3D->addSeries(series);

    //创建坐标系
    graph3D->axisX()->setTitle("axis X");
    graph3D->axisX()->setLabelFormat("%.2f");
    graph3D->axisX()->setTitleVisible(true);
    graph3D->axisY()->setTitle("axis Y");
    graph3D->axisY()->setLabelFormat("%.2f");
    graph3D->axisY()->setTitleVisible(true);
    graph3D->axisZ()->setTitle("axis Z");
    graph3D->axisZ()->setLabelFormat("%.2f");
    graph3D->axisZ()->setTitleVisible(true);
    graph3D->activeTheme()->setLabelBackgroundEnabled(false);       //不显示轴标签背景

    series->setMesh(QAbstract3DSeries::MeshSphere);                 //设置散点图形状
    series->setItemSize(0.2);                       //设置散点大小，取值范围是0~1，默认值是0

    int N = 41;
    int itemCount = N * N;                  //数据点总数
    QScatterDataArray *dataArray = new QScatterDataArray();         //散点对象数组
    dataArray->resize(itemCount);                                   //设置对象数组大小
    QScatterDataItem *ptrToDataArray = &dataArray->first();         //首个元素

    //墨西哥草帽 图，-10：0.5:10,N = 41
    float x,y,z;
    x = -10;
    for(int i = 1;i <= N;i++){
        y = -10;
        for(int j = 1;j <= N;j++){
            z = qSqrt(x * x + y * y);
            if(z != 0)z = 10 * qSin(z) / z;
            else    z = 10;
            ptrToDataArray->setPosition(QVector3D(x,z,y));      //设置坐标
            ptrToDataArray++;
            y += 0.5;
        }
        x += 0.5;
    }
    series->dataProxy()->resetArray(dataArray);             //重新设置数据代理的数据
    connect(series,&QScatter3DSeries::selectedItemChanged,this,&MainWindow::do_itemSelected);
}

void MainWindow::do_itemSelected(int index){

    ui->action_changValue->setEnabled(index >= 0);
    ui->action_delRow->setEnabled(index >= 0);
    if(index >= 0){
        QScatterDataItem item = *(series->dataProxy()->itemAt(index));      //当前选中的散点
        QString info = QString::asprintf("选中的点的坐标(x,z,y) = (%.2f,%.2f,%.2f)",item.x(),item.z(),item.y());
        ui->statusbar->showMessage(info);
    }
}

void MainWindow::on_action_reBuildChart_triggered()
{
    int N = 45;
    int itemCount = N * N;                  //数据点总数
    QScatterDataArray *dataArray = new QScatterDataArray();         //散点对象数组
    dataArray->resize(itemCount);                                   //设置对象数组大小
    QScatterDataItem *ptrToDataArray = &dataArray->first();         //首个元素

    //墨西哥草帽 图，-10：0.5:10,N = 41
    float x,y,z;
    x = -10;
    for(int i = 1;i <= N;i++){
        y = -10;
        for(int j = 1;j <= N;j++){
            z = qSqrt(x * x + y * y);
            if(z != 0)z = 10 * qSin(z) / z;
            else    z = 10;
            ptrToDataArray->setPosition(QVector3D(x,z,y));      //设置坐标
            ptrToDataArray++;
            y += 0.5;
        }
        x += 0.5;
    }               //重新设置数据代理
    series->dataProxy()->resetArray(dataArray);             //重新设置数据代理的数据

}


void MainWindow::on_action_changValue_triggered()
{
 //修改当前选中散点的坐标
    int index = series->selectedItem();             //当前选中散点的序号
    if(index < 0)
        return;
    QScatterDataItem item = *(series->dataProxy()->itemAt(index));
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
    series->dataProxy()->setItem(index,item);               //重新设置散点的数据项
}

void MainWindow::on_action_addRow_triggered()
{
    //添加随机点
    int x = QRandomGenerator::global()->bounded(-10,10);
    int z = QRandomGenerator::global()->bounded(-10,10);
    int y = QRandomGenerator::global()->bounded(5,10);
    QScatterDataItem item;
    item.setX(x);
    item.setZ(z);
    item.setY(y);
    series->dataProxy()->addItem(item);
}


void MainWindow::on_action_delRow_triggered()
{
    //删除当前点
    int index = series->selectedItem();
    if(index < 0)
        return;
    int removeCount = 1;
    series->dataProxy()->removeItems(index,removeCount);

}


void MainWindow::on_action_insertRow_triggered()
{

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


void MainWindow::on_comboBox_barStyle_currentIndexChanged(int index)
{
    //棒柱样式，下拉列表框
    QAbstract3DSeries::Mesh  aMesh;
    aMesh = QAbstract3DSeries::Mesh(index + 1);         //0 = MeshUserDefined
    series->setMesh(aMesh);
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
    //设置序列的基本颜色
    QColor color = series->baseColor();
    color = QColorDialog::getColor(color);
    if(color.isValid())
        series->setBaseColor(color);
}


void MainWindow::on_doubleSpinBox_scatterSize_valueChanged(double arg1)
{
    //散点大小,DoubleSpinBox
    series->setItemSize(arg1);          //设置散点大小
}

