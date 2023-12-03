#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_qDebugTime_clicked()
{
    QTime tm1(13,24,5);
    QString str = tm1.toString("HH:mm:ss");
    qDebug("Original time = %s",str.toLocal8Bit().data());
    QTime tm2 = tm1.addMSecs(150);
    str = tm2.toString("HH:mm:ss");
    qDebug("150s later,time = %s",str.toLocal8Bit().data());

    tm2 = QTime::currentTime();
    str = tm2.toString("HH:mm:ss zzz");
    qDebug("Current time = %s",str.toLocal8Bit().data());
    qDebug("Hour = %d",tm2.hour());
    qDebug("Minute = %d",tm2.minute());
    qDebug("Second = %d",tm2.second());
    qDebug("MSecond = %d",tm2.msec());
}


void Widget::on_pushButton_5_clicked()
{
    QDate  dt1(2021,7,6);
    QString  str = dt1.toString("yyyy-MM-dd");
    qDebug("dt1 = %s",str.toLocal8Bit().data());
    QDate dt2;
    dt2.setDate(2022,4,21);
    str = dt2.toString("yyyy-MM-dd");
    qDebug("dt2 = %s",str.toLocal8Bit().data());
    qDebug("Days between dt2 and dt2 = %lld",dt2.daysTo(dt1));

    dt2 = QDate::currentDate();
    str = dt2.toString("yyyy-MM-dd");
    qDebug("Current date = %s",str.toLocal8Bit().data());
    qDebug("Year = %d",dt2.year());
    qDebug("Month = %d",dt2.month());
    qDebug("Day = %d",dt2.day());
    qDebug("Day of Week = %d",dt2.dayOfWeek());
}




void Widget::on_pushButton_qDebugDateTime_clicked()
{
    QDateTime  dt1 = QDateTime::currentDateTime();
    QString str = dt1.toString("yyyy-MM-dd hh:mm:ss");
    qDebug("dt1 = %s",str.toLocal8Bit().data());

    QDate dt = dt1.date();
    str = dt.toString("yyyy-MM-dd");
    qDebug("dt1.date() = %s",str.toLocal8Bit().data());
    QTime tm = dt1.time();
    str = tm.toString("hh:mm:ss zzzz");
    qDebug("dt1.time() = %s",str.toLocal8Bit().data());

    qint64 ms = dt1.toSecsSinceEpoch();
    qDebug("dt1.toSecsSinceEpoch() = %lld",ms);
    ms += 120;
    dt1.setSecsSinceEpoch(ms);
    str = dt1.toString("yyyy-MM-dd hh:mm:ss");
    qDebug("dt1 + 120s = %s",str.toLocal8Bit().data());
}


void Widget::on_pushButton_SetCurDataAndTime_clicked()
{
    QDateTime  curDateTime = QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
    ui->lineEdit_time->setText(curDateTime.toString("hh:mm:ss"));
    ui->dateEdit->setDate(curDateTime.date());
    ui->lineEdit__date->setText(curDateTime.toString("yyyy-MM-dd"));
    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->lineEdit_dataAndtime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}


void Widget::on_pushButton_SetTimeFromString_clicked()
{
    QString str = ui->lineEdit_time->text();
    str = str.trimmed();
    if(!str.isEmpty()){
        QTime tm = QTime::fromString(str,"hh:mm:ss");
        ui->timeEdit->setTime(tm);
    }
}


void Widget::on_pushButton_SetDateFromString_clicked()
{
    QString str = ui->lineEdit__date->text();
    str = str.trimmed();
    if(!str.isEmpty()){
        QDate  dt = QDate::fromString(str,"yyyy-MM-dd");
        ui->dateEdit->setDate(dt);
    }
}


void Widget::on_pushButton_SetDateAndTimeFromString_clicked()
{
    QString str = ui->lineEdit_dataAndtime->text();
    str = str.trimmed();
    if(!str.isEmpty()){
        QDateTime datm = QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(datm);
    }
}


void Widget::on_calendarWidget_selectionChanged()
{
    QDate dt = ui->calendarWidget->selectedDate();
    QString str = dt.toString("yyyy年M月d日");
    ui->lineEdit_calendar->setText(str);
}

