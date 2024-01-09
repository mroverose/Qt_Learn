#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QItemSelectionModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QSqlDatabase  DB;               //数据库连接
    QSqlQueryModel    *qryModel;     //数据模型
    QItemSelectionModel   *selModel;   //选择模型
    void selectData();                  //查询数据
    void updateRecord(int recNo);       //更新一条记录
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_open_triggered();

    void on_action_editRec_triggered();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_action_delete_triggered();

    void on_action_scan_triggered();

    void on_action_insert_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
