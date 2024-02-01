#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_getLocalHost_clicked()
{
    //获取本机主机名和IP地址按钮
    ui->plainTextEdit->clear();
    QString hostName = QHostInfo::localHostName();      //本机主机名
    ui->plainTextEdit->appendPlainText("本机主机名： " + hostName + "\n");
    QHostInfo hostInfo = QHostInfo::fromName(hostName);             //本机IP地址
    QList<QHostAddress> addList = hostInfo.addresses();             //IP地址列表
    if(addList.isEmpty())
        return;
    foreach (QHostAddress host, addList) {
        bool show = ui->checkBox->isChecked();
        show = show ? (host.protocol() == QAbstractSocket::IPv4Protocol) : true;
        if(show){
            ui->plainTextEdit->appendPlainText("协议：" + protocolName(host.protocol()));
            ui->plainTextEdit->appendPlainText("本机IP地址: " + host.toString());
            ui->plainTextEdit->appendPlainText(QString("isGlobal() = %1\n").arg(host.isGlobal()));
        }
    }
}


QString MainWindow::protocolName(QAbstractSocket::NetworkLayerProtocol protocol){
    //通过协议类型返回协议名称字符串
    switch(protocol){
    case QAbstractSocket::IPv4Protocol:
        return "IPv4";
    case QAbstractSocket::IPv6Protocol:
        return "IPv6";
    case QAbstractSocket::AnyIPProtocol:
        return "Any internet Protocol";
    default:
        return "Unknown Network Layer Protocol";
    }
}

void MainWindow::on_pushButton_findNameIP_clicked()
{
    //“查找域名的IP地址”按钮
    ui->plainTextEdit->clear();
    QString hostName = ui->comboBox_name->currentText();
    ui->plainTextEdit->appendPlainText("正在查找主机信息：" + hostName);
    QHostInfo::lookupHost(hostName,this,SLOT(do_lookedUpHostInfo(QHostInfo)));
}

void MainWindow::do_lookedUpHostInfo(const QHostInfo &host){
    //查找主机信息的槽函数
    QList<QHostAddress> addrList = host.addresses();            //获取主机的地址列表
    if(addrList.isEmpty())
        return;
    foreach(QHostAddress host,addrList){
        bool show = ui->checkBox->isChecked();
        show = show ? (host.protocol() == QAbstractSocket::IPv4Protocol) : true;
        if(show){
            ui->plainTextEdit->appendPlainText("协议: " + protocolName(host.protocol()));
            ui->plainTextEdit->appendPlainText(host.toString());
            ui->plainTextEdit->appendPlainText(QString("isGlobal() = %1\n").arg(host.isGlobal()));
        }
    }
}

void MainWindow::on_pushButton_allInterfaces_clicked()
{
    ui->plainTextEdit->clear();
    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();         //网络接口列表
    foreach (QNetworkInterface interface, list) {
        if(!interface.isValid())
            continue;
        ui->plainTextEdit->appendPlainText("设备名称：" + interface.humanReadableName());
        ui->plainTextEdit->appendPlainText("硬件地址：" + interface.hardwareAddress());
        ui->plainTextEdit->appendPlainText("接口类型：" + interfaceType(interface.type()));
        QList<QNetworkAddressEntry> entryList = interface.addressEntries();             //地址列表
        foreach (QNetworkAddressEntry entry, entryList) {
            ui->plainTextEdit->appendPlainText("  IP 地址: " + entry.ip().toString());
            ui->plainTextEdit->appendPlainText("  子网掩码: " + entry.netmask().toString());
            ui->plainTextEdit->appendPlainText("  广播地址: " + entry.broadcast().toString() + "\n");
        }

    }
}

QString MainWindow::interfaceType(QNetworkInterface::InterfaceType type){
    switch(type){
    case QNetworkInterface::Unknown:
        return "UnKnown";
    case QNetworkInterface::Loopback:
        return "Loopback";
    case QNetworkInterface::Ethernet:
        return "Ethernet";
    case QNetworkInterface::Wifi:
        return "Wifi";
    default:
        return "Other type";
    }
}

void MainWindow::on_pushButton_allAddresses_clicked()
{
    ui->plainTextEdit->clear();
    QList<QHostAddress> addrList = QNetworkInterface::allAddresses();
    if(addrList.isEmpty())
        return;
    foreach (QHostAddress host, addrList) {
        bool show = ui->checkBox->isChecked();
        show = show ? (host.protocol() == QAbstractSocket::IPv4Protocol) : true;
        if(show){
            ui->plainTextEdit->appendPlainText("协议: " + protocolName(host.protocol()));
            ui->plainTextEdit->appendPlainText("IP协议: " + host.toString());
            ui->plainTextEdit->appendPlainText(QString("isGlobal() = %1\n").arg(host.isGlobal()));
        }
    }
}

