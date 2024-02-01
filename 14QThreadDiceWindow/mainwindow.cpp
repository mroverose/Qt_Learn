#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    threadA = new TDiceThread(this);        //创建工作线程
    connect(threadA,&TDiceThread::started,this,&MainWindow::do_threadA_started);
    connect(threadA,&TDiceThread::finished,this,&MainWindow::do_threadA_finished);
    connect(threadA,&TDiceThread::newValue,this,&MainWindow::do_threadA_newValue);
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
    ui->action_start->setEnabled(false);        //开始按钮
    ui->action_pause->setEnabled(false);        //暂停按钮
}

void MainWindow::do_threadA_newValue(int seq, int diceValue){
    //与线程的newValue()信号关联
    QString str = QString::asprintf("第%d次掷骰子，点数为%d",seq,diceValue);
    ui->plainTextEdit->appendPlainText(str);
    QString filename = QString::asprintf(":/dire/dice%d.bmp",diceValue);
    QPixmap  pic(filename);
    ui->label->setPixmap(pic);
}

void MainWindow::on_action_startThread_triggered()
{
    //启动线程按钮
    threadA->start();
}


void MainWindow::on_action_stopThread_triggered()
{
    //结束线程按钮
    threadA->stopThread();
}


void MainWindow::on_action_start_triggered()
{
    //开始按钮，开始掷骰子
    threadA->diceBegin();
    ui->action_start->setEnabled(false);
    ui->action_pause->setEnabled(true);
}


void MainWindow::on_action_pause_triggered()
{
    //暂停按钮，暂停掷骰子
    threadA->dicePause();
    ui->action_start->setEnabled(true);
    ui->action_pause->setEnabled(false);
}

void MainWindow::closeEvent(QCloseEvent *event){
    if(threadA->isRunning()){
        threadA->terminate();       //强制终止线程
        threadA->wait();            //等待线程结束
    }
    event->accept();
}

void MainWindow::on_action_clearText_triggered()
{
    ui->plainTextEdit->clear();
}

