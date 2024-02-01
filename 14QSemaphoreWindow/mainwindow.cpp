#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    threadDAQ = new TDaqThread(this);        //创建工作线程
    threadShow = new TProcessThread(this);
    connect(threadDAQ,&TDaqThread::started,this,&MainWindow::do_threadA_started);
    connect(threadDAQ,&TDaqThread::finished,this,&MainWindow::do_threadA_finished);
    connect(threadShow,&TProcessThread::dataAvailable,this,&MainWindow::do_readBuffer);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::do_threadA_started(){
    ui->statusbar->showMessage("Thread 状态：thread started");
    ui->action_startThread->setEnabled(false);
    ui->action_stopThread->setEnabled(true);
}

void MainWindow::do_threadA_finished(){
    ui->statusbar->showMessage("Thread 状态：thread finished");
    ui->action_startThread->setEnabled(true);
    ui->action_stopThread->setEnabled(false);
}

void MainWindow::do_readBuffer(int bufferSeq, int *bufferData, int pointCount){
    QString str = QString::asprintf("第%d个缓冲区：",bufferSeq);
    for(int i = 0;i < pointCount;i++){
        str = str + QString::asprintf("%d,",*bufferData);
        bufferData++;
    }
    str += '\n';
    ui->plainTextEdit->appendPlainText(str);
}

void MainWindow::on_action_startThread_triggered()
{
    //启动线程按钮
    threadShow->start();
    threadDAQ->start();
}


void MainWindow::on_action_stopThread_triggered()
{
    //结束线程按钮
    threadShow->stopThread();
    threadDAQ->stopThread();
}



void MainWindow::on_action_clearText_triggered()
{
    ui->plainTextEdit->clear();
}

