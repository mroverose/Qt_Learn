#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent),ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->spinBox_num,SIGNAL(valueChanged(int)),this,SLOT(on_pushButton_TotalAmount_clicked()));
    connect(ui->doubleSpinBox_price,SIGNAL(valueChanged(double)),this,SLOT(on_pushButton_TotalAmount_clicked()));
}

Widget::~Widget()
{
         delete ui;
}


void Widget::on_pushButton_TotalAmount_clicked()
{
         int num = ui->spinBox_num->value();
         float price = ui->doubleSpinBox_price->value();
         float total = num * price;
         ui->doubleSpinBox_total->setValue(total);
}


void Widget::on_spinBox_DecNum_valueChanged(int arg1)
{
         qDebug(ui->spinBox_DecNum->cleanText().toLocal8Bit().data());
         ui->spinBox_BinNum->setValue(arg1);
         ui->spinBox_HexNum->setValue(arg1);
}


void Widget::on_spinBox_BinNum_valueChanged(int arg1)
{
         qDebug(ui->spinBox_DecNum->cleanText().toLocal8Bit().data());
         ui->spinBox_DecNum->setValue(arg1);
         ui->spinBox_HexNum->setValue(arg1);
}


void Widget::on_spinBox_HexNum_valueChanged(int arg1)
{
         qDebug(ui->spinBox_DecNum->cleanText().toLocal8Bit().data());
         ui->spinBox_BinNum->setValue(arg1);
         ui->spinBox_DecNum->setValue(arg1);
}

