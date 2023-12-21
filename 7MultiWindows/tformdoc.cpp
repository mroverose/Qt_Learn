#include "tformdoc.h"
#include "ui_tformdoc.h"
#include <QToolBar>
#include <QVBoxLayout>
#include <QDir>
#include <QFileDialog>
#include <QFontDialog>

TFormDoc::TFormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TFormDoc)
{
    ui->setupUi(this);
    //使用设计好的Action创建工具栏
    QToolBar  *locToolBar = new QToolBar("文档",this);
    locToolBar->addAction(ui->action_Open);
    locToolBar->addAction(ui->action_Font);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->action_Cut);
    locToolBar->addAction(ui->action_Copy);
    locToolBar->addAction(ui->action_Paste);
    locToolBar->addAction(ui->action_Undo);
    locToolBar->addAction(ui->action_Redo);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->action_Close);
    locToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //设计布局
    QVBoxLayout *Layout = new QVBoxLayout();
    Layout->addWidget(locToolBar);       //设置工具栏和plaintextEdit垂直布局
    Layout->addWidget(ui->plainTextEdit);
    Layout->setContentsMargins(2,2,2,2);
    Layout->setSpacing(2);
    this->setLayout(Layout);
}

TFormDoc::~TFormDoc()
{
    delete ui;
}

void TFormDoc::on_action_Open_triggered()
{
    //打开文件
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this,"打开一个文件",curPath,
                          "C程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty())return;
    loadFromFile(aFileName);
}

void TFormDoc::loadFromFile(QString aFileName){
    //加载文件内容
    QFile  aFile(aFileName);
    if(aFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream  aStream(&aFile);          //用文本流读取文件
        ui->plainTextEdit->clear();
        while(!aStream.atEnd()){
            QString str = aStream.readLine();        //读取文件的一行
            ui->plainTextEdit->appendPlainText(str);    //添加到文本框显示
        }
        aFile.close();

        QFileInfo fileInfo(aFileName);      //获取文件信息
        QString shortName = fileInfo.fileName();       //不带有路径的文件名
        this->setWindowTitle(shortName);
        emit  titleChanged(shortName);             //发射信号，以文件名作为参数
    }
}

void TFormDoc::on_action_Font_triggered()
{
   //设置字体
    QFont font = ui->plainTextEdit->font();
    bool ok;
    font = QFontDialog::getFont(&ok,font);
    ui->plainTextEdit->setFont(font);
}

