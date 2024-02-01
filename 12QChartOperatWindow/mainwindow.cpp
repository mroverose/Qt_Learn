#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <tpendialog.h>
#include <QBrush>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createChart();         //创建图表
    prepareData();          //为序列生成数据
    updateFromChart();      //从图表获取属性，刷新界面显示内容
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::createChart(){
    //创建图表
    chart = new QChart();
    chart->setTitle("简单函数曲线");
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);

    QLineSeries     *series0 = new QLineSeries();
    QLineSeries     *series1 = new QLineSeries();
    series0->setName("Sin曲线");
    series1->setName("Cos曲线");
    curSeries = series0;            //当前序列

    QPen pen;
    pen.setStyle(Qt::DotLine);
    pen.setWidth(2);
    pen.setColor(Qt::red);
    series0->setPen(pen);               //序列series0的线条设置
    series0->setBrush(QBrush(Qt::cyan));

    pen.setStyle(Qt::SolidLine);
    pen.setColor(Qt::blue);
    series1->setPen(pen);             //序列series1的线条设置
    series1->setBrush(QBrush(Qt::yellow));
    chart->addSeries(series0);
    chart->addSeries(series1);

    QValueAxis  *axisX =  new QValueAxis;
    curAxis = axisX;                    //当前坐标轴
    axisX->setRange(0,10);
    axisX->setLabelFormat("%.1f");      //标签格式
    axisX->setTickCount(11);            //主刻度个数
    axisX->setMinorTickCount(2);        //次刻度个数
    axisX->setTitleText("time(secs)");  //轴标题

    QValueAxis  *axisY = new QValueAxis;
    axisY->setRange(-2,2);
    axisY->setLabelFormat("%.2f");
    axisY->setTickCount(5);
    axisY->setMinorTickCount(2);
    axisY->setTitleText("value");

    //为chart和序列设置坐标轴
    chart->addAxis(axisX,Qt::AlignBottom);      //将坐标轴添加到图表中，并指定方向
    chart->addAxis(axisY,Qt::AlignLeft);
    series0->attachAxis(axisX);
    series0->attachAxis(axisY);
    series1->attachAxis(axisX);
    series1->attachAxis(axisY);
}


void MainWindow::prepareData(){
    //为序列生成数据
    QLineSeries    *series0 = static_cast<QLineSeries*>(chart->series().at(0));
    QLineSeries     *series1 = static_cast<QLineSeries*>(chart->series().at(1));
    series0->clear();
    series1->clear();

    qreal t = 0,y1,y2,intv = 0.1;
    int cnt = 1000;
    for(int i = 0;i < cnt;i++){
        int rd = QRandomGenerator::global()->bounded(-5,6);             //随机整数，[-5,5]
        y1 = qSin(t) + rd / 50.0;
        series0->append(t,y1);
        y2 = qCos(t) + rd / 50.0;
        series1->append(t,y2);
        t += intv;
    }
}

void MainWindow::updateFromChart(){
    QChart *curChart = ui->chartView->chart();          //获取视图组件相关联的chart
    ui->lineEdit_titleText->setText(curChart->title());
    QMargins mg = curChart->margins();                  //图表的边距
    ui->spinBox_left->setValue(mg.left());
    ui->spinBox_right->setValue(mg.right());
    ui->spinBox_bottom->setValue(mg.bottom());
    ui->spinBox_top->setValue(mg.top());
 }

void MainWindow::on_pushButton_setTitle_clicked()
{
    //设置图表标题文字
    QString str = ui->lineEdit_titleText->text();
    chart->setTitle(str);
}


void MainWindow::on_pushButton_textColor_clicked()
{
    //设置图例文字颜色
    QColor color = chart->legend()->labelColor();
    color = QColorDialog::getColor(color);
    if(color.isValid())
        chart->legend()->setLabelColor(color);
}



void MainWindow::on_pushButton_titleTextColor_clicked()
{
    //设置图表标题文字颜色
    QColor color = chart->titleBrush().color();
    color = QColorDialog::getColor(color);
    if(color.isValid())
        chart->setTitleBrush(QBrush(color));
}


void MainWindow::on_pushButton_titleFont_clicked()
{
    //设置图表标题文字的字体
    QFont font = chart->titleFont();
    bool ok = false;
    font = QFontDialog::getFont(&ok,font);
    if(ok)
        chart->setTitleFont(font);
}


void MainWindow::on_groupBox_graphItem_clicked(bool checked)
{
    //图例是否可见
    chart->legend()->setVisible(checked);
}


