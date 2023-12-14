#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->label,SIGNAL(doubleClicked()),this,SLOT(do_doubleClick()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event){
    Q_UNUSED(event);
    ui->label->setText("窗口被双击了");
    ui->label->adjustSize();
    ui->label_2->setText("窗口被双击了！");
    ui->label_2->adjustSize();
}

void Widget::do_doubleClick(){
    ui->label->setText("标签被双击了，信号的槽函数响应");
    ui->label->adjustSize();
    ui->label_2->setText("第一个标签被双击了！");
    ui->label_2->adjustSize();
}
