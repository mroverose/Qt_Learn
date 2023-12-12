#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labFilePath = new QLabel(this);
    ui->statusbar->addWidget(labFilePath);
    m_model = new QFileSystemModel(this);
    m_model->setRootPath(QDir::currentPath());
    ui->treeView->setModel(m_model);
    ui->listView->setModel(m_model);
    ui->tableView->setModel(m_model);
    //信号与槽关联，点击treeview的一个节点时，此节点设置为listView和tableView的根节点
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),ui->listView,SLOT(setRootIndex(QModelIndex)));
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),ui->tableView,SLOT(setRootIndex(QModelIndex)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->checkBox_FileIsDir->setChecked(m_model->isDir(index));
    labFilePath->setText(m_model->filePath(index));
    ui->label_FileType->setText(m_model->type(index));
    ui->label_FileName->setText(m_model->fileName(index));
    int sz = m_model->size(index) / 1024;
    if(sz < 1024)ui->label_FileSize->setText(QString("%1 KB").arg(sz));
    else ui->label_FileSize->setText(QString::asprintf("%.1f MB",sz / 1024.0));
}


void MainWindow::on_actionSetRoot_triggered()
{
    //设置根目录
    QString dir = QFileDialog::getExistingDirectory(this,"选择目录",QDir::currentPath());
    if(!dir.isEmpty()){
        m_model->setRootPath(dir);
        ui->treeView->setRootIndex(m_model->index(dir));     //设置根目录
    }
}


void MainWindow::on_radioButton_ShowDirAndFiles_clicked()
{
    //"显示目录和文件"单选按钮
    ui->groupBox_filter->setEnabled(true);
    m_model->setFilter(QDir::AllDirs | QDir::Files | QDir::NoDotAndDotDot);
}


void MainWindow::on_radioButton_ShowDir_clicked()
{
    //"只显示目录"单选按钮
    ui->groupBox_filter->setEnabled(false);
    m_model->setFilter(QDir::AllDirs | QDir::NoDotAndDotDot);

}


void MainWindow::on_checkBox_FileNameFilter_clicked(bool checked)
{
    //文件名过滤
    m_model->setNameFilterDisables(!checked);
    ui->comboBox_FileNameFilter->setEnabled(checked);
    ui->pushButton_Apply->setEnabled(checked);
}


void MainWindow::on_pushButton_Apply_clicked()
{
    //"应用"按钮，应用文件名过滤
    QString  filt = ui->comboBox_FileNameFilter->currentText().trimmed();
    QStringList  filter = filt.split(";",Qt::SkipEmptyParts);
    m_model->setNameFilters(filter);
}

