#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QInputDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QProgressDialog>
#include <QElapsedTimer>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_OpenFile_clicked()
{
    //选择单个文件
    QString curPath = QDir::currentPath();
    QString dlgTitle = "选择一个文件";
    QString filter = "文本文件(*.txt);;图片文件(*.jpg *.gif *.png);;所有文件(*.*)";
    QString fileName = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(!fileName.isEmpty())ui->plainTextEdit->appendPlainText(fileName);
}




void Dialog::on_pushButton_OpenFiles_clicked()
{
    //选择打开多个文件
    QString curPath = QDir::currentPath();
    QString dlgTitle = "打开多个文件";
    QString filter = "文本文件(*.txt);;图片文件(*.jpg *.gif *.png);;所有文件(*.*)";
    QStringList fileList = QFileDialog::getOpenFileNames(this,dlgTitle,curPath,filter);
    for(int i = 0;i < fileList.size();i++){
        ui->plainTextEdit->appendPlainText(fileList.at(i));
    }
}


void Dialog::on_pushButton_SaveFile_clicked()
{
    //保存文件
    QString curPath = QCoreApplication::applicationDirPath();
    QString dlgTitle = "保存文件";
    QString filter = "文本文件(*.txt);;h文件(*.h);;C++文件(.cpp);;所有文件(*.*)";
    QString fileName = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if(!fileName.isEmpty())ui->plainTextEdit->appendPlainText(fileName);
}




void Dialog::on_pushButton_SelectDirs_clicked()
{
    QString  curPath = QCoreApplication::applicationDirPath();
    QString  dlgTitle = "选择一个目录";
    QString  selectedDir = QFileDialog::getExistingDirectory(this,dlgTitle,curPath);
    if(!selectedDir.isEmpty())ui->plainTextEdit->appendPlainText(selectedDir);
}




void Dialog::on_pushButton_SelectColor_clicked()
{
    QPalette  pal = ui->plainTextEdit->palette();
    QColor  iniColor = pal.color(QPalette::Text);    //现有的文字颜色
    QColor  color = QColorDialog::getColor(iniColor,this,"选择颜色");
    if(color.isValid()){
        pal.setColor(QPalette::Text,color);
        ui->plainTextEdit->setPalette(pal);
    }
}


void Dialog::on_pushButton_SelectFont_clicked()
{
    QFont  iniFont = ui->plainTextEdit->font();
    bool  ok = false;
    QFont  font = QFontDialog::getFont(&ok,iniFont);
    if(ok)ui->plainTextEdit->setFont(font);
}


void Dialog::on_pushButton_ProgressDialog_clicked()
{
    QString labText = "正在复制文件...";
    QString btnText = "取消";
    int minV = 0,maxV = 200;
    QProgressDialog   dlgProgress(labText,btnText,minV,maxV,this);
    connect(&dlgProgress,SIGNAL(canceled()),this,SLOT(do_progress_canceled()));
    dlgProgress.setWindowTitle("复制文件");
    dlgProgress.setWindowModality(Qt::WindowModal);            //以模态方式显示对话框
    dlgProgress.setAutoReset(true);                           //value()达到最大值时自动调用reset()
    dlgProgress.setAutoClose(true);                            //调用reset()时隐藏窗口

    QElapsedTimer  msCounter;
    for(int i = minV;i <= maxV;i++){
        dlgProgress.setValue(i);
        dlgProgress.setLabelText(QString::asprintf("正在复制文件，第 %d 个",i));
        msCounter.start();
        while(true){
            if(msCounter.elapsed() > 30)break;
            if(dlgProgress.wasCanceled())break;
        }
    }
}

void Dialog::do_progress_canceled(){
    ui->plainTextEdit->appendPlainText("**进度对话框被取消了**");
}


void Dialog::on_pushButton_InputString_clicked()
{
    QString dlgTitle = "输入文字对话框";
    QString txtLable = "请输入文件名";
    QString iniInput = "新建文件.txt";
    QLineEdit::EchoMode  echoMode = QLineEdit::Normal;
    bool ok = false;
    QString text = QInputDialog::getText(this,dlgTitle,txtLable,echoMode,iniInput,&ok);
    if(ok && !text.isEmpty())ui->plainTextEdit->appendPlainText(text);
}


