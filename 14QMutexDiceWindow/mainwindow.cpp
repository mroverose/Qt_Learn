#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    m_seq = 0;
    m_diceValue = 0;
    ui->setupUi(this);
    threadA = new TDiceThread(this);        //创建工作线程
    connect(threadA,&TDiceThread::started,this,&MainWindow::do_threadA_started);
    connect(threadA,&TDiceThread::finished,this,&MainWindow::do_threadA_finished);
    timer = new QTimer(this);       //创建定时器
    timer->setInterval(200);        //定时周期为200ms
    timer->stop();
    connect(timer,&QTimer::timeout,this,&MainWindow::do_timeOut);
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
    timer->start();                             //重启定时器
    ui->action_start->setEnabled(false);
    ui->action_pause->setEnabled(true);
}


void MainWindow::on_action_pause_triggered()
{
    //暂停按钮，暂停掷骰子
    threadA->dicePause();
    timer->stop();              //停止计时器
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


void MainWindow::do_timeOut(){
    //与定时器的timeout()信号连接
    int tmpSeq = 0,tmpValue = 0;
    bool valid = threadA->readValue(&tmpSeq,&tmpValue);     //读取数值
    if(valid && (tmpSeq != m_seq)){
        m_seq = tmpSeq;
        m_diceValue = tmpValue;
        QString str = QString::asprintf("第%d次掷骰子，点数为%d",m_seq,m_diceValue);
        ui->plainTextEdit->appendPlainText(str);
        QString filename = QString::asprintf(":/dire/dice%d.bmp",m_diceValue);
        QPixmap  pic(filename);
        ui->label->setPixmap(pic);
    }
}
