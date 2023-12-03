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


void Widget::on_pushButton_OnLeft_clicked()
{
    //“居左” 按钮
    ui->textEdit->setAlignment(Qt::AlignLeft);
}



void Widget::on_pushButton_OnMiddle_clicked()
{
    //“居中” 按钮
    ui->textEdit->setAlignment(Qt::AlignCenter);
}



void Widget::on_pushButton_OnRight_clicked()
{
    //“居右” 按钮
    ui->textEdit->setAlignment(Qt::AlignRight);
}


void Widget::on_pushButton_Bold_clicked(bool checked)
{
    //"粗体"按钮
    QFont font = ui->textEdit->font();
    font.setBold(checked);
    ui->textEdit->setFont(font);
}


void Widget::on_pushButton_Italic_clicked(bool checked)
{
    //"斜体"按钮
    QFont font = ui->textEdit->font();
    font.setItalic(checked);
    ui->textEdit->setFont(font);
}


void Widget::on_pushButton_UnderLine_clicked(bool checked)
{
    //"下划线"按钮
    QFont font = ui->textEdit->font();
    font.setUnderline(checked);
    ui->textEdit->setFont(font);
}


void Widget::on_checkBox_ReadOnly_clicked(bool checked)
{
    //ReadOnly复选框
    ui->textEdit->setReadOnly(checked);
}


void Widget::on_checkBox_Enable_clicked(bool checked)
{
    //Enable复选框
    ui->textEdit->setEnabled(checked);
}



void Widget::on_checkBox_CheckBtnEnable_clicked(bool checked)
{
    //ClearButtonEnable复选框
    ui->textEdit->setHidden(checked);
}


void Widget::on_radioButton_Black_clicked()
{
    //Black单选按钮
    QPalette plet = ui->textEdit->palette();
    plet.setColor(QPalette::Text,Qt::black);
    ui->textEdit->setPalette(plet);
}


void Widget::on_radioButton_Red_clicked()
{
    //Red单选按钮
    QPalette plet = ui->textEdit->palette();
    plet.setColor(QPalette::Text,Qt::red);
    ui->textEdit->setPalette(plet);
}


void Widget::on_radioButton_Blue_clicked()
{
    //Blue单选按钮
    QPalette plet = ui->textEdit->palette();
    plet.setColor(QPalette::Text,Qt::blue);
    ui->textEdit->setPalette(plet);
}

