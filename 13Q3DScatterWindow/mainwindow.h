#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtDataVisualization>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QWidget     *graphContainer;        //三维图的容器
    Q3DScatter     *graph3D;               //三维图
    QScatter3DSeries    *series;            //序列
    void iniGraph3D();                  //初始化创建三维图
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_itemSelected(int index);        //与series的selectedItemChanged()信号关联
    void on_action_reBuildChart_triggered();

    void on_action_changValue_triggered();


    void on_action_addRow_triggered();

    void on_action_delRow_triggered();

    void on_action_insertRow_triggered();



    void on_comboBox_preView_currentIndexChanged(int index);

    void on_horizontalSlider_horizontalRotate_valueChanged(int value);

    void on_horizontalSlider_VerticalRotate_valueChanged(int value);

    void on_horizontalSlider_scaled_valueChanged(int value);


    void on_toolButton_refresh_clicked();

    void on_toolButton_left_clicked();

    void on_toolButton_up_clicked();

    void on_toolButton_right_clicked();

    void on_toolButton_down_clicked();

    void on_comboBox_mapTheme_currentIndexChanged(int index);

    void on_spinBox_fontSize_valueChanged(int arg1);

    void on_comboBox_selectMode_currentIndexChanged(int index);

    void on_checkBox_showBackground_clicked(bool checked);

    void on_checkBox_showGrid_clicked(bool checked);

    void on_checkBox_showReflection_clicked(bool checked);

    void on_checkBox_reverseValueAxis_clicked(bool checked);

    void on_checkBox_showAxisTitle_clicked(bool checked);

    void on_checkBox_showAxisLabelBackground_clicked(bool checked);

    void on_comboBox_barStyle_currentIndexChanged(int index);

    void on_checkBox_smoothEffect_clicked(bool checked);

    void on_checkBox_showSelectedBarLabels_clicked(bool checked);

    void on_action_seriesColor_triggered();

    void on_doubleSpinBox_scatterSize_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