void MainWindow::on_radioButton_top_clicked()
{
    //图例的位置，上方
    chart->legend()->setAlignment(Qt::AlignTop);
}




void MainWindow::on_pushButton_itemFont_clicked()
{
    //图例的字体
    QFont font = chart->legend()->font();
    bool ok  = false;
    font = QFontDialog::getFont(&ok,font);
    if(ok)
        chart->legend()->setFont(font);
}


void MainWindow::on_radioButton_bottom_clicked()
{
    //图例的位置，下方
    chart->legend()->setAlignment(Qt::AlignBottom);

}


void MainWindow::on_radioButton_left_clicked()
{
    //图例的位置，左方
    chart->legend()->setAlignment(Qt::AlignLeft);

}


void MainWindow::on_radioButton_right_clicked()
{
    //图例的位置，右方
    chart->legend()->setAlignment(Qt::AlignRight);

}


void MainWindow::on_pushButton_setMargin_clicked()
{
    //设置边距的四个边距值
    QMargins  mgs;
    mgs.setLeft(ui->spinBox_left->value());
    mgs.setRight(ui->spinBox_right->value());
    mgs.setTop(ui->spinBox_top->value());
    mgs.setBottom(ui->spinBox_bottom->value());
    chart->setMargins(mgs);
}


void MainWindow::on_comboBox_animationEffect_currentIndexChanged(int index)
{
    //动画效果
    chart->setAnimationOptions(QChart::AnimationOptions(index));
}


void MainWindow::on_comboBox_theme_currentIndexChanged(int index)
{
    //图表的主题
    chart->setTheme(QChart::ChartTheme(index));
}


void MainWindow::on_radioButton_sinLine_clicked()
{
    //选择操作序列，Sin曲线
    if(ui->radioButton_sinLine->isChecked())
        curSeries = static_cast<QLineSeries*>(chart->series().at(0));
    else
        curSeries = static_cast<QLineSeries*>(chart->series().at(1));
    //获取序列的属性值，并显示在界面上
    ui->lineEdit_SeriesName->setText(curSeries->name());
    //序列名称
    ui->groupBox_seriesLine->setChecked(curSeries->isVisible());
    //序列可见
    ui->groupBox_dataPoint->setChecked(curSeries->pointsVisible());  //数据点可见
    ui->groupBox_useOpenGL->setChecked(curSeries->useOpenGL());
    ui->horizontalSlider->setValue(curSeries->opacity() * 10);          //透明度
    ui->groupBox_dataLabel->setChecked(curSeries->pointLabelsVisible());      //数据点标签可见
}




void MainWindow::on_radioButton_cosLine_clicked()
{
    //选择操作序列，Cos曲线
    on_radioButton_sinLine_clicked();
}


void MainWindow::on_groupBox_seriesLine_clicked(bool checked)
{
    //设置序列是否可见
    this->curSeries->setVisible(checked);
}


void MainWindow::on_pushButton_LineColor_clicked()
{
    //设置序列的曲线颜色
    QColor color = curSeries->color();
    color = QColorDialog::getColor(color);
    if(color.isValid())
        curSeries->setColor(color);
}


void MainWindow::on_pushButton_LinePen_clicked()
{
    //设置序列线条的pen属性
    QPen pen = curSeries->pen();
    bool ok = false;
    pen = TPenDialog::getPen(pen,&ok);    //使用静态函数设置pen属性
    if(ok)
        curSeries->setPen(pen);
}


void MainWindow::on_groupBox_useOpenGL_clicked(bool checked)
{
    //是否使用OpenGl加速
    curSeries->setUseOpenGL(checked);
}


void MainWindow::on_groupBox_dataLabel_clicked(bool checked)
{
    //是否显示数据点标签
    curSeries->setPointLabelsVisible(checked);
}


void MainWindow::on_groupBox_dataPoint_clicked(bool checked)
{
    //设置数据点是否可见
    curSeries->setPointsVisible(checked);
}


void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    //设置数据点大小
    curSeries->setMarkerSize(arg1);
}


void MainWindow::on_pushButton_dataColor_clicked()
{
    //设置数据点颜色
    QBrush brush = curSeries->brush();
    qDebug()<<"Brush原来的颜色为"<<curSeries->brush().color();
    QColor color = QColorDialog::getColor();
    if(color.isValid()){
        brush.setColor(color);
        curSeries->setBrush(brush);
        curSeries->setPointLabelsColor(color);
    }
    qDebug()<<"Brush的颜色为"<<curSeries->brush().color();
    qDebug()<<"Series的颜色为"<<curSeries->color();
}


