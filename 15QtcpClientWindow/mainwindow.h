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
    QTcpSocket  *tcpClient;         //socket
    QLabel *labSocketState;
    QString getLocalIP();               //获取本机IP地址
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void do_connected();        //关联QTcpServer的newConnection信号
    void do_socketStateChange(QAbstractSocket::SocketState socketState);    
    void do_disconnected();
    void do_socketReadyRead();          //读取socket传入的数据

    void on_pushButton_sendMessage_clicked();

    void on_action_connectToServer_triggered();

    void on_action_stopConnect_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
