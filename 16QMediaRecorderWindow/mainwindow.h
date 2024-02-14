#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QtMultimediaWidgets>

#include <QMediaCaptureSession>
#include <QMediaRecorder>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaCaptureSession *session;
    QMediaRecorder *recorder;
    void closeEvent(QCloseEvent *event);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_stateChanged(QMediaRecorder::RecorderState state);          //状态变化
    void do_durationChanged(qint64 duration);                           //录制时间变化
    void on_action_record_triggered();

    void on_action_pause_triggered();

    void on_action_stop_triggered();

    void on_pushButton_recodeOutputFile_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
