#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setCentralWidget(splitter);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);  //项选择
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);  //单项选择
    ui->tableView->setAlternatingRowColors(true);
    ui->groupBox_sort->setEnabled(false);        //排序分组框
    ui->groupBox_dataFilter->setEnabled(false);  //“数据过滤分组框
    ui->action_add->setEnabled(false);
    ui->action_delete->setEnabled(false);
    ui->action_insert->setEnabled(false);
    ui->action_setPhoto->setEnabled(false);
    ui->action_scan->setEnabled(false);
    ui->action_delPhoto->setEnabled(false);
    ui->action_submit->setEnabled(false);
    ui->action_Revert->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_open_triggered()
{
    //“打开” 按钮
    QString aFile = QFileDialog::getOpenFileName(this,"选择文件","","SQLite数据库(*.db3)");
    if(aFile.isEmpty())
        return;
    //打开SQLite数据库
    DB = QSqlDatabase::addDatabase("QSQLITE");    //添加SQLite数据库驱动
    DB.setDatabaseName(aFile);                    //设置数据库名称
    //DB.setHostName();
    //DB.setUserName();
    //DB.setPassword();
    if(!DB.open())
        QMessageBox::warning(this,"错误","打开数据库失败");
    else
        openTable();                               //打开数据表
    ui->action_add->setEnabled(true);
    ui->action_delete->setEnabled(true);
    ui->action_insert->setEnabled(true);
    ui->action_setPhoto->setEnabled(true);
    ui->action_scan->setEnabled(true);
    ui->action_delPhoto->setEnabled(true);
    ui->action_submit->setEnabled(true);
    ui->action_Revert->setEnabled(true);
}

void MainWindow::openTable(){
    //1.创建数据模型，打开数据表
    tabModel = new QSqlTableModel(this,DB);       //数据模型
    tabModel->setTable("employee");              //设置数据表
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);  //数据保存方式
    tabModel->setSort(tabModel->fieldIndex("empNo"),Qt::AscendingOrder);        //排序
    if(!(tabModel->select())){
        QMessageBox::critical(this,"错误信息","打开数据表错误，错误信息：\n" + tabModel->lastError().text());
        return;
    }
    showRecordCount();                   //显示记录条数

    //2.设置字段显示标题
    tabModel->setHeaderData(tabModel->fieldIndex("empNo"),Qt::Horizontal,"工号");
    tabModel->setHeaderData(tabModel->fieldIndex("Name"),Qt::Horizontal,"姓名");
    tabModel->setHeaderData(tabModel->fieldIndex("Gender"),Qt::Horizontal,"性别");
    tabModel->setHeaderData(tabModel->fieldIndex("Birthday"),Qt::Horizontal,"生日");

    tabModel->setHeaderData(tabModel->fieldIndex("Province"),Qt::Horizontal,"省份");
    tabModel->setHeaderData(tabModel->fieldIndex("Department"),Qt::Horizontal,"部门");
    tabModel->setHeaderData(tabModel->fieldIndex("Salary"),Qt::Horizontal,"工资");
    //这两个字段不在tableView中显示
    tabModel->setHeaderData(tabModel->fieldIndex("Memo"),Qt::Horizontal,"备注");
    tabModel->setHeaderData(tabModel->fieldIndex("Photo"),Qt::Horizontal,"照片");

    //3.创建选择模型
    selModle = new QItemSelectionModel(tabModel,this);
    //当前行或列发生变化时，selModel发射currentChanged()信号
    connect(selModle,&QItemSelectionModel::currentChanged,this,&MainWindow::do_currentChanged);
    //当前行变化时，selModel发射currentRowChanged()信号
    connect(selModle,&QItemSelectionModel::currentRowChanged,this,&MainWindow::do_currentRowChanged);

    //4.模型/视图结构
    ui->tableView->setModel(tabModel);         //设置数据模型
    ui->tableView->setSelectionModel(selModle);    //设置选择模型
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Memo"),true);    //隐藏列
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Photo"),true);   //隐藏列

    //5.为tableView中的“性别” 和“部门”两个字段设置自定义代理
    QStringList strList;
    strList<<"男"<<"女";
    bool isEditable = false;
    delegateSex.setItems(strList,isEditable);
    ui->tableView->setItemDelegateForColumn(tabModel->fieldIndex("Gender"),&delegateSex);      //设置代理

    strList.clear();
    strList<<"销售部"<<"技术部"<<"生产部"<<"行政部";
    isEditable = true;
    delegateDepart.setItems(strList,isEditable);
    ui->tableView->setItemDelegateForColumn(tabModel->fieldIndex("Department"),&delegateDepart);    //设置代理

    //6.创建界面组件与模型的字段的数据映射
    dataMapper = new QDataWidgetMapper(this);
    dataMapper->setModel(tabModel);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    //界面组件与模型的具体字段的映射
    dataMapper->addMapping(ui->spinBox_numberID,tabModel->fieldIndex("empNo"));
    dataMapper->addMapping(ui->lineEdit_name,tabModel->fieldIndex("Name"));
    dataMapper->addMapping(ui->lineEdit_gender,tabModel->fieldIndex("Gender"));
    dataMapper->addMapping(ui->lineEdit_birth,tabModel->fieldIndex("Birthday"));
    dataMapper->addMapping(ui->lineEdit_province,tabModel->fieldIndex("Province"));
    dataMapper->addMapping(ui->lineEdit_department,tabModel->fieldIndex("Department"));
    dataMapper->addMapping(ui->spinBox_salary,tabModel->fieldIndex("Salary"));
    dataMapper->addMapping(ui->plainTextEdit,tabModel->fieldIndex("Memo"));
    dataMapper->toFirst();                            //移动到首记录

    //7.获取字段名称列表，填充groupBoxSort
    getFieldNames();
    //8.更新action和界面组件的使能状态
    ui->action_open->setEnabled(false);       //不能打开数据库
    ui->action_add->setEnabled(true);
    ui->action_insert->setEnabled(true);
    ui->action_delete->setEnabled(true);
    ui->action_scan->setEnabled(true);
    ui->groupBox_sort->setEnabled(true);        //排序分组框
    ui->groupBox_dataFilter->setEnabled(true);  //“数据过滤分组框
}

