#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QMessageBox>
#include <QEvent>
#include <QMouseEvent>

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

void Widget::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/background.jpeg"));
    //QWidget::paintEvent();         //运行父类的代码
}

void Widget::closeEvent(QCloseEvent *event){
    QString dlgTitle = "消息框";
    QString strInfo = "确定要退出吗？";
    QMessageBox::StandardButton  result = QMessageBox::question(this,dlgTitle,strInfo,QMessageBox::Yes |
                                                                 QMessageBox::No | QMessageBox::Cancel);
    if(result == QMessageBox::Yes)event->accept();
    else event->ignore();
}

void Widget::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){             //鼠标左键
        QPoint pt = event->pos();                       //点击点在窗口上的相对坐标
        QPointF  relaPt = event->position();            //相对坐标
        QPointF  winPt = event->scenePosition();        //相对坐标
        QPointF  globPt = event->globalPosition();      //屏幕或虚拟桌面上的绝对坐标
        QString  str = QString::asprintf("\n鼠标相对坐标pos() = (%d,%d)",pt.x(),pt.y());
        QString  wstr = QString::asprintf("窗口在屏幕绝对坐标wpos() = (%d,%d)",pos().x(),pos().y());
        str = wstr + str;
        str = str + QString::asprintf("\n相对窗口坐标position() = (%.0f,%.0f)",relaPt.x(),relaPt.y());
        str = str + QString::asprintf("\n相对窗口坐标scenePosition() = (%.0f,%.0f)",winPt.x(),winPt.y());
        str = str + QString::asprintf("\n屏幕绝对坐标globalPositon() = (%.0f,%.0f)",globPt.x(),globPt.y());
        ui->label->setText(str);
        ui->label->adjustSize();
        ui->label->move(event->pos());
    }
    QWidget::mousePressEvent(event);
}

void Widget::keyPressEvent(QKeyEvent *event){
    QPoint  pt = ui->pushButton->pos();
    if((event->key() == Qt::Key_A) || (event->key() == Qt::Key_Left))
        ui->pushButton->move(pt.x() - 20,pt.y());
    else if((event->key() == Qt::Key_D) || (event->key() == Qt::Key_Right))
        ui->pushButton->move(pt.x() + 20,pt.y());
    else if((event->key() == Qt::Key_W) || (event->key() == Qt::Key_Up))
        ui->pushButton->move(pt.x(),pt.y() - 20);
    else if((event->key() == Qt::Key_S) || (event->key() == Qt::Key_Down))
        ui->pushButton->move(pt.x(),pt.y() + 20);
    event->accept();           //接受事件，不会再传播到父容器组件
}

void Widget::showEvent(QShowEvent *event){
    Q_UNUSED(event);
    qDebug("showEvent()函数被触发");
}

void Widget::hideEvent(QHideEvent *event){
    Q_UNUSED(event);
    qDebug("hideEvent()函数被触发");
}

void Widget::keyReleaseEvent(QKeyEvent *event){
   // QPoint  wPt = pos();
    int  wheight = height();
    int  wwidth = width();
    QPoint  pt = ui->pushButton->pos();
    if((event->key() == Qt::Key_A) || (event->key() == Qt::Key_Left))
        ui->pushButton->move(pt.x() - 20,pt.y());
    else if((event->key() == Qt::Key_D) || (event->key() == Qt::Key_Right))
        ui->pushButton->move(pt.x() + 20,pt.y());
    else if((event->key() == Qt::Key_W) || (event->key() == Qt::Key_Up))
        ui->pushButton->move(pt.x(),pt.y() - 20);
    else if((event->key() == Qt::Key_S) || (event->key() == Qt::Key_Down))
        ui->pushButton->move(pt.x(),pt.y() + 20);
    pt = ui->pushButton->pos();
    if(pt.x() > wwidth || pt.x() < 0) ui->pushButton->move(0,pt.y());
    if(pt.y() > wheight || pt.y() < 0)ui->pushButton->move(pt.x(),0);
    event->accept();           //接受事件，不会再传播到父容器组件
}
