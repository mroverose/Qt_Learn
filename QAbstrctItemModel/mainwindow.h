#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "tcomboboxdelegate.h"
#include "tfloatspindelegate.h"
#include "tspinboxdelegate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
const int FixedColumnCount = 6;
class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    //自定义代理类
    TSpinBoxDelegate    *intSpinDelegate;
    TFloatSpinDelegate  *floatSpinDelegate;
    TComboBoxDelegate   *comboDelegate;
        //状态栏显示
    QLabel  *labCurFile;
    QLabel  *labCellPos;         //当前单元格行号
    QLabel  *labCellText;       //当前单元格内容
    QStandardItemModel      *m_model;
    QItemSelectionModel     *m_selection;
    void    iniModelData(QStringList &aFileContent);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private  slots:
            //自定义槽函数，与QItemSelectionModel的currentChanged()信连接
    void  do_currentChanged(const QModelIndex &current,const QModelIndex &previous);
    void on_actionOpen_triggered();

    void on_actionAppend_triggered();

    void on_actionInsert_triggered();

    void on_actionDelete_triggered();

    void on_actionAlignLeft_triggered();

    void on_actionAlignRight_triggered();

    void on_actionAlighCenter_triggered();

    void on_actionFontBold_triggered(bool  checked);

    void on_actionModelData_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
