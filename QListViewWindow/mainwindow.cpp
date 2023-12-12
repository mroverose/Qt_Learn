#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //初始化一个字符串列表中的内容
    m_strList<<"北京"<<"上海"<<"天津"<<"河北"<<"山东"<<"四川"<<"重庆"<<"广东"<<"河南";
    m_model = new QStringListModel(this);
    m_model->setStringList(m_strList);
    ui->listView->setModel(m_model);
    ui->checkBox_Editable->setChecked(true);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_ListRestore_clicked()
{
    m_model->setStringList(m_strList);
}


void MainWindow::on_pushButton_ListClear_clicked()
{
    m_model->removeRows(0,m_model->rowCount());
}


void MainWindow::on_pushButton_ListAddItem_clicked()
{
    m_model->insertRow(m_model->rowCount());
    QModelIndex     index = m_model->index(m_model->rowCount() - 1,0);
    m_model->setData(index,"new Item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_pushButton_ListInsertItem_clicked()
{
    QModelIndex     index = ui->listView->currentIndex();
    m_model->insertRow(index.row());
    m_model->setData(index,"insert item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_pushButton_ListDelItem_clicked()
{
    QModelIndex   index = ui->listView->currentIndex();
    m_model->removeRow(index.row());
}


void MainWindow::on_pushButton_ListMoveUp_clicked()
{
    int curRow = ui->listView->currentIndex().row();
    QModelIndex   index = QModelIndex();
    m_model->moveRow(index,curRow,index,curRow - 1);
}


void MainWindow::on_pushButton_ListMoveDown_clicked()
{
    int curRow = ui->listView->currentIndex().row();
    QModelIndex index = QModelIndex();
    m_model->moveRow(index,curRow,index,curRow + 2);
}


void MainWindow::on_pushButton_ListSort_clicked(bool checked)
{
    if(checked)m_model->sort(0,Qt::AscendingOrder);
    else m_model->sort(0,Qt::DescendingOrder);
}


void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString  str1 = QString::asprintf("模型索引：row = %d,column = %d: ",index.row(),index.column());
    QVariant    var = m_model->data(index,Qt::DisplayRole);
    QString str2 = var.toString();
    ui->statusbar->showMessage(str1 + str2);
}


void MainWindow::on_checkBox_Editable_clicked(bool checked)
{
    if(checked)ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
    else ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


void MainWindow::on_pushButton_TextShowStringList_clicked()
{
    QStringList     tmpList = m_model->stringList();
    ui->plainTextEdit->clear();
    for(int i = 0;i < tmpList.length();i++){
        ui->plainTextEdit->appendPlainText(tmpList.at(i));
    }
}


void MainWindow::on_pushButton_TextClear_clicked()
{
    ui->plainTextEdit->clear();
}

