#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event);    //绘制主窗口图片
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_changeTabTitle(QString title);        //用于设置tabWidget当前页的标题
    void on_action_BuildInWidget_triggered();

    void on_action_StandWidget_triggered();

    void on_action_BuildInMainWindow_triggered();

    void on_action_StandMainWindow_triggered();

    void on_tabWidget_tabCloseRequested(int index);

    void on_tabWidget_currentChanged(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
