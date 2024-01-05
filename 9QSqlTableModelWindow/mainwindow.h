#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDataWidgetMapper>
#include "tcomboboxdelegate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QSqlDatabase  DB;           //数据库连接
    QSqlTableModel   *tabModel;    //数据模型
    QItemSelectionModel   *selModle;   //选择模型
    QDataWidgetMapper     *dataMapper;  //数据映射
    TComboBoxDelegate     delegateSex;     //自定义代理，性别
    TComboBoxDelegate     delegateDepart;  //自定义代理，部门
    void  openTable();                     //打开数据表
    void  getFieldNames();                 //获取字段名称，填充“排序字段”下拉列表框
    void  showRecordCount();               //在状态栏上显示记录条数
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void  do_currentChanged(const QModelIndex &current,const QModelIndex  &previous);
    void  do_currentRowChanged(const QModelIndex &current,const QModelIndex  &previous);
    void on_action_open_triggered();

    void on_action_add_triggered();

    void on_action_insert_triggered();

    void on_action_delete_triggered();

    void on_action_submit_triggered();

    void on_action_Revert_triggered();

    void on_action_setPhoto_triggered();

    void on_action_delPhoto_triggered();

    void on_action_scan_triggered();

    void on_comboBox_sortItem_currentIndexChanged(int index);

    void on_radioButton_ascend_clicked();

    void on_radioButton_Descend_clicked();

    void on_radioButton_male_clicked();

    void on_radioButton_female_clicked();

    void on_radioButton_all_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
