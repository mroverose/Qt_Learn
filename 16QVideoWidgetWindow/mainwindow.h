#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaPlayer    *player;          //播放器
    QString durationTime;
    QString positionTime;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_stateChanged(QMediaPlayer::PlaybackState state);
    void do_durationChanged(qint64 duration);
    void do_positionChanged(qint64 position);
    void on_pushButton_openFile_clicked();

    void on_pushButton_play_clicked();

    void on_pushButton_pause_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_mutex_clicked();

    void on_horizontalSlider_volumn_valueChanged(int value);

    void on_horizontalSlider_playPosition_valueChanged(int value);

    void on_pushButton_fullScreen_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
