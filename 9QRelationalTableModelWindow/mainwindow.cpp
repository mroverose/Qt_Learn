#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QSqlRelationalDelegate>
#include <QSqlRecord>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tableView);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);

    ui->action_add->setEnabled(false);
    ui->action_insert->setEnabled(false);
    ui->action_del->setEnabled(false);
    ui->action_listRecord->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_openDB_triggered()
{
    //打开数据库
    QString aFile = QFileDialog::getOpenFileName(this,"选择文件","","SQLite数据库(*.db3)");

    if(aFile.isEmpty())
        return;

    DB = QSqlDatabase::addDatabase("QSQLITE");        //添加SQLITE数据库驱动
    DB.setDatabaseName(aFile);                        //设置数据库文件
    if(DB.open())
        openTable();
    else
            QMessageBox::warning(this,"错误","打开数据库失败");
}

void MainWindow::openTable(){
    tabModel = new QSqlRelationalTableModel(this,DB);
    tabModel->setTable("studentInfo");                       //设置数据表
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);     //编缉策略
    tabModel->setSort(tabModel->fieldIndex("studentID"),Qt::AscendingOrder);
    selModel = new QItemSelectionModel(tabModel,this);               //创建选择模型
    connect(selModel,&QItemSelectionModel::currentChanged,this,&MainWindow::do_currentChanged);

    ui->tableView->setModel(tabModel);
    ui->tableView->setSelectionModel(selModel);
    //设置字段显示标题
    tabModel->setHeaderData(tabModel->fieldIndex("studentID"),Qt::Horizontal,"学号");
    tabModel->setHeaderData(tabModel->fieldIndex("name"),Qt::Horizontal,"姓名");
    tabModel->setHeaderData(tabModel->fieldIndex("gender"),Qt::Horizontal,"性别");
    tabModel->setHeaderData(tabModel->fieldIndex("departID"),Qt::Horizontal,"学院");
    tabModel->setHeaderData(tabModel->fieldIndex("majorID"),Qt::Horizontal,"专业");
    //设置编码字段的关系
    tabModel->setRelation(tabModel->fieldIndex("departID"),QSqlRelation("departments","departID","department"));
    tabModel->setRelation(tabModel->fieldIndex("majorID"),QSqlRelation("majors","majorID","major"));
    //为外键字段设置默认代理组件
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
    tabModel->select();                   //查询数据表的数据
    ui->action_openDB->setEnabled(false);
    ui->action_add->setEnabled(true);
    ui->action_insert->setEnabled(true);
    ui->action_del->setEnabled(true);
    ui->action_listRecord->setEnabled(true);

}

void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous){
    Q_UNUSED(current);
    Q_UNUSED(previous);
    ui->action_save->setEnabled(tabModel->isDirty());
    ui->action_cancel->setEnabled(tabModel->isDirty());
}

void MainWindow::on_action_listRecord_triggered()
{
    //获取字段列表
    QSqlRecord  emptyRec = tabModel->record();      //获取空记录，只有字段名
    QString  str;
    for(int i = 0;i < emptyRec.count();i++){
            str = str + emptyRec.fieldName(i) + '\n';
    }
    QMessageBox::information(this,"所有字段名",str);
}


void MainWindow::on_action_add_triggered()
{
    //添加一条记录
    QSqlRecord rec = tabModel->record();     //获取一条空记录，只有字段定义
    rec.setValue(tabModel->fieldIndex("studentID"),2024 + tabModel->rowCount() + 1);
    tabModel->insertRecord(tabModel->rowCount(),rec);

    selModel->clearSelection();
    QModelIndex curIndex = tabModel->index(tabModel->rowCount() - 1,1);
    selModel->setCurrentIndex(curIndex,QItemSelectionModel::Select);           //设置当前行


}


void MainWindow::on_action_insert_triggered()
{
    //插入一条记录
    QModelIndex curIndex = ui->tableView->currentIndex();      //当前行的模型索引
    QSqlRecord  rec = tabModel->record();
    tabModel->insertRecord(curIndex.row(),rec);
    selModel->clearSelection();
    selModel->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}


void MainWindow::on_action_del_triggered()
{
    //删除当前记录
    QModelIndex curIndex = selModel->currentIndex();
    tabModel ->removeRow(curIndex.row());
}


void MainWindow::on_action_save_triggered()
{
    //保存修改
    bool res = tabModel->submitAll();
    if(!res)
            QMessageBox::information(this,"消息","数据保存错误，错误信息\n" + tabModel->lastError().text());
    else{
            ui->action_save->setEnabled(false);
            ui->action_cancel->setEnabled(false);
    }
}


void MainWindow::on_action_cancel_triggered()
{
    //取消修改
    tabModel->revertAll();
    ui->action_save->setEnabled(false);
    ui->action_cancel->setEnabled(false);
}

