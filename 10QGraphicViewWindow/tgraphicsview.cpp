#include "tgraphicsview.h"
#include <QMouseEvent>

TGraphicsView::TGraphicsView(QWidget *parent):QGraphicsView(parent)
{

}

void TGraphicsView::mouseMoveEvent(QMouseEvent *event){
    //鼠标移动事件
    QPoint  point = event->pos();           //视图中的坐标
    emit mouseMovePoint(point);
    QGraphicsView::mouseMoveEvent(event);
}

void TGraphicsView::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        QPoint point = event->pos();
        emit mouseClicked(point);
    }
    QGraphicsView::mousePressEvent(event);
}
