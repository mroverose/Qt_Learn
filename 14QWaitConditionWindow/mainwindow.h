#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tdicethread.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    TDiceThread *threadA;       //主线程
    TValueThread *threadValue;
    TPictureThread *threadPic;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void  do_threadA_started();
    void  do_threadA_finished();
    void  do_newValue(int seq,int diceValue);       //与threadValue的newValue()信号连接
    void do_newPicture(QString picName);           //与threadPic的newPicture()信号连接
    void on_action_startThread_triggered();

    void on_action_stopThread_triggered();

    void on_action_clearText_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
