#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QUdpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *labSocketState;
    QUdpSocket  *udpSocket;
    QHostAddress   groupAddress;        //组播地址
    QString getLocalIP();
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_socketStateChange(QAbstractSocket::SocketState  socketState);
    void do_socketReadyRead();          //读取socket传入的数据
    void on_action_joinGroupCast_triggered();

    void on_action_quitGroupCast_triggered();

    void on_pushButton_sendMessage_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
