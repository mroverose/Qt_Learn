#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostInfo>
#include <QTcpSocket>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    labSocketState = new QLabel("socket状态:");
    labSocketState->setMinimumWidth(200);
    ui->statusbar->addWidget(labSocketState);

    QString localIP = getLocalIP();   //获取本机IP地址
    this->setWindowTitle(this->windowTitle() + "-----本机IP地址: " + localIP);
    ui->comboBox_address->addItem(localIP);

    tcpClient = new QTcpSocket(this);
    connect(tcpClient,SIGNAL(connected()),this,SLOT(do_connected()));
    connect(tcpClient,SIGNAL(disconnected()),this,SLOT(do_disconnected()));
    connect(tcpClient,&QTcpSocket::stateChanged,this,&MainWindow::do_socketStateChange);
    connect(tcpClient,&QTcpSocket::readyRead,this,&MainWindow::do_socketReadyRead);
}

MainWindow::~MainWindow()
{
    if(tcpClient != nullptr){
        if(tcpClient->state() == QAbstractSocket::ConnectedState)
            tcpClient->disconnectFromHost();            //断开与客户端的连接
    }
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




void MainWindow::on_pushButton_sendMessage_clicked()
{
    //发送消息 按钮
    QString msg = ui->lineEdit_sendMessage->text();
    ui->plainTextEdit->appendPlainText("[out] " + msg);
    ui->lineEdit_sendMessage->clear();
    ui->lineEdit_sendMessage->setFocus();
    QByteArray str = msg.toUtf8();
    str.append('\n');
    tcpClient->write(str);
}

void MainWindow::do_socketReadyRead(){
    //读取缓冲区的行文本
    while(tcpClient->canReadLine()){
        ui->plainTextEdit->appendPlainText("[in] " + tcpClient->readLine());
    }
}

void MainWindow::on_action_connectToServer_triggered()
{
    //连接服务器 按钮
    QString addr = ui->comboBox_address->currentText();
    quint16 port  = ui->spinBox_port->value();
    tcpClient->connectToHost(addr,port);
}


void MainWindow::on_action_stopConnect_triggered()
{
    //断开连接  按钮
    if(tcpClient->state() == QAbstractSocket::ConnectedState){
        tcpClient->disconnectFromHost();
    }
}

void MainWindow::do_connected(){
    //connected()信号的槽函数
    ui->plainTextEdit->appendPlainText("**已连接到服务器");
    ui->plainTextEdit->appendPlainText("**peer address: " + tcpClient->peerAddress().toString());
    ui->plainTextEdit->appendPlainText("**peer port: " + QString::number(tcpClient->peerPort()));
    ui->action_connectToServer->setEnabled(false);
    ui->action_stopConnect->setEnabled(true);
}

void MainWindow::do_disconnected(){
    //disconnected()信号的槽函数
    ui->plainTextEdit->appendPlainText("**已断开与服务器的连接");
    ui->action_connectToServer->setEnabled(true);
    ui->action_stopConnect->setEnabled(false);
}