void MainWindow::showRecordCount(){
    //在状态栏显示数据模型的记录条数
    ui->statusbar->showMessage(QString("记录条数：%1").arg(tabModel->rowCount()));
}

void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous){
    Q_UNUSED(current);
    Q_UNUSED(previous);
    ui->action_submit->setEnabled(tabModel->isDirty());
    ui->action_Revert->setEnabled(tabModel->isDirty());
}

void MainWindow::do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous){
    Q_UNUSED(previous);
    //行切换时的状态控制
    ui->action_delete->setEnabled(current.isValid());
    ui->action_setPhoto->setEnabled(current.isValid());
    ui->action_delPhoto->setEnabled(current.isValid());
    if(!current.isValid()){
        ui->label_photo->clear();
        return;
    }

    dataMapper->setCurrentIndex(current.row());       //更新数据映射的行号
    int curRecNo = current.row();                      //获取行号
    QSqlRecord  curRec = tabModel->record(curRecNo);   //获取当前记录
    if(curRec.isNull("Photo"))
        ui->label_photo->clear();                   //photo字段内容为空
    else{
        QByteArray data = curRec.value("Photo").toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->label_photo->setPixmap(pic.scaledToWidth(ui->label_photo->size().width()));
    }
}

void MainWindow::getFieldNames(){
    //获取数据表的所有字段名称
    QSqlRecord  emptyRec = tabModel->record();        //获取空记录，只有字段名
    for(int i = 0;i < emptyRec.count();i++){
        ui->comboBox_sortItem->addItem(emptyRec.fieldName(i));
    }
}

void MainWindow::on_action_add_triggered()
{
    //添加一条记录
    QSqlRecord  rec = tabModel->record();       //获取一条空记录，只有字段定义
    rec.setValue(tabModel->fieldIndex("empNo"),2000 + tabModel->rowCount());
    rec.setValue(tabModel->fieldIndex("Gender"),"男");
    tabModel->insertRecord(tabModel->rowCount(),rec);       //插入到数据模型的最后

    selModle->clearSelection();
    QModelIndex  curIndex = tabModel->index(tabModel->rowCount() - 1,1);
    selModle->setCurrentIndex(curIndex,QItemSelectionModel::Select);           //设置当前行
    showRecordCount();
}



