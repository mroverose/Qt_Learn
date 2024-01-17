#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPaintEvent>
#include <QPainterPath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setPalette(Qt::white);    //设置窗口背景色
    setAutoFillBackground(true);
    resize(600,3000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void  MainWindow::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::TextAntialiasing);
    //生成五角星的5个顶点，假设原点在五角星的中心
    qreal   R = 100;
    const qreal  Pi = 3.14159;
    qreal  deg = Pi * 72 / 180;
    QPoint  points[5] = {QPoint(R,0),
                         QPoint(R * qCos(deg), -R * qSin(deg)),
                         QPoint(R * qCos(2 * deg), -R * qSin(2 * deg)),
                         QPoint(R * qCos(3 * deg), -R * qSin(3 * deg)),
                        QPoint(R * qCos(4 * deg), -R * qSin(4 * deg))};

    //设置字体
    QFont font;
    font.setPointSize(14);
    painter.setFont(font);

    //设置画笔
    QPen  penLine;
    penLine.setWidth(2);
    penLine.setColor(Qt::blue);
    penLine.setStyle(Qt::SolidLine);
    penLine.setCapStyle(Qt::FlatCap);
    penLine.setJoinStyle(Qt::BevelJoin);
    painter.setPen(penLine);
    //设置画刷
    QBrush  brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::SolidPattern);             //画刷填充样式
    painter.setBrush(brush);

    //设计绘制五角星的PainterPath，以便重复利用
    QPainterPath   starPath;
    starPath.moveTo(points[0]);
    starPath.lineTo(points[2]);
    starPath.lineTo(points[4]);
    starPath.lineTo(points[1]);
    starPath.lineTo(points[3]);
    starPath.closeSubpath();        //闭合路径，最后一个点与第一个点相连
    starPath.addText(points[0],font,"1");
    starPath.addText(points[1],font,"2");
    starPath.addText(points[2],font,"3");
    starPath.addText(points[3],font,"4");
    starPath.addText(points[4],font,"5");

    //绘图，第一个五角星
    painter.save();                 //保存坐标状态
    painter.translate(100,120);
    painter.drawPath(starPath);     //画五角星
    painter.drawText(0,0,"S1");
    painter.restore();              //恢复坐标状态
    //第二个五角星
    painter.translate(300,120);
    painter.scale(0.8,0.8);         //缩放
    painter.rotate(90);
    painter.drawPath(starPath);
    painter.drawText(0,0,"s2");
    //第三个五角星
    painter.resetTransform();        //复位所有坐标转换
    painter.translate(500,120);
    painter.rotate(-145);
    painter.drawPath(starPath);
    painter.drawText(0,0,"S3");
    event->accept();
}
