#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setCentralWidget(ui->splitter);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);     //不可编缉
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);    //行选择
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);    //单行选择
    ui->tableView->setAlternatingRowColors(true);

    ui->action_FirstRec->setEnabled(false);
    ui->action_NextRec->setEnabled(false);
    ui->action_PrevRec->setEnabled(false);
    ui->action_TailRec->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_open_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择文件","","SQLite数据库(*.db3)");
    if(aFile.isEmpty())
        return;
    DB = QSqlDatabase::addDatabase("QSQLITE");        //添加SQLITE数据库驱动
    DB.setDatabaseName(aFile);
    if(DB.open())
        selectData();
    else
        QMessageBox::warning(this,"错误","打开数据库文件失败");
    ui->action_FirstRec->setEnabled(true);
    ui->action_NextRec->setEnabled(true);
    ui->action_PrevRec->setEnabled(true);
    ui->action_TailRec->setEnabled(true);
}

void MainWindow::selectData(){
    //1.创建数据模型，查询数据
    qryModel = new QSqlQueryModel(this);
    qryModel->setQuery("SELECT empNo,Name,Gender,Birthday,Province,Department,Salary FROM employee ORDER BY empNo");
    if(qryModel->lastError().isValid()){
        QMessageBox::critical(this,"错误","数据表查询错误，错误信息\n" + qryModel->lastError().text());
        return;
    }
    ui->statusbar->showMessage(QString("记录条数： %1").arg(qryModel->rowCount()));

    //2.设置字段显示标题
    QSqlRecord   rec = qryModel->record();          //获取一条空记录，为了获取字段序号
    qryModel->setHeaderData(rec.indexOf("empNo"),Qt::Horizontal,"工号");
    qryModel->setHeaderData(rec.indexOf("Name"),Qt::Horizontal,"姓名");
    qryModel->setHeaderData(rec.indexOf("Gender"),Qt::Horizontal,"性别");
    qryModel->setHeaderData(rec.indexOf("Birthday"),Qt::Horizontal,"出生日期");
    qryModel->setHeaderData(rec.indexOf("Province"),Qt::Horizontal,"省份");
    qryModel->setHeaderData(rec.indexOf("Department"),Qt::Horizontal,"部门");
    qryModel->setHeaderData(rec.indexOf("Salary"),Qt::Horizontal,"工资");

    //3.创建选择模型
    selModel = new QItemSelectionModel(qryModel,this);
    connect(selModel,&QItemSelectionModel::currentRowChanged,this,&MainWindow::do_currentRowChanged);
    ui->tableView->setModel(qryModel);
    ui->tableView->setSelectionModel(selModel);

    //4.创建数据组件映射
    dataMapper = new QDataWidgetMapper(this);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    dataMapper->setModel(qryModel);
    //界面组件与模型的具体字段的映射
    dataMapper->addMapping(ui->spinBox_numberID,rec.indexOf("empNo"));
    dataMapper->addMapping(ui->lineEdit_name,rec.indexOf("Name"));
    dataMapper->addMapping(ui->lineEdit_gender,rec.indexOf("Gender"));
    dataMapper->addMapping(ui->lineEdit_birth,rec.indexOf("Birthday"));
    dataMapper->addMapping(ui->lineEdit_province,rec.indexOf("Province"));
    dataMapper->addMapping(ui->lineEdit_department,rec.indexOf("Department"));
    dataMapper->addMapping(ui->spinBox_salary,rec.indexOf("Salary"));
    dataMapper->toFirst();         //移动到首记录
    ui->action_open->setEnabled(false);
}


void MainWindow::do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous){
    Q_UNUSED(previous);
    if(!current.isValid()){
        ui->label_photo->clear();
        ui->plainTextEdit->clear();
        return;
    }
    dataMapper->setCurrentModelIndex(current);              //设置当前行

    bool first = (current.row() == 0);                //是否为首记录
    bool last = (current.row() == qryModel->rowCount() - 1);      //是否为尾记录
    ui->action_FirstRec->setEnabled(!first);
    ui->action_TailRec->setEnabled(!last);
    ui->action_NextRec->setEnabled(!last);

    int curRecNo = selModel->currentIndex().row();
    QSqlRecord  curRec = qryModel->record(curRecNo);           //获取当前记录
    int empNo = curRec.value("EmpNo").toInt();                  //主键字段
    QSqlQuery  query;         //根据EmpNo查询Memo和Photo字段的数据
    query.prepare("SELECT EmpNo,Memo,Photo FROM employee WHERE EmpNo = :ID");
    query.bindValue(":ID",empNo);
    query.exec();
    query.first();

    QVariant  va = query.value("Photo");
    if(!va.isValid())
        ui->label_photo->clear();
    else{
        QByteArray  data = va.toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->label_photo->setPixmap(pic.scaledToWidth(ui->label_photo->size().width()));
    }
    QVariant  va2 = query.value("Memo");
    ui->plainTextEdit->setPlainText(va2.toString());
}

void MainWindow::refreshTableView(){
    //刷新tableView的当前行
    int index = dataMapper->currentIndex();             //dataMapper 的当前行号
    QModelIndex   curIndex = qryModel->index(index,1);          //为当前行创建模型索引
    selModel->clearSelection();
    selModel->setCurrentIndex(curIndex,QItemSelectionModel::Select);             //设置当前行

}

void MainWindow::on_action_FirstRec_triggered()
{
    //首记录
    dataMapper->toFirst();
    refreshTableView();
}



void MainWindow::on_action_PrevRec_triggered()
{
    //前一记录
    dataMapper->toPrevious();
    refreshTableView();
}


void MainWindow::on_action_NextRec_triggered()
{
    //后一记录
    dataMapper->toNext();
    refreshTableView();
}


void MainWindow::on_action_TailRec_triggered()
{
    //尾记录
    dataMapper->toLast();
    refreshTableView();
}

