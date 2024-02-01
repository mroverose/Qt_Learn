#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setAlternatingRowColors(true);
    ui->treeWidget->setAlternatingRowColors(true);
    studCount = ui->spinBox_studCount->value();         //学生人数
    //studCount = 4;
    dataModel = new QStandardItemModel(this);           //数据模型
    generateData();                                     //初始化数据
    countData();                                        //数据统计
    //数据模型的itemChanged()信号与自定义的槽函数关联，用于在修改数据后自动计算平均分
    connect(dataModel,SIGNAL(itemChanged(QStandardItem*)),this,SLOT(do_calcuAverage(QStandardItem*)));
    ui->tableView->setModel(dataModel);         //设置数据模型
    iniStackedBar();
    iniBarChart();
    iniPercentBar();
    iniPieChart();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generateData(){
    //数据初始化
    QStringList headerList;
    headerList<<"姓名"<<"数学"<<"语文"<<"英语"<<"平均分";
    dataModel->setHorizontalHeaderLabels(headerList);
    QList<QStandardItem *>   itemList;                           //一行的item列表
    QStandardItem       *item;

    for(int i = 0;i < studCount;i++){
        itemList.clear();
        QString  studName = QString::asprintf("学生%2d",i + 1);
        item = new QStandardItem(studName);                     //创建item
        item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        itemList<<item;                                         //添加到列表
        qreal avgScore = 0;
        for(int j = COL_MATH;j <= COL_ENGLISH;j++){         //数学，语文，英语
            //不包含最后一列
            qreal score = 50.0 + QRandomGenerator::global()->bounded(0,50);         //随机数[0,50]
            avgScore += score;
            item = new QStandardItem(QString::asprintf("%.0f",score));    //创建item
            item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            itemList<<item;                                                         //添加到列表
        }
        item = new QStandardItem(QString::asprintf("%.1f",avgScore / 3));       //创建平均分item
        item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        item->setFlags(item->flags() & (~Qt::ItemIsEditable));          //平均分不允许编缉
        itemList<<item;
        dataModel->appendRow(itemList);
    }
}

void MainWindow::buildTreeHeader(){
    ui->treeWidget->clear();
    QTreeWidgetItem *header = new QTreeWidgetItem();       //创建节点
    header->setText(MainWindow::GRADE,"分数段");
    header->setText(MainWindow::MATH,"数学");
    header->setText(MainWindow::CHINESE,"语文");
    header->setText(MainWindow::ENGLISH,"英语");
    header->setTextAlignment(GRADE,Qt::AlignHCenter | Qt::AlignVCenter);
    ui->treeWidget->setHeaderItem(header);
}

void MainWindow::countData()
{
  //数据统计
      QList<QList<int>> scoreList(5,QList<int>(4,0));
      QStandardItem *item;
      for(int k = 0;k < studCount;k++){
          for(int j = COL_MATH;j <= COL_ENGLISH;j++){
              item = dataModel->item(k,j);
              int score = item->text().toInt();
              if(score < 60)scoreList[0][j]++;
              else if(score >= 60 && score < 70)scoreList[1][j]++;
              else if(score >= 70 && score < 80)scoreList[2][j]++;
              else if(score >= 80 && score < 90)scoreList[3][j]++;
              else if(score >= 90)scoreList[4][j]++;
          }
      }
    for(int i = 0;i < ui->treeWidget->topLevelItemCount();i++){
        QTreeWidgetItem *treeItem = ui->treeWidget->topLevelItem(i);
        treeItem->setText(MATH,QString::asprintf("%d",scoreList[i][MATH]));
        treeItem->setText(CHINESE,QString::asprintf("%d",scoreList[i][CHINESE]));
        treeItem->setText(ENGLISH,QString::asprintf("%d",scoreList[i][ENGLISH]));
    }

}


void MainWindow::do_calcuAverage(QStandardItem *item){
    //自动计算平均分
    if((item->column() < COL_MATH) || (item->column() > COL_ENGLISH))
        return;
    int rowNo = item->row();
    qreal avg = 0;
    QStandardItem  *aItem;
    for(int i = COL_MATH;i <= COL_ENGLISH;i++){
        aItem = dataModel->item(rowNo,i);
        avg += aItem->text().toDouble();
    }
    avg = avg / 3;
    aItem = dataModel->item(rowNo,COL_AVERAGE);         //获取平均分数数据的item
    aItem->setText(QString::asprintf("%.1f",avg));      //更新平均分
}

