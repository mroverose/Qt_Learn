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
protected:
    void  closeEvent(QCloseEvent *event);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void  do_threadA_started();
    void  do_threadA_finished();
    void  do_threadA_newValue(int seq,int diceValue);
    void on_action_startThread_triggered();

    void on_action_stopThread_triggered();

    void on_action_start_triggered();

    void on_action_pause_triggered();

    void on_action_clearText_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
