#include "dialog.h"
#include "ui_dialog.h"
#include <QFileInfo>
#include <QDir>
#include <QTemporaryDir>
#include <QTemporaryFile>
#include <QFileDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::Window);         //使窗口具有最小化和最大化按钮
}                                            //QDialog默认只有关闭按钮

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::do_directoryChanged(const QString &path)
{
    //directoryChanged()信号的槽函数
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("目录发生了变化\n");
}

void Dialog::do_fileChanged(const QString &path)
{
      //fileChanged()信号的槽函数
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("文件发生了变化\n");
}



void Dialog::showBtnInfo(QObject *btn){
    QPushButton *theBtn = static_cast<QPushButton*>(btn);
    ui->plainTextEdit->appendPlainText(theBtn->text());
    ui->plainTextEdit->appendPlainText(theBtn->toolTip() + "\n");
}


void Dialog::on_pushButton_baseName_clicked()
{
    //QFileInfo::basename()
    showBtnInfo(sender());
    QFileInfo   fileInfo(ui->lineEdit_fileInfo->text());
    QString str = fileInfo.baseName();
    ui->plainTextEdit->appendPlainText(str + "\n");

}


void Dialog::on_pushButton_clicked()
{
    //QCoreApplication::applicationName()
    showBtnInfo(sender());
    QCoreApplication::setApplicationName("我的应用程序");
    QString str = QCoreApplication::applicationName();
    ui->plainTextEdit->appendPlainText(str +"\n");
}


void Dialog::on_pushButton_8_clicked()
{
    //QCoreApplication::organizationName()
    showBtnInfo(sender());
    QCoreApplication::setOrganizationName("我的组织");
    QString str = QCoreApplication::organizationName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_13_clicked()
{
    //QFile的静态函数exists()、moveToTrash()
    showBtnInfo(sender());
    QString source = ui->lineEdit_fileInfo->text();      //源文件
    if(QFile::exists(source)){
        QFile::moveToTrash(source);
        ui->plainTextEdit->appendPlainText("文件移除到回收站");
    }
    else
        ui->plainTextEdit->appendPlainText("文件不存在\n");
}


void Dialog::on_pushButton_25_clicked()
{
    //QFile::exists()
    showBtnInfo(sender());
    QString source = ui->lineEdit_fileInfo->text();
    QFile file;
    file.setFileName(source);
    if(file.exists())
        ui->plainTextEdit->appendPlainText(+ "true \n");
    else
        ui->plainTextEdit->appendPlainText(+ "false \n");
}




void Dialog::on_pushButton_23_clicked()
{//QFile::remove()
    showBtnInfo(sender());
    QString source = ui->lineEdit_fileInfo->text();
    QFile file(source);
    file.remove();
    ui->plainTextEdit->appendPlainText("删除文件： "+ source +"\n");
}




void Dialog::on_pushButton_22_clicked()
{
    //QFile::rename()
    showBtnInfo(sender());
    QString source = ui->lineEdit_fileInfo->text();
    QFileInfo fileInfo(source);
    QString newFile = fileInfo.path() + "/" + fileInfo.baseName() + ".xyz";
    QFile::rename(source,newFile);
    ui->plainTextEdit->appendPlainText("源文件： " + source);
    ui->plainTextEdit->appendPlainText("重命名文件: " + newFile + "\n");
}


void Dialog::on_pushButton_40_clicked()
{
    //QDir::drives()
    showBtnInfo(sender());
    QFileInfoList driverList = QDir::drives();
    for(int i = 0;i < driverList.size();i++){
        ui->plainTextEdit->appendPlainText(driverList.at(i).path());
    }
    ui->plainTextEdit->appendPlainText("\n");
}


void Dialog::on_pushButton_53_clicked()
{
    //entryList()列出子目录
    showBtnInfo(sender());
    QDir   dir(ui->lineEdit_directoryInfo->text());
    QStringList strList = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    ui->plainTextEdit->appendPlainText("所选目录下的所有目录");
    for(int i = 0;i < strList.size();i++){
        ui->plainTextEdit->appendPlainText(strList.at(i));
    }
    ui->plainTextEdit->appendPlainText("\n");
}


void Dialog::on_pushButton_57_clicked()
{
    //entryList()列出子目录文件
    showBtnInfo(sender());
    QDir   dir(ui->lineEdit_directoryInfo->text());
    QStringList strList = dir.entryList(QDir::Files);
    ui->plainTextEdit->appendPlainText("所选目录下的所有目录");
    for(int i = 0;i < strList.size();i++){
        ui->plainTextEdit->appendPlainText(strList.at(i));
    }
    ui->plainTextEdit->appendPlainText("\n");

}


void Dialog::on_pushButton_58_clicked()
{
    //在系统临时目录下创建临时文件夹
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("QDir::tempPath() = " + QDir::tempPath());
    QTemporaryDir dir;
    dir.setAutoRemove(true);
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");
}


void Dialog::on_pushButton_59_clicked()
{
    //在指定目录下创建临时文件夹
    showBtnInfo(sender());
    QString specDir = ui->lineEdit_directoryInfo->text();
    ui->plainTextEdit->appendPlainText("指定目录 = " + specDir);
    QTemporaryDir dir(specDir + "/TempDir_XXXXXX");
    dir.setAutoRemove(false);
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");

}



void Dialog::on_pushButton_60_clicked()
{
    //在当前目录下创建临时文件夹
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("当前目录 = " + QDir::currentPath() + '\n');
    QTemporaryDir dir("SubDir_XXXXXX");
    dir.setAutoRemove(false);
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");

}



void Dialog::on_pushButton_61_clicked()
{
    //在系统临时目录下创建临时文件
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("QDir::tempPath() = " + QDir::tempPath());
    QTemporaryFile  aFile;
    aFile.setAutoRemove(true);
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName() + "\n");
    aFile.close();
}


