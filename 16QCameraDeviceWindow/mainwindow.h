#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QtMultimediaWidgets>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaCaptureSession  *session;         //抓取管理器
    QCamera         *camera;                //摄像头
    QImageCapture    *imageCapture;         //抓图器
    QSoundEffect   *soundEffect;        //用于在拍照时播放快门音效
    QMediaRecorder  *recorder;              //用于录像
    QLabel  *labDuration;
    QLabel  *labInfo;
    QLabel  *labFormatInfo;
    bool m_isWorking = false;               //是否已开启摄象头
    void showCameraDeviceInfo(QCameraDevice *device);   //显示摄像头设备信息
    void showCameraSupportFeatures(QCamera *aCamera);       //显示摄像头支持的特性
    void closeEvent(QCloseEvent *event);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_camera_changed(int index);          //与“摄像头下拉列表框的信号关联
    //与QCamera的信号关联
    void do_camera_activeChanged(bool active);
    //与QImageCapturer的信号关联
    void do_image_readyForCapture(bool ready);
    void do_image_captured(int id,const QImage &preview);
    void do_image_saved(int id,const QString &fileName);

    //与QMediaRecorder信号关联
    void do_recorder_duration(qint64 duration);
    void do_recorder_stateChanged(QMediaRecorder::RecorderState state);
    void do_recorder_error(QMediaRecorder::Error error,const QString &errorString);


    void on_action_openCamera_triggered();

    void on_action_closeCamera_triggered();

    void on_action_capture_triggered();

    void on_action_beginRecord_triggered();

    void on_action_stopRecord_triggered();

    void on_action_quite_triggered();

    void on_pushButton_saveFile_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
