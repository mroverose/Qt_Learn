#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tgraphicsview.h"
#include <QGraphicsRectItem>
#include <QResizeEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labViewCord = new QLabel("View 坐标: ",this);
    labViewCord->setMinimumWidth(150);
    ui->statusbar->addWidget(labViewCord);
    labScenceCord = new QLabel("Scene 坐标: ",this);
    labScenceCord->setMinimumWidth(150);
    ui->statusbar->addWidget(labScenceCord);
    labItemCored = new QLabel("Item 坐标: ",this);
    labItemCored->setMinimumWidth(150);
    ui->statusbar->addWidget(labItemCored);
    //TGraphicsView组件view的设置
    ui->graphicsView->setCursor(Qt::CrossCursor);       //十字形光标
    ui->graphicsView->setMouseTracking(true);           //开启鼠标跟踪
    ui->graphicsView->setDragMode(QGraphicsView::RubberBandDrag);   //矩形选择框
    connect(ui->graphicsView,&TGraphicsView::mouseMovePoint,this,&MainWindow::do_mouseMovePoint);
    connect(ui->graphicsView,&TGraphicsView::mouseClicked,this,&MainWindow::do_mouseClicked);
    iniGraphicSystem();                            //图形/视图架构初始化
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniGraphicSystem(){
    QRectF   rect(-200,-100,400,200);            //场景坐标系定义
    scene = new QGraphicsScene(rect,this);
    ui->graphicsView->setScene(scene);           //为视图设置场景
    //画一个矩形框，其大小等于场景大小
    QGraphicsRectItem   *item = new QGraphicsRectItem(rect);
    //可选择，可以获得焦点，但是不能移动
    item->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsFocusable);
    QPen pen;
    pen.setWidth(2);
    item->setPen(pen);
    scene->addItem(item);

    //一个位于场景中心的椭圆，测试局部坐标
    QGraphicsEllipseItem   *item2 = new QGraphicsEllipseItem(-100,-50,200,100);
    //矩形框内创建椭圆，图形项的局部坐标，左上角坐标为(-100,-50)宽200，高100
    item2->setPos(0,0);         //图形项在场景中坐标
    item2->setBrush(QBrush(Qt::blue));
    item2->setFlag(QGraphicsItem::ItemIsMovable);
    item2->setFlag(QGraphicsItem::ItemIsSelectable);
    item2->setFlag(QGraphicsItem::ItemIsFocusable);
    scene->addItem(item2);

    //一个圆，中心位于场景的边缘
    QGraphicsEllipseItem *item3 = new QGraphicsEllipseItem(-50,-50,100,100);
    //矩形框内创建圆，图形项的局部坐标为(-100,-50),宽200,高100
    item3->setPos(rect.right(),rect.bottom());
    item3->setBrush(QBrush(Qt::red));
    item3->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsFocusable);
    scene->addItem(item3);
    scene->clearSelection();
}

void MainWindow::do_mouseMovePoint(QPoint point){
    labViewCord->setText(QString::asprintf("View 坐标： %d,%d",point.x(),point.y()));
    QPointF pointScene = ui->graphicsView->mapToScene(point);       //变换为场景坐标
    labScenceCord->setText(QString::asprintf("Scene 坐标：%.0f,%.0f",pointScene.x(),pointScene.y()));
}

void MainWindow::do_mouseClicked(QPoint point){
    QPointF pointScene = ui->graphicsView->mapToScene(point);         //变换为场景坐标
    QGraphicsItem  *item = nullptr;
    item = scene->itemAt(pointScene,ui->graphicsView->transform());      //获取光标处的图形项
    if(item != nullptr){
        QPointF  pointItem = item->mapFromScene(pointScene);      //变换为图形项的局部坐标
        labItemCored->setText(QString::asprintf("Item 坐标: %.0f,%.0f",pointItem.x(),pointItem.y()));
    }
}

void MainWindow::resizeEvent(QResizeEvent *event){
    QString str = QString::asprintf("Graphics View 坐标，左上角总是(0,0),宽度 = %d,高度 = %d",ui->graphicsView->width(),ui->graphicsView->height());
    ui->label->setText(str);

    QRectF rectF = ui->graphicsView->sceneRect();          //场景矩形区
    QString str2 = QString::asprintf("QGraphicsView::sceneRect = (Left,Top,Width,Height)"" = %.0f,%.0f,%.0f,%.0f",rectF.left(),rectF.top(),rectF.width(),rectF.height());
    ui->label_Rect->setText(str2);
    event->accept();
}
