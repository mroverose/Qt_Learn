#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPaintEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));     //设置窗口为白色背景
    setAutoFillBackground(true);
    this->resize(400,300);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event){
    QPainter  painter(this);         //创建QPainter对象
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    int W = this->width();          //绘图区宽度
    int H = this->height();         //绘图区高度
    QRect   rect(W/4,H/4,W/2,H/2);  //中间区域矩形
    //设置画笔
    QPen    pen;
    pen.setColor(Qt::red);
    pen.setWidth(3);
    pen.setCapStyle(Qt::FlatCap);        //线条端点样式
    pen.setStyle(Qt::SolidLine);         //线条样式
    pen.setJoinStyle(Qt::BevelJoin);     //线条的连接样式
    painter.setPen(Qt::NoPen);

    //线性渐变
    QLinearGradient  linearGrad(rect.left(),rect.top(),rect.right(),rect.bottom());
    linearGrad.setColorAt(0,Qt::blue);
    linearGrad.setColorAt(0.5,Qt::white);
    linearGrad.setColorAt(1,Qt::blue);

    //辐射渐变
    QRadialGradient   radialGred(W/2,H/2,qMax(W/8,H/8),W/2,H/2);
    radialGred.setColorAt(0,Qt::white);
    radialGred.setColorAt(1,Qt::blue);
   radialGred.setSpread(QGradient::ReflectSpread);
    //径向渐变，焦点不同
  //  QRadialGradient   radialGred(W/2,H/2,W/2,3*H/4,H/2);
  //  radialGred.setColorAt(0,Qt::white);
  //  radialGred.setColorAt(0.8,Qt::blue);


    //圆锥形渐变
    QConicalGradient   coniGrad(W/2,H/2,60);
    coniGrad.setColorAt(0,Qt::blue);
    coniGrad.setColorAt(1,Qt::white);

    //设置笔刷
    QBrush   brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::SolidPattern);        //画刷填充样式
    painter.setBrush(linearGrad);
    //painter.setBrush(radialGred);
   // painter.setBrush(coniGrad);
    //绘图
    painter.drawRect(this->rect());
    event->accept();
}
