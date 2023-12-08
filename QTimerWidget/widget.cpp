#include "widget.h"
#include "ui_widget.h"
#include <QTime>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //定时器 和定时器精度分组框在垂直方向上设置为i固定尺寸


    m_timer = new QTimer(this);
    m_timer->stop();
    m_timer->setTimerType(Qt::CoarseTimer);
    ui->radioButton_CoarseTimer->setChecked(true);

    connect(m_timer,SIGNAL(timeout()),this,SLOT(do_timer_timeout()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_timer_timeout(){
    //与定时器的timeout()信号关联的槽函数
    QApplication::beep();         //使系统“滴”一声
    QTime   curTime = QTime::currentTime();
    ui->lcdNumber_hour->display(curTime.hour());
    ui->lcdNumber_minute->display(curTime.minute());
    ui->lcdNumber_second->display(curTime.second());
    if(m_timer->isSingleShot()){
        int tmMsec = m_counter.elapsed();    //毫秒数
        QString str = QString("流逝的时间: %1 毫秒").arg(tmMsec);
        ui->label_TimerOutput->setText(str);
        ui->pushButton_start->setEnabled(true);
        ui->pushButton_stop->setEnabled(false);
        ui->pushButton_SingleTimer->setEnabled(true);

    }
}


void Widget::on_pushButton_SingleTimer_clicked()
{
    int intv = ui->spinBox->value();
    QTimer::singleShot(intv,Qt::PreciseTimer,this,&Widget::do_timer_shot);
    m_counter.start();
    ui->pushButton_SingleTimer->setEnabled(true);
}

void Widget::do_timer_shot(){
    QApplication::beep();
    int tmMsec = m_counter.elapsed();
    QString str = QString("流逝的时间： %1毫秒").arg(tmMsec);
    ui->label_TimerOutput->setText(str);
    ui->pushButton_SingleTimer->setEnabled(true);
}


void Widget::on_pushButton_start_clicked()
{
    m_timer->setInterval(ui->spinBox->value());
    if(ui->radioButton_CycleTimer->isChecked())m_timer->setSingleShot(false);
    else m_timer->setSingleShot(true);
    //设置定时器精度
    if(ui->radioButton_PreciseTimer->isChecked())m_timer->setTimerType(Qt::PreciseTimer);
    else if(ui->radioButton_CoarseTimer->isChecked())m_timer->setTimerType(Qt::CoarseTimer);
    else m_timer->setTimerType(Qt::VeryCoarseTimer);

    m_timer->start();
    m_counter.start();
    ui->pushButton_start->setEnabled(false);
    ui->pushButton_stop->setEnabled(true);
    ui->pushButton_SingleTimer->setEnabled(false);
}


void Widget::on_pushButton_stop_clicked()
{
    m_timer->stop();
    int tmMsec = m_counter.elapsed();      //定时器停止
    int ms = tmMsec % 1000;
    int sec = tmMsec / 1000;
    QString str = QString("流逝的时间：%1 秒，%2毫秒").arg(sec).arg(ms,3,10,QChar('0'));
    ui->label_TimerOutput->setText(str);

    ui->pushButton_start->setEnabled(true);
    ui->pushButton_stop->setEnabled(false);
    ui->pushButton_SingleTimer->setEnabled(true);
}

