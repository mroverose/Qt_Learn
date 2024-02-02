#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaPlayer  *player;              //播放器
    bool    loopPlay = true;            //是否循环播放
    QString durationTime;               //总时长，mm:ss字符串
    QString positionTime;               //当前播放的位置，mm:ss字符串
    QUrl getUrlFromItem(QListWidgetItem *item);     //获取当前item的用户数据
    bool eventFilter(QObject *watched, QEvent *event);      //事件过滤处理
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_stateChanged(QMediaPlayer::PlaybackState  state);       //播放器状态发生变化
    void do_sourceChanged(const QUrl &media);                        //播放源发生变化
    void do_durationChanged(qint64 duration);                        //播放时长发生变化
    void do_positionChanged(qint64 position);                       //播放位置发生变化
    void do_metaDataChanged();                                      //元数据发生变化
    void on_pushButton_addItem_clicked();

    void on_pushButton_removeItem_clicked();

    void on_pushButton_clearList_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_pushButton_preItem_clicked();

    void on_pushButton_nextItem_clicked();

    void on_pushButton_play_clicked();

    void on_pushButton_pause_clicked();

    void on_pushButton_stop_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_pushButton_recyclePlay_clicked(bool checked);

    void on_horizontalSlider_playTimeLine_valueChanged(int value);

    void on_pushButton_mutex_clicked();

    void on_horizontalSlider_volumn_valueChanged(int value);

    void on_pushButton_quit_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
