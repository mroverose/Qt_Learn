#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTcpServer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *labListen;
    QLabel *labSocketState;
    QTcpServer  *tcpServer;         //TCP服务器
    QTcpSocket  *tcpSocket = nullptr;   //Tcp通信的socket
    QString getLocalIP();               //获取本机IP地址
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void do_newConnection();        //关联QTcpServer的newConnection信号
    void do_socketStateChange(QAbstractSocket::SocketState socketState);
    void do_clientConnected();          //客户端socket已连接
    void do_clientDisconnected();
    void do_socketReadyRead();          //读取socket传入的数据
    void on_action_startListen_triggered();

    void on_action_stopListen_triggered();

    void on_pushButton_sendMessage_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
