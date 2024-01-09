#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlRelationalTableModel>
#include <QItemSelectionModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QSqlDatabase DB;                 //数据库连接
    QSqlRelationalTableModel   *tabModel;        //数据模型
    QItemSelectionModel         *selModel;       //选择模型
    void   openTable();                         //打开数据表
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void  do_currentChanged(const QModelIndex &current,const QModelIndex &previous);
    void on_action_openDB_triggered();

    void on_action_listRecord_triggered();

    void on_action_add_triggered();

    void on_action_insert_triggered();

    void on_action_del_triggered();

    void on_action_save_triggered();

    void on_action_cancel_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
