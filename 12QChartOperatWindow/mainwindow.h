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
    QChart      *chart;         //当前的图表
    QLineSeries     *curSeries;     //当前序列
    QValueAxis      *curAxis;       //当前坐标轴
    void    createChart();           //创建图表
    void    prepareData();          //更新数据
    void    updateFromChart();      //从图表更新到界面
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_setTitle_clicked();

    void on_pushButton_textColor_clicked();

    void on_pushButton_titleTextColor_clicked();

    void on_pushButton_titleFont_clicked();

    void on_groupBox_graphItem_clicked(bool checked);

    void on_radioButton_top_clicked();

    void on_pushButton_itemFont_clicked();

    void on_radioButton_bottom_clicked();

    void on_radioButton_left_clicked();

    void on_radioButton_right_clicked();

    void on_pushButton_setMargin_clicked();

    void on_comboBox_animationEffect_currentIndexChanged(int index);

    void on_comboBox_theme_currentIndexChanged(int index);

    void on_radioButton_sinLine_clicked();

    void on_radioButton_cosLine_clicked();

    void on_groupBox_seriesLine_clicked(bool checked);

    void on_pushButton_LineColor_clicked();

    void on_pushButton_LinePen_clicked();

    void on_groupBox_useOpenGL_clicked(bool checked);

    void on_groupBox_dataLabel_clicked(bool checked);

    void on_groupBox_dataPoint_clicked(bool checked);

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_pushButton_dataColor_clicked();

    void on_radioButton_labelStyley_clicked();

    void on_radioButton_labelStylexy_clicked();

    void on_radioButton_radixX_clicked();

    void on_radioButton_radixY_clicked();

    void on_groupBox_radixLineSet_clicked(bool checked);

    void on_pushButton_setRadixRange_clicked();

    void on_groupBox_radixLineTitle_clicked(bool checked);

    void on_pushButton_setLineTitle_clicked();

    void on_groupBox_radixTickLabel_clicked(bool checked);

    void on_pushButton_setLabelFormat_clicked();

    void on_groupBox_radixLine_clicked(bool checked);

    void on_radioButton_fixTick_clicked();

    void on_radioButton_dynimicTick_clicked();

    void on_radioButton_fixTick_toggled(bool checked);

    void on_spinBox_tickCnt_valueChanged(int arg1);

    void on_doubleSpinBox_startTickValue_valueChanged(double arg1);

    void on_doubleSpinBox_tickInterValue_valueChanged(double arg1);

    void on_groupBox_radixGridLine_clicked(bool checked);

    void on_pushButton_GridPen_clicked();

    void on_groupBox_radixMinorGridLine_clicked(bool checked);

    void on_spinBox_minorTickCnt_valueChanged(int arg1);

    void on_pushButton_minorGridPen_clicked();

    void on_pushButton_LineTickColor_clicked();

    void on_pushButton_GridColor_clicked();

    void on_pushButton_MinorGridColor_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_setLineTitleColor_clicked();

    void on_pushButton_setLabelFont_clicked();

    void on_pushButton_setLineTitleFont_clicked();

    void on_pushButton_lineTickPen_clicked();

    void on_action_RedrawChart_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
