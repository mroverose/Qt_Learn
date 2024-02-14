#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineSeries>
#include <QAudioSource>
#include <QAudioSink>
#include <QFile>
#include "tmydevice.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    const qint64 m_bufferSize = 10000;      //缓冲区大小，字节数
    bool m_isWorking = false;               //是否正在采集或播放
    QLineSeries *lineSeries;                //曲线序列
    QAudioSource *audioSource;              //用于采集原始音频
    TMyDevice   *myDevice;                  //用于显示的I/O设备

    QAudioSink  *audioSink;                 //用于播放原始音频
    QFile   sinkFileDevice;                //用于audioSink播放音频时的I/O设备
    void iniChart();                        //初始化图表
    void closeEvent(QCloseEvent *event);        //事件处理函数
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_IODevice_update(qint64 blockSize);
    void do_sink_stateChanged(QAudio::State state);
    void on_action_preferAudioFormat_triggered();

    void on_action_testAudioFormat_triggered();

    void on_comboBox_sampleFormat_currentIndexChanged(int index);

    void on_spinBox_channelCnt_valueChanged(int arg1);

    void on_action_beginRecord_triggered();

    void on_action_stopRecord_triggered();

    void on_action_playRecFile_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