void Dialog::on_pushButton_62_clicked()
{
    //在指定目录下创建临时文件
    showBtnInfo(sender());
    QString  specDir = ui->lineEdit_directoryInfo->text();
    ui->plainTextEdit->appendPlainText("指定目录 = " + specDir);
    QTemporaryFile aFile(specDir + "/我的文件_XXXXXX.tmp");     //文件名模板，带有绝对路径
    aFile.setAutoRemove(false);
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName() + "\n");
    aFile.close();
}


void Dialog::on_pushButton_63_clicked()
{
    //在当前目录下创建临时文件
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("当前目录 = " + QDir::currentPath());
    QTemporaryFile aFile("/我的临时文件_XXXXXX.tmp");     //文件名模板，当前目录下
    aFile.setAutoRemove(false);                                 //不自动删除
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName() + "\n");
    aFile.close();
}


void Dialog::on_pushButton_64_clicked()
{
    //开始监视，addPath()
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("监视目录： " + ui->lineEdit_directoryInfo->text() + "\n");
    ui->plainTextEdit->appendPlainText("监视文件： " + ui->lineEdit_fileInfo->text() + "\n");
    filewatcher.addPath(ui->lineEdit_directoryInfo->text());
    filewatcher.addPath(ui->lineEdit_fileInfo->text());
    connect(&filewatcher,&QFileSystemWatcher::directoryChanged,this,&Dialog::do_directoryChanged);        //directoryChanged() 信号
    connect(&filewatcher,&QFileSystemWatcher::fileChanged,this,&Dialog::do_fileChanged);                   //fileChanged()信号
}


void Dialog::on_pushButton_65_clicked()
{
    //停止监视，removePath()
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("停止监视目录： " + ui->lineEdit_directoryInfo->text() + "\n");
    filewatcher.removePath(ui->lineEdit_directoryInfo->text());
    filewatcher.removePath(ui->lineEdit_fileInfo->text());
    disconnect(&filewatcher);                                            //解除fileWatcher所有信号的连接
}


void Dialog::on_pushButton_66_clicked()
{
    //返回监视的目录列表

    QStringList  strList = filewatcher.directories();
    ui->plainTextEdit->appendPlainText("现在所监视的目录为： \n");
    for(int i = 0; i < strList.size();i++){
        ui->plainTextEdit->appendPlainText(strList.at(i) + "\n");
    }
}


void Dialog::on_pushButton_67_clicked()
{
    //返回监视的文件列表

    QStringList  strList = filewatcher.files();
    ui->plainTextEdit->appendPlainText("现在所监视的文件为： \n");
    for(int i = 0; i < strList.size();i++){
        ui->plainTextEdit->appendPlainText(strList.at(i) + "\n");
    }
}


void Dialog::on_pushButton_OpenFile_clicked()
{
    //打开文件按钮
    QString aFileName = QFileDialog::getOpenFileName(this,tr("打开一个文件"),QDir::currentPath(),"C程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty())return;
    ui->lineEdit_fileInfo->setText(aFileName);
}


void Dialog::on_pushButton_OpenDir_clicked()
{
    //打开目录按钮
 /*   QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                        | QFileDialog::DontResolveSymlinks);
 ***/
    QString aFileName = QFileDialog::getExistingDirectory(this,tr("打开一个目录"),QDir::currentPath(),QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if(aFileName.isEmpty())return;
    ui->lineEdit_directoryInfo->setText(aFileName);

}


void Dialog::on_pushButton_ClearText_clicked()
{
    ui->plainTextEdit->clear();
}