void MainWindow::iniBarChart(){
    //柱状图初始化
    QChart *chart = new QChart();       //创建chart
    chart->setTitle("Barchart 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->barChartView->setChart(chart);          //为ChartView设置chart
    ui->barChartView->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::iniStackedBar(){
    //初始化堆叠状图
    QChart *chart = new QChart();
    chart->setTitle("StackedBar 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->stackedChartView->setChart(chart);
    ui->stackedChartView->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::iniPercentBar(){
    //百分比柱状图初始化
    QChart *chart = new QChart();
    chart->setTitle("PercentBar 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->percentChartView->setChart(chart);
    ui->percentChartView->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::iniPieChart(){
    //饼图初始化
    QChart *chart = new QChart();
    chart->setTitle("Piechart 演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    ui->pieChartView->setChart(chart);
    ui->pieChartView->setRenderHint(QPainter::Antialiasing);
}


void MainWindow::drawBarChart(bool isVertical){
    QChart *chart = ui->barChartView->chart();          //获取ChartView关联的chart
    if(isVertical)
        chart->setTitle("BarChart 演示");
    else
        chart->setTitle("Horizontal BarChart 演示");
    chart->removeAllSeries();                           //删除所有序列
    removeAllAxis(chart);                               //删除左右坐标轴
    qDebug()<<"Check Here()";
    //创建一个QLineSeries序列显示平均分
    QLineSeries *seriesLine = new QLineSeries();
    seriesLine->setName("平均分");
    QPen pen(Qt::red);
    pen.setWidth(2);
    seriesLine->setPen(pen);
    QFont font = seriesLine->pointLabelsFont();
    font.setPointSize(12);
    font.setBold(true);
    seriesLine->setPointLabelsFont(font);
    seriesLine->setPointLabelsVisible(true);        //显示数据点的标签
    if(isVertical)
        seriesLine->setPointLabelsFormat("@yPoint");    //标签显示的是Y坐标值
    else
        seriesLine->setPointLabelsFormat("@xPoint");    //标签显示的是X坐标值

    //创建3个QBarset数据集，从数据模型获取数据
    QBarSet *setMath = new QBarSet("数学");
    QBarSet *setChinese = new QBarSet("语文");
    QBarSet *setEnglish = new QBarSet("英语");
    for(int i = 0;i < dataModel->rowCount();i++){
        setMath->append(dataModel->item(i,COL_MATH)->text().toInt());       //数学
        setChinese->append(dataModel->item(i,COL_CHINESE)->text().toInt());
        setEnglish->append(dataModel->item(i,COL_ENGLISH)->text().toInt());
        if(isVertical)
            seriesLine->append(i,dataModel->item(i,COL_AVERAGE)->text().toDouble());
        else
            seriesLine->append(dataModel->item(i,COL_AVERAGE)->text().toDouble(),i);
    }
    //创建一个柱状图序列QBarSeries,并添加3个数据集
    QAbstractBarSeries *seriesBar;
    if(isVertical)
        seriesBar = new QBarSeries();
    else
        seriesBar = new QHorizontalBarSeries();
    seriesBar->setLabelsVisible(true);                  //显示棒柱的标签
    seriesBar->setLabelsFormat("@value分");              //棒柱标签格式
    seriesBar->append(setMath);
    seriesBar->append(setChinese);
    seriesBar->append(setEnglish);
    connect(seriesBar,&QAbstractBarSeries::hovered,this,&MainWindow::do_barHovered);
    connect(seriesBar,&QAbstractBarSeries::clicked,this,&MainWindow::do_barClicked);
    chart->addSeries(seriesBar);                                        //添加柱状图序列
    chart->addSeries(seriesLine);                                       //添加折线图序列

    //QBarCategoryAxis坐标轴
    QStringList categories;
    for(int i = 0;i < dataModel->rowCount();i++){
        categories<<dataModel->item(i,COL_NAME)->text();
    }
    QBarCategoryAxis *axisStud = new QBarCategoryAxis();        //用于柱状图的坐标轴
    axisStud->append(categories);                               //添加字符串列表作为坐标值
    //坐标范围
    axisStud->setRange(categories.at(0),categories.at(categories.count() - 1));

    //QValueAxis坐标轴
    QValueAxis *axisValue = new QValueAxis();
    axisValue->setRange(0,100);
    axisValue->setTitleText("分数");
    axisValue->setTickCount(6);
    axisValue->setLabelFormat("%.0f");
    axisValue->applyNiceNumbers();

    //为chart和序列添加坐标轴
    if(isVertical){
        chart->addAxis(axisStud,Qt::AlignBottom);
        chart->addAxis(axisValue,Qt::AlignLeft);
    }
    else{
        chart->addAxis(axisValue,Qt::AlignBottom);
        chart->addAxis(axisStud,Qt::AlignLeft);
    }
    seriesBar->attachAxis(axisStud);
    seriesBar->attachAxis(axisValue);
    seriesLine->attachAxis(axisStud);
    seriesLine->attachAxis(axisValue);
    chart->legend()->setAlignment(Qt::AlignBottom);     //图例显示在下方
}


void MainWindow::on_pushButton_4_clicked()
{
    drawBarChart(true);             //绘制柱状图
}


void MainWindow::on_pushButton_5_clicked()
{
    drawBarChart(false);            //绘制水平柱状图
}

void MainWindow::removeAllAxis(QChart *chart){
    //删除一个chart的所有坐标轴
    QList<QAbstractAxis *> axisList = chart->axes();        //获取坐标轴列表
    int count = axisList.count();
    qDebug()<<"removeALLAxis";
    for(int i = 0;i < count;i++){
        QAbstractAxis * one = axisList.at(i);
        chart->removeAxis(one);                 //从图表中移除坐标轴
        //axisList.removeFirst();                 //从列表中移除坐标轴
        //axisList.removeAt(i);
        delete one;                             //删除坐标轴对象，释放内存
    }
}


void MainWindow::do_barHovered(bool status, int index, QBarSet *barset){
    QString str = "hovered barSet = " + barset->label();
    if(status)
        str += QString::asprintf(",index = %d,value = %.2f",index,barset->at(index));
    else
        str = "";
    ui->statusbar->showMessage(str);
}

void MainWindow::do_barClicked(int index, QBarSet *barset){
    QString str = "clicked barSet = " + barset->label();
    str += QString::asprintf(",index = %d,count = %d",index,barset->count());
    ui->statusbar->showMessage(str);
}

void MainWindow::on_pushButton_buildStackedBar_clicked()
{
    drawStackedBar(true);           //绘制堆叠柱状图
}


void MainWindow::on_pushButton_buildHorizonStackedBar_clicked()
{
    drawStackedBar(false);          //绘制水平堆叠柱状图
}


void MainWindow::drawStackedBar(bool isVertical){
    QChart *chart = ui->stackedChartView->chart();              //获取QChart对象
    if(isVertical)
        chart->setTitle("StackBar演示");
    else
        chart->setTitle("Horizontal StackedBar演示");
    chart->removeAllSeries();                                   //移除所有坐标轴
    removeAllAxis(chart);

    //创建3门课的数据集，从数据模型获取数据
    QBarSet *setMath = new QBarSet("数学");
    QBarSet *setChinese = new QBarSet("语文");
    QBarSet *setEnglish = new QBarSet("英语");
    for(int i = 0;i < dataModel->rowCount();i++){
        setMath->append(dataModel->item(i,COL_MATH)->text().toInt());
        setChinese->append(dataModel->item(i,COL_CHINESE)->text().toInt());
        setEnglish->append(dataModel->item(i,COL_ENGLISH)->text().toInt());
    }

    //创建序列，添加数据集
    QAbstractBarSeries  *seriesBar;
    if(isVertical)
        seriesBar  = new QStackedBarSeries();
    else
        seriesBar = new QHorizontalStackedBarSeries();
    seriesBar->append(setMath);
    seriesBar->append(setChinese);
    seriesBar->append(setEnglish);
    seriesBar->setLabelsVisible(true);                  //显示每小段的标签
    connect(seriesBar,&QAbstractBarSeries::hovered,this,&MainWindow::do_barHovered);
    connect(seriesBar,&QAbstractBarSeries::clicked,this,&MainWindow::do_barClicked);
    chart->addSeries(seriesBar);                    //添加序列到图表中

    //创建QBarCategoryAxis坐标轴
    QStringList categories;
    for(int i = 0;i < dataModel->rowCount();i++){
        categories<<dataModel->item(i,COL_NAME)->text();
    }
    QBarCategoryAxis *axisStud = new QBarCategoryAxis();        //类别坐标轴
    axisStud->append(categories);
    axisStud->setRange(categories.at(0),categories.at(categories.count() - 1));

    //创建QValueAxis坐标轴
    QValueAxis *axisValue = new QValueAxis();
    axisValue->setRange(0,300);
    axisValue->setTitleText("总分");
    axisValue->setTickCount(7);
    axisValue->setLabelFormat("%.0f");
    //为chart和序列添加坐标轴
    if(isVertical){
        chart->addAxis(axisStud,Qt::AlignBottom);
        chart->addAxis(axisValue,Qt::AlignLeft);
    }
    else{
        chart->addAxis(axisStud,Qt::AlignLeft);
        chart->addAxis(axisValue,Qt::AlignBottom);

    }
    seriesBar->attachAxis(axisStud);
    seriesBar->attachAxis(axisValue);
    chart->legend()->setAlignment(Qt::AlignRight);
}

void MainWindow::on_pushButton_percentBar_clicked()
{
    drawPercentBar(true);
}


void MainWindow::on_pushButton_horizontalPercentBar_clicked()
{
    drawPercentBar(false);          //绘制水平百分比柱状图
}


void MainWindow::drawPercentBar(bool isVertical){
    QChart *chart = ui->percentChartView->chart();              //获取QChart对象
    if(isVertical)
        chart->setTitle("PercentBar演示");
    else
        chart->setTitle("Horizontal PercentBar演示");
    chart->removeAllSeries();                                   //移除所有坐标轴
    removeAllAxis(chart);

    //创建数据集，从treeWidget获取数据,一行是一个QBarSet
    QList<QBarSet*> barSetList;             //QBarSet对象列表
    for(int i = 0;i <= 4;i++){
        QTreeWidgetItem *item = ui->treeWidget->topLevelItem(i);
        QBarSet *barSet = new QBarSet(item->text(0));       //分数段文本作为序列名称
        barSetList.append(barSet);
        barSet->append(item->text(1).toDouble());       //数学人数
        barSet->append(item->text(2).toDouble());       //语文人数
        barSet->append(item->text(3).toDouble());       //英语人数
    }

    //创建序列，添加数据集
    QAbstractBarSeries  *seriesBar;
    if(isVertical)
        seriesBar  = new QPercentBarSeries();
    else
        seriesBar = new QHorizontalPercentBarSeries();
    seriesBar->append(barSetList);              //直接添加QBarSet对象列表
    seriesBar->setLabelsVisible(true);                  //显示标签
    connect(seriesBar,&QAbstractBarSeries::hovered,this,&MainWindow::do_barHovered);
    connect(seriesBar,&QAbstractBarSeries::clicked,this,&MainWindow::do_barClicked);
    chart->addSeries(seriesBar);                    //添加序列到图表中

    //创建QBarCategoryAxis坐标轴
    QStringList categories;
    categories<<"数学"<<"语文"<<"英语";
    QBarCategoryAxis *axisSection = new QBarCategoryAxis();        //类别坐标轴
    axisSection->append(categories);
    axisSection->setRange(categories.at(0),categories.at(categories.count() - 1));

    //创建QValueAxis坐标轴
    QValueAxis *axisValue = new QValueAxis();
    axisValue->setRange(0,100);
    axisValue->setTitleText("累积百分比");
    axisValue->setTickCount(6);
    axisValue->setLabelFormat("%.0f%%");

    //为chart和序列添加坐标轴
    if(isVertical){
        chart->addAxis(axisSection,Qt::AlignBottom);
        chart->addAxis(axisValue,Qt::AlignLeft);
    }
    else{
        chart->addAxis(axisSection,Qt::AlignLeft);
        chart->addAxis(axisValue,Qt::AlignBottom);

    }
    seriesBar->attachAxis(axisSection);
    seriesBar->attachAxis(axisValue);
    chart->legend()->setAlignment(Qt::AlignRight);
}

void MainWindow::on_comboBox_course_currentIndexChanged(int index)
{
    //"分析数据"下拉列表框
    Q_UNUSED(index);
    drawPieChart();
}


void MainWindow::on_pushButton_drawPieChart_clicked()
{
    //“绘制饼图”按钮
    drawPieChart();
}


void MainWindow::on_doubleSpinBox_holeSizePieChart_valueChanged(double arg1)
{
    //设置holeSize的Spinbox
    QPieSeries *series;
    series = qobject_cast<QPieSeries*>(ui->pieChartView->chart()->series().at(0));
    series->setHoleSize(arg1);
}


void MainWindow::on_doubleSpinBox_pieSize_valueChanged(double arg1)
{
    //设置pieSize的SpinBox
    QPieSeries *series;
    series = qobject_cast<QPieSeries*>(ui->pieChartView->chart()->series().at(0));
    series->setPieSize(arg1);

}


void MainWindow::on_checkBox_showLegend_clicked(bool checked)
{
    //显示图例CheckBox
    ui->pieChartView->chart()->legend()->setVisible(checked);
}


void MainWindow::drawPieChart(){
    QChart *chart = ui->pieChartView->chart();
    chart->removeAllSeries();                   //移除所有序列

    int colNo = 1 + ui->comboBox_course->currentIndex();            //获取分析对象
    QPieSeries *seriesPie = new QPieSeries();       //创建饼图序列
    seriesPie->setHoleSize(ui->doubleSpinBox_holeSizePieChart->value());
    for(int i = 0;i <= 4;i++){
        QTreeWidgetItem *item = ui->treeWidget->topLevelItem(i);
        seriesPie->append(item->text(0),item->text(colNo).toDouble());      //标签，数值
    }
    //为每个分块设置显示标签
    QPieSlice *slice;           //饼图分块
    for(int i = 0;i <= 4;i++){
        slice = seriesPie->slices().at(i);
        slice->setLabel(slice->label() + QString::asprintf(": %.0f人, %.1f%%",slice->value(),slice->percentage() * 100));
    }
    slice->setExploded(true);               //最后一个设置为exploded
    chart->setAcceptHoverEvents(true);
    connect(seriesPie,&QPieSeries::hovered,this,&MainWindow::do_pieHovered);

    seriesPie->setLabelsVisible(true);      //只影响已创建的分块，必须在添加完分块之后设置
    chart->addSeries(seriesPie);            //添加饼图序列
    chart->setTitle("PieChart----" + ui->comboBox_course->currentText());
    chart->legend()->setAlignment(Qt::AlignRight);
}

void MainWindow::do_pieHovered(QPieSlice *slice, bool state){
    //自定义槽函数，与饼图序列的hovered()信号关联
    slice->setExploded(state);
}

void MainWindow::on_pushButton_reBuildData_clicked()
{
    studCount = ui->spinBox_studCount->value();
    generateData();
}


void MainWindow::on_pushButton_reCount_clicked()
{
    countData();
}


void MainWindow::on_comboBox_chartTheme_currentIndexChanged(int index)
{
    if(ui->tabWidget->currentIndex() == 0)curChart = ui->barChartView->chart();
    else if(ui->tabWidget->currentIndex() == 1)curChart = ui->stackedChartView->chart();
    else if(ui->tabWidget->currentIndex() == 2)curChart = ui->percentChartView->chart();
    else if(ui->tabWidget->currentIndex() == 3)curChart = ui->pieChartView->chart();
    curChart->setTheme(QChart::ChartTheme(index));
}


void MainWindow::on_comboBox_chartAnimation_currentIndexChanged(int index)
{
    if(ui->tabWidget->currentIndex() == 0)curChart = ui->barChartView->chart();
    else if(ui->tabWidget->currentIndex() == 1)curChart = ui->stackedChartView->chart();
    else if(ui->tabWidget->currentIndex() == 2)curChart = ui->percentChartView->chart();
    else if(ui->tabWidget->currentIndex() == 3)curChart = ui->pieChartView->chart();
    curChart->setAnimationOptions(QChart::AnimationOptions(index));
}


void MainWindow::on_pushButton_quit_clicked()
{
    MainWindow::close();
}


void MainWindow::on_tabWidget_currentChanged(int index)
{
    Q_UNUSED(index)
    emit MainWindow::on_comboBox_chartAnimation_currentIndexChanged(ui->comboBox_chartAnimation->currentIndex());
    emit MainWindow::on_comboBox_chartTheme_currentIndexChanged(ui->comboBox_chartTheme->currentIndex());
}

