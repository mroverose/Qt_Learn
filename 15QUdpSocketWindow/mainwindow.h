#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel  *labSocketState;
    QUdpSocket  *udpSocket;             //用于UDP通信的socket
    QString getLocalIP();               //获取本机IP地址
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void  do_socketStateChange(QAbstractSocket::SocketState socketState);
    void  do_socketReadyRead();             //读取socket传入的数据
    void on_action_bindPort_triggered();

    void on_action_unBindPort_triggered();

    void on_pushButton_sendMessage_clicked();

    void on_pushButton_broadcastMessage_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