void MainWindow::on_radioButton_labelStyley_clicked()
{
    //序列数据点标签的显示格式
    curSeries->setPointLabelsFormat("@yPoint");
}


void MainWindow::on_radioButton_labelStylexy_clicked()
{
    //序列数据点标签的显示格式
    curSeries->setPointLabelsFormat("(@xPoint,@yPoint)");

}


void MainWindow::on_radioButton_radixX_clicked()
{
    //获取当前坐标轴，X轴
    if(ui->radioButton_radixX->isChecked())
        curAxis = static_cast<QValueAxis*>(chart->axes(Qt::Horizontal).at(0));
    else
        curAxis = static_cast<QValueAxis*>(chart->axes(Qt::Vertical).at(0));
    //获取坐标轴的各种属性值，并显示到界面上
    ui->groupBox_chooseRadix->setChecked(curAxis->isVisible());         //坐标轴可见
    ui->checkBox_inverseRadix->setChecked(curAxis->isReverse());        //坐标轴反向
    ui->doubleSpinBox_maxValue->setValue(curAxis->max());
    ui->doubleSpinBox_minValue->setValue(curAxis->min());               //坐标轴最小值

    //轴标题和轴刻度标签
    ui->groupBox_radixLineTitle->setChecked(curAxis->isTitleVisible());      //轴标题可见
    ui->lineEdit_LineTitle->setText(curAxis->titleText());
    ui->groupBox_radixTickLabel->setChecked(curAxis->labelsVisible());
    ui->lineEdit_radixLineTickLabelFormat->setText(curAxis->labelFormat());

    //主刻度和次刻度
    ui->groupBox_radixGridLine->setChecked(curAxis->isLineVisible());       //主刻度可见
    if(curAxis->tickType() == QValueAxis::TicksFixed)                       //主刻度类型
        ui->radioButton_fixTick->setChecked(true);                          //固定刻度
    else
        ui->radioButton_dynimicTick->setChecked(true);
    ui->doubleSpinBox_startTickValue->setValue(curAxis->tickAnchor());      //动态刻度起点值
    ui->doubleSpinBox_tickInterValue->setValue(curAxis->tickInterval());    //动态刻度间隔值
    ui->spinBox_tickCnt->setValue(curAxis->tickCount());                     //主刻度个数

    //主网格线和次网格线
    ui->groupBox_radixGridLine->setChecked(curAxis->isGridLineVisible());        //主网格线可见
    ui->groupBox_radixMinorGridLine->setChecked(curAxis->isMinorGridLineVisible());    //次网格线可见
    ui->spinBox_minorTickCnt->setValue(curAxis->minorTickCount());                        //次刻度个数
}


void MainWindow::on_radioButton_radixY_clicked()
{
    //获取当前坐标,Y轴
    on_radioButton_radixY_clicked();
}


void MainWindow::on_groupBox_radixLineSet_clicked(bool checked)
{
    //坐标轴可见性
    curAxis->setVisible(checked);
}



void MainWindow::on_pushButton_setRadixRange_clicked()
{
    //设置坐标轴的坐标范围
    curAxis->setRange(ui->doubleSpinBox_minValue->value(),ui->doubleSpinBox_maxValue->value());
}


void MainWindow::on_groupBox_radixLineTitle_clicked(bool checked)
{
    //轴标题的可见性
    curAxis->setTitleVisible(checked);
}


void MainWindow::on_pushButton_setLineTitle_clicked()
{
    //设置坐标轴的标题文字
    curAxis->setTitleText(ui->lineEdit_LineTitle->text());
}


void MainWindow::on_groupBox_radixTickLabel_clicked(bool checked)
{
    //设置轴刻度标签可见性
    curAxis->setLabelsVisible(checked);
}


void MainWindow::on_pushButton_setLabelFormat_clicked()
{
    //设置轴刻度标签的文字格式
    curAxis->setLabelFormat(ui->lineEdit_radixLineTickLabelFormat->text());        //如“%.2f”
}


void MainWindow::on_groupBox_radixLine_clicked(bool checked)
{
    //轴线和主刻度可见性
    curAxis->setLineVisible(checked);
}


void MainWindow::on_radioButton_fixTick_clicked()
{
    //固定刻度 单选按钮
    curAxis->setTickType(QValueAxis::TicksFixed);
}


