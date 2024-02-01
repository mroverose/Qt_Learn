#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mythread.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    TDaqThread      *threadDAQ;         //数据采集线程
    TProcessThread  *threadShow;        //数据处理线程

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_readBuffer(int bufferSeq,int* bufferData,int pointCount);

    void do_threadA_started();

    void do_threadA_finished();

    void on_action_startThread_triggered();

    void on_action_stopThread_triggered();

    void on_action_clearText_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
