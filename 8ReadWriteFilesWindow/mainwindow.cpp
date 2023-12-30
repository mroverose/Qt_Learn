#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QFileDialog>
#include <QSaveFile>
#include <QException>
#include <QTextBlock>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setTabsClosable(false);   //不允许关闭分页
    ui->tabWidget->setDocumentMode(true);    //文档模式，无边框
    this->setCentralWidget(ui->tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_OpenFile_triggered()
{
    //QFile打开 按钮
    QString curPath = QDir::currentPath();
    QString dlgTitle = "打开一个文件";
    QString filter = "程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())return;

    QFileInfo fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());        //设置应用程序当前目录
    openbyIO_Whole(aFileName);             //整体读取
    //openByIO_Lines(aFileName);           //逐行读取
}

bool MainWindow::openbyIO_Whole(const QString &aFileName){
    QFile  aFile(aFileName);
    if(!aFile.exists())return false;          //文件不存在
    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text))return false;

    QByteArray all_lines = aFile.readAll();        //读取全部内容
    QString text(all_lines);
    ui->plainTextEdit->setPlainText(text);
    aFile.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}

bool MainWindow::openbyIO_Lines(const QString &aFileName){
    QFile  aFile(aFileName);
    if(!aFile.exists())return false;          //文件不存在
    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text))return false;

    ui->plainTextEdit->clear();

    while(!aFile.atEnd()){
        QByteArray line = aFile.readLine();    //读取一行文字，自动添加“\0”
        QString str = QString::fromUtf8(line);   //从字节数组转换为字符串，文件必须采用UTF-8编码
         str.truncate(str.length() - 1);          //去除增加的空字符
        ui->plainTextEdit->appendPlainText(str);
    }
    aFile.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}

void MainWindow::on_action_SaveFile_triggered()
{
    //QFile另存 按钮
    QString curPath = QDir::currentPath();
    QString dlgTitle = "另存为一个文件";
    QString filter = "h 文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())return;
    QFileInfo fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());      //设置应用程序当前目录
    saveByIO_Whole(aFileName);
}

bool MainWindow::saveByIO_Whole(const QString &aFileName){
    QFile aFile(aFileName);
    if(!aFile.open(QIODevice::WriteOnly | QIODevice::Text))return false;
    QString str = ui->plainTextEdit->toPlainText();         //整个内容作为字符串
    QByteArray  strBytes = str.toUtf8();                    //转换为字节数组，UTF-8编码
    aFile.write(strBytes,strBytes.length());
    aFile.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}


void MainWindow::on_action_SaveSaveFile_triggered()
{
    //QSaveFile 另存 按钮
    QString curPath = QDir::currentPath();
    QString dlgTitle = "另存一个文件";
    QString filter = "h 文件(*.h);;C++文件(*.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())return;
    QFileInfo  fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());
    saveByIO_safe(aFileName);
}

bool MainWindow::saveByIO_safe(const QString &aFileName){
    //使用QSaveFile保存文件
    QSaveFile aFile(aFileName);
    if(!aFile.open(QIODevice::WriteOnly | QIODevice::Text))return false;
    aFile.setDirectWriteFallback(false);

    try{
        QString str = ui->plainTextEdit->toPlainText();        //整个内容作为字符串
        QByteArray  strBytes = str.toUtf8();                  //转换为字节数组，UTF-8编码
        aFile.write(strBytes,strBytes.length());               //写入文件
        aFile.commit();                                       //提交对文件的修改
        ui->tabWidget->setCurrentIndex(0);
        return true;
    }
    catch (QException &e){
        qDebug("保存文件的过程中发生了错误");
        aFile.cancelWriting();                    //出现异常时取消写入
        return false;
    }
}

void MainWindow::on_action_OpenQTextStream_triggered()
{
    //"QTextStream打开" 按钮
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this,"打开一个文件",curPath,"程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty())return;
    QFileInfo fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());

    //openByStream_Whole(aFileName);
    openByStream_Lines(aFileName);
}

bool MainWindow::openByStream_Whole(const QString &aFileName){
    QFile aFile(aFileName);
    if(!aFile.exists())return false;
    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text))return false;

    QTextStream aStream(&aFile);
    aStream.setAutoDetectUnicode(true);                      //自动检测Unicode
    QString str = aStream.readAll();
    ui->plainTextEdit_2->setPlainText(str);
    aFile.close();
    ui->tabWidget->setCurrentIndex(1);
    return true;
}


bool MainWindow::openByStream_Lines(const QString &aFileName){
    QFile aFile(aFileName);
    if(!aFile.exists())return false;
    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text))return false;

    QTextStream aStream(&aFile);
    aStream.setAutoDetectUnicode(true);
    ui->plainTextEdit_2->clear();
    while(!aStream.atEnd()){
        QString str = aStream.readLine();           //读取一行文字
        ui->plainTextEdit_2->appendPlainText(str);
    }
    aFile.close();
    ui->tabWidget->setCurrentIndex(1);
    return true;
}

void MainWindow::on_action_SaveQTextStream_triggered()
{
    //QTextStream 另存 按钮
    QString curPath = QDir::currentPath();
    QString dlgTitle = "另存为一个文件";
    QString filter = "h文件(*.h);;C++文件(*.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())return;
    QFileInfo  fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());
    saveByStream_Safe(aFileName);
    //saveByStream_Whole(aFileName);
}

bool MainWindow::saveByStream_Whole(const QString &aFileName){
    QFile aFile(aFileName);
    if(!aFile.open(QIODevice::WriteOnly | QIODevice::Text))return false;
    QTextStream aStream(&aFile);               //用文本流读取文件内容
    aStream.setAutoDetectUnicode(true);
    QString str = ui->plainTextEdit_2->toPlainText();
    aStream<<str;
    aFile.close();
    return true;
}

bool  MainWindow::saveByStream_Safe(const QString &aFileName){
    QSaveFile aFile(aFileName);
    if(!aFile.open(QIODevice::WriteOnly | QIODevice::Text))return false;

    try{
        //逐段保存
        QTextStream aStream(&aFile);          //用文本流读取文件
        aStream.setAutoDetectUnicode(true);
        QTextDocument *doc = ui->plainTextEdit_2->document();    //文本编缉器中的全部内容
        int cnt = doc->blockCount();
        for(int i = 0;i < cnt;i++){
            QTextBlock textLine = doc->findBlockByNumber(i);    //获取一段
            QString str = textLine.text();                      //提取文本，末尾无"\n"
            aStream<<str<<"\n";
        }
        aFile.commit();
        return true;
    }
    catch (QException &e){
        qDebug("保存文件的过程中发生了错误");
        aFile.cancelWriting();
        return false;
    }
}
