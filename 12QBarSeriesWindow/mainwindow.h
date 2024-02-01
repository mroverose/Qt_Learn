#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts>

const int COL_NAME = 0;             //姓名列的编号
const int COL_MATH = 1;             //数学列的编号
const int COL_CHINESE = 2;          //语文列的编号
const int COL_ENGLISH = 3;          //英语列的编号
const int COL_AVERAGE = 4;          //平均分列的编号

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    enum TreeColNum{GRADE = 0,MATH,CHINESE,ENGLISH};
    int studCount = 10;         //学生人数
    QStandardItemModel  *dataModel;     //数据模型
    QChart  *curChart;
    void generateData();                    //初始化数据
    void countData();                       //统计数据
    void removeAllAxis(QChart* chart);      //删除某个chart的所有坐标轴

    void iniBarChart();                     //柱状图初始化
    void drawBarChart(bool isVertical = true);
    void iniStackedBar();                   //堆叠柱状图初始化
    void drawStackedBar(bool isVertical = true);
    void iniPercentBar();
    void drawPercentBar(bool isVertical = true);
    void iniPieChart();
    void drawPieChart();
    void buildTreeHeader();             //构建分数段统计表头
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_calcuAverage(QStandardItem *item);  //3个分数列的数据发生变化，重新计算平均分
    void do_barHovered(bool status,int index,QBarSet * barset);
    void do_barClicked(int index,QBarSet *barset);
    void do_pieHovered(QPieSlice *slice,bool state);
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_buildStackedBar_clicked();

    void on_pushButton_buildHorizonStackedBar_clicked();

    void on_pushButton_percentBar_clicked();

    void on_pushButton_horizontalPercentBar_clicked();

    void on_comboBox_course_currentIndexChanged(int index);

    void on_pushButton_drawPieChart_clicked();

    void on_doubleSpinBox_holeSizePieChart_valueChanged(double arg1);

    void on_doubleSpinBox_pieSize_valueChanged(double arg1);

    void on_checkBox_showLegend_clicked(bool checked);

    void on_pushButton_reBuildData_clicked();

    void on_pushButton_reCount_clicked();

    void on_comboBox_chartTheme_currentIndexChanged(int index);

    void on_comboBox_chartAnimation_currentIndexChanged(int index);

    void on_pushButton_quit_clicked();

    void on_tabWidget_currentChanged(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