void Dialog::on_pushButton_InputNum_clicked()
{
    QString dlgTitle = "输入整数对话框";
    QString txtLable = "设置文本框字体大小";
    int defaultValue = ui->plainTextEdit->font().pointSize();
    int minValue = 6,maxValue = 50,stepValue = 1;
    bool ok = false;
    int inputValue = QInputDialog::getInt(this,dlgTitle,txtLable,defaultValue,minValue,maxValue,stepValue,&ok);
    if(ok){
        QString str = QString("文本框字体大小被设置为： %1").arg(inputValue);
        ui->plainTextEdit->appendPlainText(str);
        QFont font = ui->plainTextEdit->font();
        font.setPointSize(inputValue);
        ui->plainTextEdit->setFont(font);
    }
}


void Dialog::on_pushButton_InputFloat_clicked()
{
    QString dlgTitle = "输入浮点数对话框";
    QString txtLabel = "输入一个浮点数";
    float defaultValue = 3.14;
    float minValue = 0,maxValue = 1000;
    int decimals = 2;
    bool ok = false;
    float inputValue = QInputDialog::getDouble(this,dlgTitle,txtLabel,defaultValue,minValue,maxValue,decimals,&ok);
    if(ok){
        QString str = QString::asprintf("输入了一个浮点数: %.2f",inputValue);
        ui->plainTextEdit->appendPlainText(str);
    }
}


void Dialog::on_pushButton_InputItems_clicked()
{
    QStringList  items;
    items<<"优秀"<<"良好"<<"合格"<<"不合格";
    QString dlgTitle = "条目选择对话框";
    QString txtLabel = "请选择级别";
    int   curIndex = 0;
    bool editable = true;
    bool ok = false;
    QString text = QInputDialog::getItem(this,dlgTitle,txtLabel,items,curIndex,editable,&ok);
    if(ok && !text.isEmpty())ui->plainTextEdit->appendPlainText(text);
}


void Dialog::on_pushButton_informationBox_clicked()
{
    QString dlgTitle = "information消息框";
    QString strInfo = "文件已经打开，请检查";
    QMessageBox::information(this,dlgTitle,strInfo,QMessageBox::Ok,QMessageBox::NoButton);
}


void Dialog::on_pushButton_criticalBox_clicked()
{
    QString dlgTitle = "critical消息框";
    QString strInfo = "有不明程序访问网络";
    QMessageBox::critical(this,dlgTitle,strInfo);

}


void Dialog::on_pushButton_warningBox_clicked()
{
    QString dlgTitle = "warning 消息框";
    QString strInfo = "文件内容已经被修改";
    QMessageBox::warning(this,dlgTitle,strInfo);

}


void Dialog::on_pushButton_aboutBox_clicked()
{
    QString dlgTitle = "about消息框";
    QString strInfo = "SEGY文件查看软件V.0\n";
    QMessageBox::about(this,dlgTitle,strInfo);

}


void Dialog::on_pushButton_questionBox_clicked()
{
    QString dlgTitle = "question消息框";
    QString strInfo = "文件已被修改，是否保存修改？";
    QMessageBox::StandardButton  defaultBtn = QMessageBox::NoButton;
    QMessageBox::StandardButton  result;

    result = QMessageBox::question(this,dlgTitle,strInfo,QMessageBox::Ok | QMessageBox::No | QMessageBox::Cancel,defaultBtn);

    if(result == QMessageBox::Yes)ui->plainTextEdit->appendPlainText("Question 消息框： Yes被选择");
    else if(result == QMessageBox::No)ui->plainTextEdit->appendPlainText("Question消息框： No被选择");
    else if(result == QMessageBox::Cancel)ui->plainTextEdit->appendPlainText("Qustion消息框： Cancel被选择");
    else ui->plainTextEdit->appendPlainText("Question消息框：无选择");
}


void Dialog::on_pushButton_aboutQtBox_clicked()
{
    QString dlgTitle = "AboutQt消息框";
    //QString strInfo = "文件已经打开，请检查";
    QMessageBox::aboutQt(this,dlgTitle);
}

