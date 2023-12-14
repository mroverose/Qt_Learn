#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->installEventFilter(this);
    ui->label_2->installEventFilter(this);
}

Widget::~Widget()
{
    delete ui;
}


bool Widget::eventFilter(QObject *watched, QEvent *event){
    if(watched == ui->label){
        if(event->type() == QEvent::Enter)
            ui->label->setStyleSheet("background-color: rgb(170,255,255);");
        else if(event->type() == QEvent::Leave){
            ui->label->setStyleSheet("");
            ui->label->setText("别离开，靠近我，点击我!");
        }
        else if(event->type() == QEvent::MouseButtonPress)
            ui->label->setText("鼠标键按下了");
        else if(event->type() == QEvent::MouseButtonRelease)
            ui->label->setText("鼠标键抬起了");
    }
    if(watched == ui->label_2){
        if(event->type() == QEvent::Enter)
            ui->label_2->setStyleSheet("background-color: rgb(85,255,127);");
        else if(event->type() == QEvent::Leave){
            ui->label_2->setStyleSheet("");
            ui->label_2->setText("这是可双击的标签");
        }
        else if(event->type() == QEvent::MouseButtonDblClick)
            ui->label_2->setText("鼠标双击");
    }
    return QWidget::eventFilter(watched,event);       //运行类的eventFilter()函数
}                                                      //不能直接反加true;
