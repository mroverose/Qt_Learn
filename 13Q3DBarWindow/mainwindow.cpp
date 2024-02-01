#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QColorDialog>
#include <QSplitter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider_scaled->setRange(10,500);
    ui->horizontalSlider_horizontalRotate->setRange(-180,180);
    ui->horizontalSlider_VerticalRotate->setRange(-180,180);
    iniGraph3D();   //创建三维柱状图，并会创建一个容器对象graphContainer
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
    graph3D = new Q3DBars();
    graphContainer = QWidget::createWindowContainer(graph3D,this);
    graph3D->scene()->activeCamera()->setCameraPreset(Q3DCamera::CameraPresetFrontHigh);
    //创建坐标系
    QValue3DAxis  *axisV = new QValue3DAxis;        //数值坐标
    axisV->setTitle("销量");
    axisV->setTitleVisible(true);
    axisV->setLabelFormat("%d");
    graph3D->setValueAxis(axisV);           //设置数值坐标轴


    QCategory3DAxis *axisRow = new QCategory3DAxis;
    axisRow->setTitle("row axis");
    axisRow->setTitleVisible(true);
    graph3D->setRowAxis(axisRow);    //设置行坐标轴

    QCategory3DAxis *axisCol = new QCategory3DAxis;
    axisCol->setTitle("column axis");
    axisCol->setTitleVisible(true);
    graph3D->setColumnAxis(axisCol);        //设置列坐标轴


    //创建序列
    series = new QBar3DSeries;
    series->setMesh(QAbstract3DSeries::MeshCylinder);           //棒柱形状
    series->setItemLabelFormat("(@rowLabel,@colLabel): %d");    //标签显示格式
    graph3D->addSeries(series);

    //设置数据代理的数据
    QBarDataArray  *dataArray = new QBarDataArray;          //棒柱数据数组
    for(int i = 0;i < 3;i++){
        QBarDataRow *dataRow = new QBarDataRow;             //棒柱数据行
        for(int j = 1;j <= 5;j++){
            quint32 value = QRandomGenerator::global()->bounded(5,15);  //随机整数
            QBarDataItem *dataItem = new QBarDataItem;
            dataItem->setValue(value);
            dataRow->append(*dataItem);                         //添加到棒柱的数据行
        }
        dataArray->append(dataRow);                             //添加一个棒柱数据行
    }
    QStringList rowLabs;                    //行坐标标签
    rowLabs<<"Week1"<<"Week2"<<"Week3";
    series->dataProxy()->setRowLabels(rowLabs);
    QStringList colLabs;
    colLabs<<"Mon"<<"Tur"<<"Wed"<<"Thur"<<"Fri";
    series->dataProxy()->setColumnLabels(colLabs);          //设置数据代理的列标签
    series->dataProxy()->resetArray(dataArray);             //重新设置数据代理的数据
    connect(series,&QBar3DSeries::selectedBarChanged,this,&MainWindow::do_barSelected);
}

void MainWindow::do_barSelected(const QPoint &position){
    if(position.x() < 0 || position.y() < 0){
        ui->action_changValue->setEnabled(false);
        return;
    }
    ui->action_changValue->setEnabled(true);
    const QBarDataItem  *bar = series->dataProxy()->itemAt(position);
    QString info = QString::asprintf("选中的棒柱,Row = %d,Column = %d, Value = %.1f",position.x(),position.y(),bar->value());
    ui->statusbar->showMessage(info);
}

