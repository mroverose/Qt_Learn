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


void Widget::on_pushButton_TotalAmount_clicked()
{
    //计算总价   按钮
    int num = ui->lineEdit_number->text().toInt();
    //数量：字符串转换为整数
    float price = ui->lineEdit_price->text().toFloat();
    //单价：字符串转换为浮点数
    float total = num * price;
    QString str;
    str = str.setNum(total,'f',2);  //转换为浮点字符串，有2位小数
    ui->lineEdit_sumPrice->setText(str);
}


void Widget::on_pushButton_Dec_clicked()
{
    //读取十进制字符串，将其转换为其他进制显示
    int val = ui->lineEdit_Dec->text().toInt();  //读取字符串转换为10进制整数
    QString str = QString::number(val,16);    //转换为16进制
    str = str.toUpper();
    ui->lineEdit_Hex->setText(str);
    str = QString::number(val,2);
    ui->lineEdit_Bin->setText(str);
}


void Widget::on_pushButton_Bin_clicked()
{
    //读取二进制字符串，将其转换为其他进制显示
    bool ok;
    int val = ui->lineEdit_Bin->text().toInt(&ok,2);  //读取2进制字符串转换为整数
    QString str = QString::number(val,10);
    ui->lineEdit_Dec->setText(str);
    str = QString::number(val,16);    //转换为16进制
    str = str.toUpper();
    ui->lineEdit_Hex->setText(str);
}


void Widget::on_pushButton_Hex_clicked()
{
    //读取十六进制字符串，将其转换为其他进制显示
    bool ok;
    int val = ui->lineEdit_Hex->text().toInt(&ok,16);  //读取16进制字符串转换为整数
    QString str = QString::number(val,10);
    ui->lineEdit_Dec->setText(str);
     str = QString::number(val,2);    //转换为2进制
    ui->lineEdit_Bin->setText(str);
}


void Widget::on_pushButton_qDebugTest_clicked()
{
    //qDebug测试  按钮
    //======setNum()函数，浮点数
    QString str;
    double  num = 12345.65675;
    qDebug("num = %f",num);
    str.setNum('f',5);            //小数点后5位
    qDebug("str = %s",str.toLocal8Bit().data());
    str.setNum(num,'E',5);
    qDebug("str = %s",str.toLocal8Bit().data());  //基数的小数点后5位
    str.setNum(num,'g',5);
    qDebug("str = %s",str.toLocal8Bit().data());  //整数和小数共5位
    str.setNum(num,'g',3);
    qDebug("str = %s",str.toLocal8Bit().data());  //整数和小数共3位
}

