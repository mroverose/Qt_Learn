#include "tmylabel.h"
#include <QEvent>

TMyLabel::TMyLabel(QWidget *parent) : QLabel(parent)
{
    this->setAttribute(Qt::WA_Hover,true);   //必须设置这个属性，才能产生hover事件
}


bool TMyLabel::event(QEvent *e){
    if(e->type() == QEvent::HoverEnter){
        QPalette  plet = this->palette();
        plet.setColor(QPalette::WindowText,Qt::red);
        this->setPalette(plet);
    }
    else if(e->type() == QEvent::HoverLeave){
        QPalette plet = this->palette();
        plet.setColor(QPalette::WindowText,Qt::blue);
        this->setPalette(plet);
    }
    return QLabel::event(e);      //运行父类的event()，处理其他类型的事件
}

void TMyLabel::mouseDoubleClickEvent(QMouseEvent *event){
    Q_UNUSED(event);
    emit doubleClicked();           //发射信号
}
