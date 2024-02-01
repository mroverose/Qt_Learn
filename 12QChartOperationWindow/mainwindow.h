#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QChart *chart;              //图表对象
    QLabel *lab_chartXY;        //状态栏标签
    QLabel *lab_hoverXY;
    QLabel *lab_clickXY;
    void createChart();         //创建图表
    void prepareData();         //准备数据
    int getIndexFromX(QXYSeries *series,qreal xValue,qreal tol = 0.05);         //返回数据点的序号
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_legendMarkerClicked();              //图例被点击
    void do_mouseMovePoint(QPoint point);       //鼠标移动
    void do_series_clicked(const QPointF &point);   //序列被点击
    void do_series_hovered(const QPointF &point,bool state);    //移入或移出序列
    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_action_cancelSelect_triggered();

    void on_action_zoomIn_triggered();

    void on_action_zoomOut_triggered();

    void on_action_resetSize_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
