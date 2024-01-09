#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QSqlRecord>
#include "tdialogdata.h"
#include <QMessageBox>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->action_open->setEnabled(true);
    ui->action_insert->setEnabled(false);
    ui->action_delete->setEnabled(false);
    ui->action_editRec->setEnabled(false);
    ui->action_scan->setEnabled(false);
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
}

void MainWindow::selectData(){
    //1.创建数据模型，查询数据
    qryModel = new QSqlQueryModel(this);
    selModel = new QItemSelectionModel(qryModel,this);
    ui->tableView->setModel(qryModel);
    ui->tableView->setSelectionModel(selModel);
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

    ui->action_open->setEnabled(false);
    ui->action_insert->setEnabled(true);
    ui->action_delete->setEnabled(true);
    ui->action_editRec->setEnabled(true);
    ui->action_scan->setEnabled(true);
}

void MainWindow::on_action_editRec_triggered()
{
    //编缉当前记录
    int curRecNo = selModel->currentIndex().row();
    updateRecord(curRecNo);
}


void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    //在tableView上双击某条记录，编辑当前记录
    int curRecNo = index.row();
    updateRecord(curRecNo);
}

void MainWindow::updateRecord(int recNo){
    //更新一条记录
    QSqlRecord  curRec = qryModel->record(recNo);           //获取数据模型一条记录
    int empNo = curRec.value("EmpNo").toInt();
    QSqlQuery  query;
    query.prepare("SELECT * FROM employee WHERE EmpNo = :ID");
    query.bindValue(":ID",empNo);
    query.exec();
    query.first();
    if(!query.isValid())
        return;

    curRec = query.record();                               //获取当前记录
    TDialogData  *dataDialog = new TDialogData(this);       //创建对话框
    Qt::WindowFlags   flags = dataDialog->windowFlags();
    dataDialog->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);        //对话固定大小
    dataDialog->setUpdateRecord(curRec);               //更新对话框的数据和界面

    int ret = dataDialog->exec();
    if(ret == QDialog::Accepted){
        QSqlRecord  recData = dataDialog->getRecordData();        //获取对话框返回的记录
        query.prepare("UPDATE employee SET Name =:Name,Gender =:Gender,"
                      "Birthday = :Birthday,Province = :Province,"
                      "Department=:Department,Salary = :Salary,"
                      "Memo=:Memo,Photo=:Photo WHERE EmpNo=:EmpNo");

     //   query.prepare("UPDATE employee SET Name = :Name",Gender = :Gender,))
     //   query.prepare("UPDATE  employee SET (EmpNo,Name,Gender,Birthday,Province,Department,Salary,Memo,Photo) VALUES(:EmpNo,:Name,:Gender,:Birthday,:Province,"
    //                  ":Department,:Salary,:Memo,:Photo)");
        query.bindValue(":Name",recData.value("Name"));
        query.bindValue(":Gender",recData.value("Gender"));
        query.bindValue(":Birthday",recData.value("Birthday"));
        query.bindValue(":Province",recData.value("Province"));
        query.bindValue(":Department",recData.value("Department"));
        query.bindValue(":Salary",recData.value("Salary"));
        query.bindValue(":Memo",recData.value("Memo"));
        query.bindValue(":Photo",recData.value("Photo"));
        query.bindValue(":EmpNo",recData.value("EmpNo"));
        if(!query.exec())
            QMessageBox::critical(this,"错误","记录更新错误\n"+ query.lastError().text());
        else{
           // QSqlQuery  qryTemp = qryModel->query();
           // qryTemp.exec();           //数据模型重新查询数据，更新tableView显示内容
            QString sqlStr = qryModel->query().executedQuery();       //运行过的SELECT语句
            qryModel->setQuery(sqlStr);
        }
    }
    delete dataDialog;
}


void MainWindow::on_action_delete_triggered()
{
    int curRecNo = selModel->currentIndex().row();
    QSqlRecord  curRec = qryModel->record(curRecNo);          //获取当前记录
    if(curRec.isEmpty())
        return;
    int empNo = curRec.value("EmpNo").toInt();                 //获取工号
    QSqlQuery  query;
    query.prepare("DELETE FROM employee WHERE EmpNo = :ID");
    query.bindValue(":ID",empNo);
    if(!query.exec())
        QMessageBox::critical(this,"错误","删除记录出现错误\n" + query.lastError().text());
    else{
        QString sqlstr = qryModel->query().executedQuery();     //运行过的SELECT语句
        qryModel->setQuery(sqlstr);                             //重新查询数据
    }
}


void MainWindow::on_action_scan_triggered()
{
    QSqlQuery   qryUpdate;              //用于临时运行SQL语句
    qryUpdate.prepare("UPDATE employee SET Salary = :Salary WHERE EmpNo = :ID");
    QSqlQuery  qryEmpList;
    qryEmpList.setForwardOnly(true);                //设置仅能前向移动，提高查询性能
    qryEmpList.exec("SELECT empNo,Salary FROM employee ORDER By empNo");
    qryEmpList.first();
    while(qryEmpList.isValid()){
        int empID = qryEmpList.value("empNo").toInt();
        float salary = 1000 + qryEmpList.value("Salary").toFloat();
        qryUpdate.bindValue(":ID",empID);
        qryUpdate.bindValue(":Salary",salary);
        qryUpdate.exec();
        qryEmpList.next();                    //移动到下一条记录
    }
   // QSqlQuery  qryTemp = qryModel->query();
   // qryTemp.exec();                   //数据模型重新查询数据，更新tableView的显示内容
    QString sqlStr = qryModel->query().executedQuery();       //运行过的SELECT语句
    qryModel->setQuery(sqlStr);
    QMessageBox::information(this,"提示","涨工资数据计算完毕");
}


void MainWindow::on_action_insert_triggered()
{
    QSqlQuery query;
    query.exec("SELECT * FROM employee WHERE EmpNo = -1");      //查不出实际记录，只查询出字段信息
    QSqlRecord  curRec = query.record();       //获取当前记录，实际记录为空
    curRec.setValue("EmpNo",qryModel->rowCount() + 3000);

    TDialogData  *dataDialog = new TDialogData(this);
    Qt::WindowFlags flags = dataDialog->windowFlags();
    dataDialog->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);       //对话框大小固定
    dataDialog->setInsertRecord(curRec);         //插入记录

    int ret = dataDialog->exec();
    if(ret == QDialog::Accepted){
        QSqlRecord  recData = dataDialog->getRecordData();
        query.prepare("INSERT INTO employee (EmpNo,Name,Gender,Birthday,Province,Department,Salary,Memo,Photo) VALUES(:EmpNo,:Name,:Gender,:Birthday,:Province,"
                      ":Department,:Salary,:Memo,:Photo)");
        query.bindValue(":EmpNo",recData.value("EmpNo"));
        query.bindValue(":Name",recData.value("Name"));
        query.bindValue(":Gender",recData.value("Gender"));
        query.bindValue(":Birthday",recData.value("Birthday"));
        query.bindValue(":Province",recData.value("Province"));
        query.bindValue(":Department",recData.value("Department"));
        query.bindValue(":Salary",recData.value("Salary"));
        query.bindValue(":Memo",recData.value("Memo"));
        query.bindValue(":Photo",recData.value("Photo"));
        if(!query.exec())
            QMessageBox::critical(this,"错误","插入记录错误\n" + query.lastError().text());
        else{
            QString sqlStr = qryModel->query().executedQuery();       //运行过的SELECT语句
            qryModel->setQuery(sqlStr);                               //重新查询数据
        }
    }
    delete dataDialog;
}