void MainWindow::on_action_reBuildChart_triggered()
{
    QBarDataProxy       *dataProxy = new QBarDataProxy;     //新建数据代理
    int rowCount = series->dataProxy()->rowCount();         //数据代理的行数
    for(int i = 0;i < rowCount;i++){
        QBarDataRow *dataRow = new QBarDataRow;         //棒柱数据行
        for(int j = 1;j <= 5;j++){
            quint32 value = QRandomGenerator::global()->bounded(5,15);
            QBarDataItem *dataItem = new QBarDataItem;      //棒柱数据项
            dataItem->setValue(value);
            dataRow->append(*dataItem);
        }
        QString rowStr = QString("第%1周").arg(i + 1);        //行标签文字
        dataProxy->addRow(dataRow,rowStr);                  //添加棒柱数据行和标签
    }
    QStringList colLabs = series->dataProxy()->columnLabels();      //原来列坐标轴标签
    dataProxy->setColumnLabels(colLabs);            //设置列标签
    series->dataProxy()->resetArray();              //清除数据代理和所有标签
    series->setDataProxy(dataProxy);                //重新设置数据代理
}


void MainWindow::on_action_changValue_triggered()
{
    QPoint position = series->selectedBar();            //当前选择棒柱的坐标
    if(position.x() < 0 || position.y() < 0)
        return;
    QBarDataItem bar = *(series->dataProxy()->itemAt(position));        //棒柱对象
    qreal value = bar.value();                                          //原来的值
    bool ok;
    value = QInputDialog::getInt(this,"输入数值","更改棒柱数值",value,0,50,1,&ok);
    if(ok){
        bar.setValue(value);
        series->dataProxy()->setItem(position,bar);
    }
}

void MainWindow::on_action_addRow_triggered()
{
    //添加行
    QString rowLabel = QInputDialog::getText(this,"输入字符串","请输入行标签");
    if(rowLabel.isEmpty())
        return;
    QBarDataRow *dataRow = new QBarDataRow;             //棒柱数据行
    for(int j = 1;j <= 5;j++){
        quint32 value = QRandomGenerator::global()->bounded(15,25);
        QBarDataItem *dataItem = new QBarDataItem;
        dataItem->setValue(value);
        dataRow->append(*dataItem);
    }
    series->dataProxy()->addRow(dataRow,rowLabel);          //添加棒柱数据行和标签
}


void MainWindow::on_action_delRow_triggered()
{
    //删除行
    QPoint position = series->selectedBar();
    if(position.x() < 0 && position.y() < 0)
        return;
    int rowIndex = position.x();
    int removeCount = 1;                //当前行号
    int removeLabels = true;                //删除的行标签
    series->dataProxy()->removeRows(rowIndex,removeCount,removeLabels);
}


void MainWindow::on_action_insertRow_triggered()
{
    //插入行
    QPoint position = series->selectedBar();
    if(position.x() < 0 && position.y() < 0)
        return;
    int rowIndex = position.x();
    QString rowLabel = QInputDialog::getText(this,"输入字符串","请输入行标签");
    if(rowLabel.isEmpty())
        return;
    QBarDataRow *dataRow = new QBarDataRow;             //棒柱数据行
    for(int j = 1;j <= 5;j++){
        quint32 value = QRandomGenerator::global()->bounded(15,25);
        QBarDataItem *dataItem = new QBarDataItem;
        dataItem->setValue(value);
        dataRow->append(*dataItem);
    }
    series->dataProxy()->insertRow(rowIndex,dataRow,rowLabel);
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
    qreal z = target3D.z();
    target3D.setZ(z - 0.1);
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
    qreal z = target3D.z();
    target3D.setZ(z + 0.1);
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
    //显示倒影
    graph3D->setReflection(checked);
}



void MainWindow::on_checkBox_reverseValueAxis_clicked(bool checked)
{
    //数值坐标轴反向
    graph3D->valueAxis()->setReversed(checked);
}



void MainWindow::on_checkBox_showAxisTitle_clicked(bool checked)
{
    //显示轴标题
    graph3D->valueAxis()->setTitleVisible(checked);
    graph3D->rowAxis()->setTitleVisible(checked);
    graph3D->columnAxis()->setTitleVisible(checked);
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
    series->setItemLabelFormat("Value at (@rowLabel,@colLabel): %.1f");
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

