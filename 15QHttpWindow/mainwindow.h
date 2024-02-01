#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QFile>
#include <QNetworkReply>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QNetworkAccessManager  networkManager;          //网络管理
    QNetworkReply   *reply;                        //网络响应
    QFile     *downloadedFile;                      //下载保存的临时文件
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_finished();
    void do_readyRead();
    void do_downloadProgress(qint64 bytesRead,qint64 totalBytes);
    void on_pushButton_downLoad_clicked();

    void on_pushButton_defaultSavePath_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
