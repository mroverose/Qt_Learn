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
    udpSocket = new QUdpSocket(this);
    udpSocket->setSocketOption(QAbstractSocket::MulticastTtlOption,1);
    connect(udpSocket,&QUdpSocket::stateChanged,this,&MainWindow::do_socketStateChange);
    do_socketStateChange(udpSocket->state());               //运行一次，刷新状态
    connect(udpSocket,&QUdpSocket::readyRead,this,&MainWindow::do_socketReadyRead);
}

MainWindow::~MainWindow()
{
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


void MainWindow::on_action_joinGroupCast_triggered()
{
    //加入组播 按钮
    QString IP = ui->comboBox_groupIP->currentText();
    groupAddress = QHostAddress(IP);            //多播组地址
    quint16 groupPort = ui->spinBox_groupPort->value();
    if(udpSocket->bind(QHostAddress::AnyIPv4,groupPort,QUdpSocket::ShareAddress)){
        udpSocket->joinMulticastGroup(groupAddress);            //加入多播组
        ui->plainTextEdit->appendPlainText("**加入组播成功");
        ui->plainTextEdit->appendPlainText("**组播IP地址: " + IP);
        ui->plainTextEdit->appendPlainText("**绑定端口: " + QString::number(groupPort));
        ui->action_joinGroupCast->setEnabled(false);
        ui->action_quitGroupCast->setEnabled(true);
        ui->comboBox_groupIP->setEnabled(false);        //组播地址和端口不能再更改
        ui->spinBox_groupPort->setEnabled(false);
        ui->pushButton_sendMessage->setEnabled(true);   //发送消息按钮可用
    }
    else{
        ui->plainTextEdit->appendPlainText("**绑定端口失败");
    }
}


void MainWindow::on_action_quitGroupCast_triggered()
{
    //退出组播 按钮
    udpSocket->leaveMulticastGroup(groupAddress);   //退出组播
    udpSocket->abort();         //解除绑定
    ui->action_joinGroupCast->setEnabled(true);
    ui->action_quitGroupCast->setEnabled(false);
    ui->comboBox_groupIP->setEnabled(true);
    ui->spinBox_groupPort->setEnabled(true);
    ui->pushButton_sendMessage->setEnabled(false);
    ui->plainTextEdit->appendPlainText("**已退出组播，解除端口绑定");
}


void MainWindow::on_pushButton_sendMessage_clicked()
{
    //组播消息 按钮，发送组播消息
    quint16 groupPort = ui->spinBox_groupPort->value();     //组播端口
    QString msg = ui->lineEdit_message->text();
    QByteArray datagram = msg.toUtf8();
    udpSocket->writeDatagram(datagram,groupAddress,groupPort);
    ui->plainTextEdit->appendPlainText("[multicast]" + msg);
    ui->lineEdit_message->clear();
    ui->lineEdit_message->setFocus();
}

void MainWindow::do_socketReadyRead(){
    //读取数据报文
    while(udpSocket->hasPendingDatagrams()){
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        QHostAddress peerAddr;
        quint16 peerPort;
        udpSocket->readDatagram(datagram.data(),datagram.size(),&peerAddr,&peerPort);
        QString str = datagram.data();
        QString peer = "[From " + peerAddr.toString() + ":" +QString::number(peerPort) + "]";
        ui->plainTextEdit->appendPlainText(peer + str);
    }
}

