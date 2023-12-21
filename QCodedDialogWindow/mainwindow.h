#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QDialog>
#include "tdialogheaders.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel    *labCellPos;             //当前单元格行列号，在状态栏显示
    QLabel    *labCellText;            //当前单元格内容，在状态栏显示
    QStandardItemModel    *m_model;         //数据模型
    QItemSelectionModel   *m_Selection;    //选择模型
    TDialogHeaders   *dlgSetHeaders;
protected:
    void closeEvent(QCloseEvent *event);      //事件处理函数，关闭窗口时，询问是否退出
    void do_model_currentChanged(const QModelIndex &current,const QModelIndex &previous);

private slots:
    void do_setCellText(int row,int column,QString &text);
    void on_action_SetRowAndCol_triggered();

    void on_action_SetTableHeader_triggered();

    void on_tableView_clicked(const QModelIndex &index);

    void on_action_LocateCell_triggered();

signals:
    void cellIndexChanged(int rowNo,int colNo);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