void MainWindow::on_radioButton_dynimicTick_clicked()
{
    //动态刻度 单选按钮
    curAxis->setTickType(QValueAxis::TicksDynamic);
}


void MainWindow::on_radioButton_fixTick_toggled(bool checked)
{
    //固定刻度 单选按钮复选状态变化，更新组件的enable属性
    if(checked){
        ui->spinBox_tickCnt->setEnabled(true);
        ui->doubleSpinBox_startTickValue->setEnabled(false);
        ui->doubleSpinBox_tickInterValue->setEnabled(false);
    }
    else{
        ui->spinBox_tickCnt->setEnabled(false);
        ui->doubleSpinBox_startTickValue->setEnabled(true);
        ui->doubleSpinBox_tickInterValue->setEnabled(true);
    }
}


void MainWindow::on_spinBox_tickCnt_valueChanged(int arg1)
{
    //设置主刻度个数，固定刻度模式下有效
    curAxis->setTickCount(arg1);
}


void MainWindow::on_doubleSpinBox_startTickValue_valueChanged(double arg1)
{
    //设置动态刻度的起点值
    curAxis->setTickAnchor(arg1);
}


void MainWindow::on_doubleSpinBox_tickInterValue_valueChanged(double arg1)
{
    //设置动态刻度的间隔值
    curAxis->setTickInterval(arg1);
}


void MainWindow::on_groupBox_radixGridLine_clicked(bool checked)
{
    //主网格线可见性
    curAxis->setGridLineVisible(checked);
}


void MainWindow::on_pushButton_GridPen_clicked()
{
    //主网格线的线条pen设置
    QPen pen = curAxis->gridLinePen();
    bool ok = false;
    pen = TPenDialog::getPen(pen,&ok);
    if(ok)
        curAxis->setGridLinePen(pen);
}


void MainWindow::on_groupBox_radixMinorGridLine_clicked(bool checked)
{
    //次网格线可见性
    curAxis->setMinorGridLineVisible(checked);
}


void MainWindow::on_spinBox_minorTickCnt_valueChanged(int arg1)
{
    //次刻度个数
    curAxis->setMinorTickCount(arg1);
}


void MainWindow::on_pushButton_minorGridPen_clicked()
{
    //次网格线的线条pen设置
    QPen pen = curAxis->gridLinePen();
    bool ok = false;
    pen = TPenDialog::getPen(pen,&ok);
    if(ok)
        curAxis->setGridLinePen(pen);
}


void MainWindow::on_pushButton_LineTickColor_clicked()
{
    //设置线条颜色
    QColor color = QColorDialog::getColor();
    if(color.isValid())
        curAxis->setLinePenColor(color);
}


void MainWindow::on_pushButton_GridColor_clicked()
{
    //设置主网格线条颜色
    QColor color = QColorDialog::getColor();
    if(color.isValid())
        curAxis->setGridLineColor(color);
}


void MainWindow::on_pushButton_MinorGridColor_clicked()
{
    //设置复网格线条颜色
    QColor color = QColorDialog::getColor();
    if(color.isValid())
        curAxis->setMinorGridLineColor(color);
}


void MainWindow::on_pushButton_6_clicked()
{
    //坐标轴文字颜色
    QColor color = QColorDialog::getColor();
    if(color.isValid())
        curAxis->setLabelsColor(color);
}


void MainWindow::on_pushButton_setLineTitleColor_clicked()
{
    //坐标轴标题颜色
    QColor color = QColorDialog::getColor();
    if(color.isValid())
        curAxis->setTitleBrush(QBrush(color));
}


void MainWindow::on_pushButton_setLabelFont_clicked()
{
    //设置轴线标签字体
    QFont font = curAxis->labelsFont();
    bool ok  = false;
    font = QFontDialog::getFont(&ok,font);
    if(ok)
        curAxis->setLabelsFont(font);
}


void MainWindow::on_pushButton_setLineTitleFont_clicked()
{
    //设置轴线标题字体
    QFont font = curAxis->titleFont();
    bool ok  = false;
    font = QFontDialog::getFont(&ok,font);
    if(ok)
        curAxis->setTitleFont(font);
}


void MainWindow::on_pushButton_lineTickPen_clicked()
{
    //设置主刻度的pen属性
    QPen pen = curAxis->linePen();
    bool ok = false;
    pen = TPenDialog::getPen(pen,&ok);
    if(ok)
        curAxis->setLinePen(pen);
}


void MainWindow::on_action_RedrawChart_triggered()
{
    createChart();
    prepareData();
    updateFromChart();
}