void MainWindow::on_action_insert_triggered()
{
    //插入一条记录
    QModelIndex  curIndex = ui->tableView->currentIndex();    //当前行的模型索引
    QSqlRecord    rec = tabModel->record();                   //获取一条空记录，只有字段定义
    tabModel->insertRecord(curIndex.row(),rec);               //在当前行前面插入一条记录
    selModle->clear();
    selModle->setCurrentIndex(curIndex,QItemSelectionModel::Select);     //设置当前行
    showRecordCount();
}




void MainWindow::on_action_delete_triggered()
{
    //删除一条记录
    QModelIndex    curIndex = selModle->currentIndex();    //获取当前选择单元格的模型索引
    tabModel->removeRow(curIndex.row());
    showRecordCount();
}


void MainWindow::on_action_submit_triggered()
{
    //保存修改
    bool res = tabModel->submitAll();
    if(!res)
        QMessageBox::information(this,"消息","数据保存错误，错误信息\n" + tabModel->lastError().text());
    else {
        ui->action_submit->setEnabled(false);
        ui->action_Revert->setEnabled(false);
    }
    showRecordCount();
}




void MainWindow::on_action_Revert_triggered()
{
    //取消修改
    tabModel->revertAll();
    ui->action_Revert->setEnabled(false);
    ui->action_submit->setEnabled(false);
    showRecordCount();
}


void MainWindow::on_action_setPhoto_triggered()
{
    //设置照片
    QString aFile = QFileDialog::getOpenFileName(this,"选择图片文件","","照片(*.jpg)");
    if(aFile.isEmpty())
        return;
    QByteArray  data;
    QFile *file = new QFile(aFile);
    file->open(QIODevice::ReadOnly);
    data = file->readAll();                  //读取图片数据为字节数据数组
    file->close();

    int curRecNo = selModle->currentIndex().row();
    QSqlRecord   curRec = tabModel->record(curRecNo);         //获取当前记录
    curRec.setValue("Photo",data);                     //设置字段数据
    tabModel->setRecord(curRecNo,curRec);              //修改记录
    QPixmap pic;
    pic.load(aFile);
    ui->label_photo->setPixmap(pic.scaledToWidth(ui->label_photo->width()));
}


void MainWindow::on_action_delPhoto_triggered()
{
    //清除照片
    int curRecNo = selModle->currentIndex().row();
    QSqlRecord   curRec = tabModel->record(curRecNo);    //获取当前记录
    curRec.setNull("Photo");                             //设置为空值
    tabModel->setRecord(curRecNo,curRec);               //修改当前记录
    ui->label_photo->clear();
}


void MainWindow::on_action_scan_triggered()
{
    //涨工资，记录遍历
    if(tabModel->rowCount() == 0)
        return;
    for(int i = 0;i < tabModel->rowCount();i++){
        QSqlRecord  aRec = tabModel->record(i);             //获取一条记录
        float salary = aRec.value("Salary").toFloat();
        salary = salary * 1.1;
        aRec.setValue("Salary",salary);                    //更新字段数据
        tabModel->setRecord(i,aRec);                       //更新记录
    }
    if(tabModel->submitAll())
        QMessageBox::information(this,"消息","涨工资数据计算完毕");
}


void MainWindow::on_comboBox_sortItem_currentIndexChanged(int index)
{
    //在下拉列表框里选择字段进行排序
    if(ui->radioButton_ascend->isChecked())
        tabModel->setSort(index,Qt::AscendingOrder);
    else
        tabModel->setSort(index,Qt::DescendingOrder);
    tabModel->select();
}


void MainWindow::on_radioButton_ascend_clicked()
{
    //升序排序
    tabModel->setSort(ui->comboBox_sortItem->currentIndex(),Qt::AscendingOrder);
    tabModel->select();
}




void MainWindow::on_radioButton_Descend_clicked()
{
    //降序排序
    tabModel->sort(ui->comboBox_sortItem->currentIndex(),Qt::DescendingOrder);
}


void MainWindow::on_radioButton_male_clicked()
{
    tabModel->setFilter(" Gender = '男'");
    showRecordCount();
}


void MainWindow::on_radioButton_female_clicked()
{
    tabModel->setFilter("Gender = '女'");
    showRecordCount();
}


void MainWindow::on_radioButton_all_clicked()
{
    tabModel->setFilter("");
    showRecordCount();
}

