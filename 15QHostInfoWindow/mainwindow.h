#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHostInfo>
#include <QNetworkInterface>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_getLocalHost_clicked();

    void on_pushButton_findNameIP_clicked();

    void on_pushButton_allInterfaces_clicked();

    void on_pushButton_allAddresses_clicked();

    void do_lookedUpHostInfo(const QHostInfo &host);
private:

    QString interfaceType(QNetworkInterface::InterfaceType type);
    QString protocolName(QAbstractSocket::NetworkLayerProtocol protocol);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
