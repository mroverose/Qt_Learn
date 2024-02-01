#include "tchartview.h"

TChartView::TChartView(QWidget *parent):QChartView(parent) {
    this->setMouseTracking(true);       //必须设置为true,这样才会实时产生mouseMoveEvent事件
    this->setDragMode(QGraphicsView::NoDrag);   //设置拖动模式
    this->setRubberBand(QChartView::NoRubberBand);    //设置自动放大模式
}

TChartView::~TChartView()
{

}

void TChartView::setCustomZoomRect(bool custom){
    m_customZoom = custom;
}


void TChartView::mousePressEvent(QMouseEvent *event){
    //鼠标左键被 按下，记录beginPoint
    if(event->button() == Qt::LeftButton)
        beginPoint = event->pos();
    QChartView::mousePressEvent(event);                     //父类继续处理事件，必须如此调用
}

void TChartView::mouseReleaseEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        endPoint = event->pos();
        if((this->dragMode() == QGraphicsView::ScrollHandDrag) && (this->rubberBand() == QChartView::NoRubberBand))
            chart()->scroll(beginPoint.x() - endPoint.x(),endPoint.y() - beginPoint.y());
        else if(m_customZoom && this->dragMode() == QGraphicsView::RubberBandDrag){
            //放大
            QRectF rectF;
            rectF.setTopLeft(beginPoint);
            rectF.setBottomRight(endPoint);
            this->chart()->zoomIn(rectF);        //矩形区域被放大
        }
    }
    QChartView::mouseReleaseEvent(event);       //父类继续处理事件，必须如此调用
}

void TChartView::mouseMoveEvent(QMouseEvent *event){
    //鼠标移动事件
    QPoint point = event->pos();
    emit mouseMovePoint(point);             //发射信号
    QChartView::mouseMoveEvent(event);      //父类继续处理事件
}

void TChartView::keyPressEvent(QKeyEvent *event){
    //按键控制
    switch(event->key()){
        case Qt::Key_Left:
            chart()->scroll(10,0);  break;
        case Qt::Key_Right:
            chart()->scroll(-10,0); break;
        case Qt::Key_Up:
            chart()->scroll(0,-10); break;
        case Qt::Key_Down:
            chart()->scroll(0,50);break;
        case Qt::Key_PageUp:
            chart()->scroll(0,-50); break;
        case Qt::Key_PageDown:
            chart()->scroll(0,50);break;
        default:
            QGraphicsView::keyPressEvent(event);
    }
}

void TChartView::wheelEvent(QWheelEvent *event){
    //鼠标滚轮事件处理，缩放
    QPoint numDegree = event->angleDelta() / 8;
    if(!numDegree.isNull()){
        QPoint numSteps = numDegree / 15;      //步数
        int stepY = numSteps.y();               //垂直方向上滚轮的滚动步数
        if(stepY > 0)
            chart()->zoom(1.1 * stepY);
        else
            chart()->zoom(-0.9 * stepY);
    }
    event->accept();
}
