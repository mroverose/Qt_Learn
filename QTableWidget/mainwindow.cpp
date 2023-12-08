#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include  <QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //状态栏初始化
    labCellIndex = new QLabel("当前单元格坐标: ",this);
    labCellIndex->setMinimumWidth(250);
    labCellType = new QLabel("当前单元格类型: ",this);
    labCellType->setMinimumWidth(200);
    labStudID = new QLabel("学生ID: ",this);
    labStudID->setMinimumWidth(200);
    ui->statusbar->addWidget(labCellIndex);
    ui->statusbar->addWidget(labCellType);
    ui->statusbar->addWidget(labStudID);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_SetTableHeader_clicked()
{
    QStringList headerText;
    headerText<<"姓名"<<"性别"<<"出生日期"<<"民族"<<"分数"<<"是否党员";
    ui->tableWidget->setColumnCount(headerText.size());
    for(int i = 0;i < ui->tableWidget->columnCount();i++){
        QTableWidgetItem    *headerItem = new QTableWidgetItem(headerText.at(i));
        QFont font = headerItem->font();
        font.setBold(true);
        font.setPointSize(14);
        headerItem->setForeground(QBrush(Qt::red));
        headerItem->setFont(font);
        ui->tableWidget->setHorizontalHeaderItem(i,headerItem);
    }
}


void MainWindow::on_pushButton_SetTableIni_clicked()
{
    QDate   birth(2001,4,6);
    ui->tableWidget->clearContents();
    for(int i = 0;i < ui->tableWidget->rowCount();i++){
        QString   strName = QString("学生%1").arg(i);
        QString    strsex = ((i % 2) == 0) ? "男" : "女";
        bool    isParty = ((i % 2) == 0) ? false : true;
        int     score = QRandomGenerator::global()->bounded(60,100);  //随机数范围[60,100)
        createItemsARow(i,strName,strsex,birth,"汉族",isParty,score);
        birth = birth.addDays(20);
        qDebug("isParty = %d ",isParty);
    }
}

void MainWindow::createItemsARow(int rowNum, QString name, QString sex, QDate birth, QString nation, bool isPM, int score){
    uint    studID = 202204000;          //学号基数
    //姓名
    QTableWidgetItem    *item = new QTableWidgetItem(name,MainWindow::ctName);   //type为ctName;
    studID += rowNum;
    item->setData(Qt::UserRole,QVariant(studID));
    ui->tableWidget->setItem(rowNum,MainWindow::colName,item);
    //性别
    QIcon   icon;
    if(sex == "男")icon.addFile(":faviocon.ico");
    else  icon.addFile("faviocon.ico");
    item = new QTableWidgetItem(sex,MainWindow::ctSex);
    item->setIcon(icon);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    Qt::ItemFlags   flags = Qt::ItemIsSelectable | Qt::ItemIsEnabled;
    item->setFlags(flags);
    ui->tableWidget->setItem(rowNum,MainWindow::colSex,item);
    //出生日期
    QString     str = birth.toString("yyyy-MM-dd");
    item = new QTableWidgetItem(str,MainWindow::ctBirth);
    item->setTextAlignment(Qt::AlignLeft  | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNum,MainWindow::colBirth,item);
    //民族
    item = new QTableWidgetItem(nation,MainWindow::ctPartyM);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNum,MainWindow::colNation,item);
    //是否党员
    item = new QTableWidgetItem("党员",MainWindow::ctPartyM);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    flags = Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled;
    item->setFlags(flags);
    if(isPM){item->setCheckState(Qt::Checked);item->setBackground(QBrush(Qt::cyan));}
    else {item->setCheckState(Qt::Unchecked);item->setBackground(QBrush(Qt::yellow));}
    ui->tableWidget->setItem(rowNum,MainWindow::colPartyM,item);
    //分数
    str.setNum(score);
    item = new QTableWidgetItem(str,MainWindow::ctScore);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNum,MainWindow::colScore,item);
}




void MainWindow::on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    Q_UNUSED(previousColumn);
    Q_UNUSED(previousRow);
    QTableWidgetItem    *item = ui->tableWidget->item(currentColumn,currentRow);
    if(item == nullptr)return;
    labCellIndex->setText(QString::asprintf("当前单元格坐标: %d 行, %d 列",currentRow,currentColumn));
    int CellType = item->type();
    labCellType->setText(QString::asprintf("当前单元格类型： %d",CellType));

    item = ui->tableWidget->item(currentRow,MainWindow::colName);
    uint ID = item->data(Qt::UserRole).toUInt();
    labStudID->setText(QString::asprintf("学生ID: %d",ID));
}


void MainWindow::on_pushButton_SetTableInsertCol_clicked()
{
    //插入行  按钮
    int curRow  = ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(curRow);     //插入一行，但不会为单元格创建item
    createItemsARow(curRow,"新学生","男",QDate::fromString("2003-10-01","yyyy-M-d"),"苗族",false,76);
}


void MainWindow::on_pushButton_SetTableAddCol_clicked()
{
    //添加行  按钮
    int curRow  = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(curRow);     //插入一行，但不会为单元格创建item
    createItemsARow(curRow,"新学生","女",QDate::fromString("2003-4-21","yyyy-M-d"),"壮族",false,86);
}



void MainWindow::on_pushButton_SetTableDelCol_clicked()
{
    //“删除当前行”
    int curRow = ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(curRow);
}


void MainWindow::on_pushButton_SetTableHeight_clicked()
{
    //int curRow = ui->tableWidget->currentRow();
    ui->tableWidget->resizeRowsToContents();
}


void MainWindow::on_pushButton_SetTableWidth_clicked()
{
    ui->tableWidget->resizeColumnsToContents();
}


void MainWindow::on_checkBox_TabelEditabel_clicked(bool checked)
{
    if(checked)ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
    else ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);   //不允许编缉
}


void MainWindow::on_checkBox_TableShowHeader_clicked(bool checked)
{
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}


void MainWindow::on_checkBox_TableShowCol_clicked(bool checked)
{
    ui->tableWidget->verticalHeader()->setVisible(checked);
}


void MainWindow::on_checkBox_TableColBkColor_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);
}


void MainWindow::on_radioButton_TableColSelect_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}


void MainWindow::on_radioButton_TableTdSelect_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
}


void MainWindow::on_pushButton_SetTableContentToText_clicked()
{
    QTableWidgetItem   *item;
    ui->plainTextEdit->clear();
    for(int i = 0;i < ui->tableWidget->rowCount();i++){
        QString str = QString::asprintf("第 %d 行: ",i + 1);
        for(int j = 0;j < ui->tableWidget->columnCount() - 1;j++){
            item = ui->tableWidget->item(i,j);
            str += item->text() + "   ";
        }
        item = ui->tableWidget->item(i,colPartyM);
        if(item->checkState() == Qt::Checked)str = str + "党员";
        else  str += "群众";
        ui->plainTextEdit->appendPlainText(str);
    }
}


void MainWindow::on_pushButton_SetTableCol_clicked()
{
    ui->tableWidget->setRowCount(ui->spinBox->value());
}

