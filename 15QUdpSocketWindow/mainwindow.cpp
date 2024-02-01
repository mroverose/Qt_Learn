#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labSocketState = new QLabel("socket状态");
    labSocketState->setMinimumWidth(200);
    ui->statusbar->addWidget(labSocketState);

    QString localIP = getLocalIP();
    this->setWindowTitle(this->windowTitle() + "----本机IP地址: " + localIP);
    ui->comboBox_tartgetAddr->addItem(localIP);
    udpSocket = new QUdpSocket(this);     //创建socket

    connect(udpSocket,&QUdpSocket::stateChanged,this,&MainWindow::do_socketStateChange);
    do_socketStateChange(udpSocket->state());       //运行一次，显示当前状态
    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(do_socketReadyRead()));
}

MainWindow::~MainWindow()
{
    delete udpSocket;
    delete ui;
}


QString MainWindow::getLocalIP(){
    QString hostName = QHostInfo::localHostName();          //本机主机名
    QHostInfo hostInfo = QHostInfo::fromName(hostName);
    QString localIP = "";
    QList<QHostAddress> addrList = hostInfo.addresses();
    if(addrList.isEmpty())
        return localIP;
    foreach (QHostAddress aHost, addrList) {
        if(QAbstractSocket::IPv4Protocol == aHost.protocol()){
            localIP = aHost.toString();
            break;
        }
    }
    return localIP;
}




void MainWindow::do_socketStateChange(QAbstractSocket::SocketState socketState){
    switch(socketState){
    case    QAbstractSocket::UnconnectedState:
        labSocketState->setText("socket 状态： UnconnectedState"); break;
    case    QAbstractSocket::HostLookupState:
        labSocketState->setText("socket 状态： HostLookupState");  break;
    case    QAbstractSocket::ConnectingState:
        labSocketState->setText("socket 状态： ConnectingState");  break;
    case    QAbstractSocket::BoundState:
        labSocketState->setText("socket 状态： BoundState");  break;
    case    QAbstractSocket::ClosingState:
        labSocketState->setText("socket 状态： ClosingState");  break;
    case    QAbstractSocket::ListeningState:
        labSocketState->setText("socket 状态： ListeningState");  break;
    case    QAbstractSocket::ConnectedState:
        labSocketState->setText("socket 状态： ConnectedState");  break;

    }
}


void MainWindow::on_action_bindPort_triggered()
{
    //绑定端口 按钮
    quint16 port = ui->spinBox_bindPort->value();
    if(udpSocket->bind(port)){
        ui->plainTextEdit->appendPlainText("**已成功绑定");
        ui->plainTextEdit->appendPlainText("**绑定端口: " + QString::number(udpSocket->localPort()));
        ui->action_bindPort->setEnabled(false);
        ui->action_unBindPort->setEnabled(true);
        ui->pushButton_sendMessage->setEnabled(true);
        ui->pushButton_broadcastMessage->setEnabled(true);
    }
    else
        ui->plainTextEdit->appendPlainText("**绑定失败");
}


void MainWindow::on_action_unBindPort_triggered()
{
    //解除绑定 按钮
    udpSocket->abort();                 //解除绑定，复位socket
    ui->action_bindPort->setEnabled(true);
    ui->action_unBindPort->setEnabled(false);
    ui->pushButton_sendMessage->setEnabled(false);
    ui->pushButton_broadcastMessage->setEnabled(false);
    ui->plainTextEdit->appendPlainText("**已解除绑定");
}


void MainWindow::on_pushButton_sendMessage_clicked()
{
    //发送消息 按钮
    QString tartgetIP = ui->comboBox_tartgetAddr->currentText();
    QHostAddress targetAddr(tartgetIP);
    quint16 targetPort = ui->spinBox_targetPort->value();
    QString msg = ui->lineEdit->text();
    QByteArray str = msg.toUtf8();
    udpSocket->writeDatagram(str,targetAddr,targetPort);
    ui->plainTextEdit->appendPlainText("[out] " + msg);
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
}


void MainWindow::on_pushButton_broadcastMessage_clicked()
{
    //广播消息 按钮
    quint16 targetPort = ui->spinBox_targetPort->value();
    QString msg = ui->lineEdit->text();
    QByteArray str = msg.toUtf8();
    udpSocket->writeDatagram(str,QHostAddress::Broadcast,targetPort);
    ui->plainTextEdit->appendPlainText("[broadcast] " + msg);
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
}

void MainWindow::do_socketReadyRead(){
    //读取收到的数据报
    while(udpSocket->hasPendingDatagrams()){
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());      //待读取的数据报的字节数
        QHostAddress peerAddr;      //对方地址
        quint16 peerPort;
        udpSocket->readDatagram(datagram.data(),datagram.size(),&peerAddr,&peerPort);
        QString str = datagram.data();
        QString peer = "[From " + peerAddr.toString() + ":" + QString::number(peerPort) + "] ";
        ui->plainTextEdit->appendPlainText(peer + str);
    }
}
