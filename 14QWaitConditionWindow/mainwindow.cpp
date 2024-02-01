#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    threadA = new TDiceThread(this);        //创建工作线程
    threadValue = new TValueThread(this);
    threadPic = new TPictureThread(this);
    connect(threadA,&TDiceThread::started,this,&MainWindow::do_threadA_started);
    connect(threadA,&TDiceThread::finished,this,&MainWindow::do_threadA_finished);
    connect(threadValue,&TValueThread::newValue,this,&MainWindow::do_newValue);
    connect(threadPic,&TPictureThread::newPicture,this,&MainWindow::do_newPicture);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::do_threadA_started(){
    //与线程的started()信号关联

    ui->statusbar->showMessage("Thread状态：thread started");
    ui->action_startThread->setEnabled(false);          //启动线程按钮
    ui->action_stopThread->setEnabled(true);            //结束线程按钮
    ui->action_start->setEnabled(true);                 //开始按扭
}

void MainWindow::do_threadA_finished(){
    //与线程finished()信号关联

    ui->statusbar->showMessage("Thread状态：thread finished");
    ui->action_startThread->setEnabled(true);
    ui->action_stopThread->setEnabled(false);
}

void MainWindow::do_newValue(int seq, int diceValue){
    //与线程的newValue()信号关联
    QString str = QString::asprintf("第%d次掷骰子，点数为%d",seq,diceValue);
    ui->plainTextEdit->appendPlainText(str);
}

void MainWindow::do_newPicture(QString picName){
    QPixmap  pic(picName);
    //qDebug()<<"here !!!";
    assert("here wrong");
    ui->label->setPixmap(pic);
}

void MainWindow::on_action_startThread_triggered()
{
    //启动线程按钮
    threadValue->start();
    if(!threadPic->isRunning()){

        threadPic->start();
    }

    if(!threadA->isRunning())
        threadA->start();
}


void MainWindow::on_action_stopThread_triggered()
{
    //结束线程按钮
    threadA->terminate();
    threadA->wait();
}



void MainWindow::on_action_clearText_triggered()
{
    ui->plainTextEdit->clear();
}

