#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QMetaObject>
#include <QObjectList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox_ReadAndWriteDate->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//自定义函数
bool MainWindow::iniWrite(){
    //初始化写文件操作，创建QFile和QDataStream对象
    fileDevice = new QFile(m_filename);
    if(!fileDevice->open(QIODevice::WriteOnly))
        return false;
    fileStream = new QDataStream(fileDevice);
    fileStream->setVersion(QDataStream::Qt_6_6);            //设置版本号
    if(ui->radioButton_BigEndian->isChecked())
        fileStream->setByteOrder(QDataStream::BigEndian);
    else
        fileStream->setByteOrder(QDataStream::LittleEndian);

    if(ui->radioButton_SinglePrecision->isChecked())
        fileStream->setFloatingPointPrecision(QDataStream::SinglePrecision);
    else
        fileStream->setFloatingPointPrecision(QDataStream::DoublePrecision);
    return true;
}

bool MainWindow::iniRead(){
    //初始化读文件操作，创建QFile和QDataStream对象
    if(!QFile::exists(m_filename)){
        QMessageBox::critical(this,"错误","文件不存在，文件名： \n" + m_filename);
        return false;
    }
    fileDevice = new QFile(m_filename);
    if(!fileDevice->open(QIODevice::ReadOnly))
        return false;
    fileStream = new QDataStream(fileDevice);
    fileStream->setVersion(QDataStream::Qt_6_6);
    if(ui->radioButton_BigEndian->isChecked())
        fileStream->setByteOrder(QDataStream::BigEndian);
    else
        fileStream->setByteOrder(QDataStream::LittleEndian);

    if(ui->radioButton_SinglePrecision->isChecked())
        fileStream->setFloatingPointPrecision(QDataStream::SinglePrecision);
    else
        fileStream->setFloatingPointPrecision(QDataStream::DoublePrecision);
    return true;
}


void MainWindow::delFileStream(){
    fileDevice->close();             //关闭文件
    delete fileStream;
    delete fileDevice;
}

void MainWindow::on_pushButton_QInt32Write_clicked()
{
    //qint32，写入
    if(iniWrite()){                                       //初始化写文件操作,创建QFile和QDataStream对象
        qint32 value = ui->spinBox_Qint32->value();
        fileStream->writeRawData((char *)&value,sizeof(qint32));    //写qint32类型数据
        delFileStream();                                            //关闭文件，删除QFile和QDataStream对象
    }
}




void MainWindow::on_pushButton_QInt32Read_clicked()
{
    //qint32,读出
    if(iniRead()){
        qint32  value = 0;
        fileStream->readRawData((char *)&value,sizeof(qint32));              //读qint32类型数据
        ui->lineEdit_Qint32->setText(QString("%1").arg(value));
        delFileStream();                                                   //关闭文件，删除QFile和QDataStream对象
    }
}



void MainWindow::on_pushButton_QFloatWrite_clicked()
{
    //float，写入
    if(iniWrite()){                                       //初始化写文件操作,创建QFile和QDataStream对象
        float value = ui->spinBox_QFloat->value();
        fileStream->writeRawData((char *)&value,sizeof(float));    //写float类型数据
        delFileStream();                                            //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QFloatRead_clicked()
{

    //float,读出
    if(iniRead()){
        float  value = 0;
        fileStream->readRawData((char *)&value,sizeof(float));              //读float类型数据
        ui->lineEdit_QFloat->setText(QString::asprintf("%.4f",value));
        delFileStream();                                                   //关闭文件，删除QFile和QDataStream对象
    }
}




void MainWindow::on_pushButton_QDoubleWrite_clicked()
{
    //double，写入
    if(iniWrite()){                                       //初始化写文件操作,创建QFile和QDataStream对象
        double value = ui->spinBox_QDouble->value();
        fileStream->writeRawData((char *)&value,sizeof(double));    //写double类型数据
        delFileStream();                                            //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QDoubleRead_clicked()
{

    //double,读出
    if(iniRead()){
        double  value = 0;
        fileStream->readRawData((char *)&value,sizeof(double));              //读double类型数据
        ui->lineEdit_QDouble->setText(QString::asprintf("%.4f",value));
        delFileStream();                                                   //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QCharWrite_clicked()
{
    //写入字符串，UTF-8编码
    if(iniWrite()){
        QString str = ui->lineEdit_QCharString->text();
        QByteArray  btArray = str.toUtf8();         //utf-8编码
        fileStream->writeBytes(btArray,btArray.length());
        delFileStream();
    }
}


void MainWindow::on_pushButton_QCahrRead_clicked()
{
    //读取字符串，UTF-8编码
    if(iniRead()){
        char *buf;
        uint strLen;
        fileStream->readBytes(buf,strLen);     //同时读取字符串长度和字符串内容
        QString str = QString::fromUtf8(buf,strLen);            //用UTF-8编码解码数据
        ui->lineEdit_ShowQCharString->setText(str);
        delFileStream();
        delete buf;                 //需要手动删除缓冲区
        QString info = QString("读出数据缓冲区长度 = %1 (字节)").arg(strLen);
        QMessageBox::information(this,"信息提示",info);
    }
}




void MainWindow::on_pushButton_QStringWrite_clicked()
{
    //写入字符串，Latin1编码
    if(iniWrite()){
        QString str = ui->lineEdit_QString->text();
        QByteArray  btArray = str.toLatin1();         //latin1编码
        fileStream->writeBytes(btArray,btArray.length());
        delFileStream();
    }
}


void MainWindow::on_pushButton_QStringRead_clicked()
{
    //读取字符串，Latin-1编码
    if(iniRead()){
        char *buf;
        uint strLen;
        fileStream->readBytes(buf,strLen);     //同时读取字符串长度和字符串内容
        QString str = QString::fromLatin1(buf,strLen);            //用latin-1编码解码数据
        ui->lineEdit_ShowQString->setText(str);
        delFileStream();
        delete buf;                 //需要手动删除缓冲区
        QString info = QString("读出数据缓冲区长度 = %1 (字节)").arg(strLen);
        QMessageBox::information(this,"信息提示",info);
    }
}


void MainWindow::on_action_WriteToFile_triggered()
{
    //连续写入文件 按钮
    if(!iniWrite())
        return;
    //数据写入
    qint8 int8_value = ui->spinBox_Qint->value();
    fileStream->writeRawData((char*)&int8_value,sizeof(qint8));

    quint8 uint8_value = ui->spinBox_QUint->value();
    fileStream->writeRawData((char*)&uint8_value,sizeof(quint8));

    qint16 int16_value = ui->spinBox_Qint16->value();
    fileStream->writeRawData((char*)&int16_value,sizeof(qint16));

    quint16 uint16_value = ui->spinBox_QUint16->value();
    fileStream->writeRawData((char*)&uint16_value,sizeof(quint16));

    qint32 int32_value = ui->spinBox_Qint32->value();
    fileStream->writeRawData((char*)&int32_value,sizeof(qint32));

    qint64 int64_value = ui->spinBox_Qint64->value();
    fileStream->writeRawData((char*)&int64_value,sizeof(qint64));

    bool bool_value = ui->checkBox_Bool->isChecked();
    fileStream->writeRawData((char*)&bool_value,sizeof(bool));

    qfloat16 qfloat16_value = ui->spinBox_QFloat16->value();
    fileStream->writeRawData((char*)&qfloat16_value,sizeof(qfloat16));

    float float_value = ui->spinBox_QFloat->value();
    fileStream->writeRawData((char*)&float_value,sizeof(float));

    double double_value = ui->spinBox_QDouble->value();
    fileStream->writeRawData((char*)&double_value,sizeof(double));

    QString str = ui->lineEdit_QCharString->text();
    QByteArray  btArray = str.toUtf8();         //utf-8编码
    fileStream->writeBytes(btArray,btArray.length());

    str = ui->lineEdit_QString->text();
    btArray = str.toLatin1();         //latin1编码
    fileStream->writeBytes(btArray,btArray.length());

    //数据写入完成
    delFileStream();
    QMessageBox::information(this,"消息","数据连续写入文件完成");
}


void MainWindow::on_action_ReadFromFile_triggered()
{
    //“连续从文件读取 按钮
    if(!iniRead())
        return;
    //数据读取
    qint8 int8_value = 0;
    fileStream->readRawData((char*)&int8_value,sizeof(qint8));
    ui->lineEdit_Qint->setText(QString("%1").arg(int8_value));

    quint8 uint8_value = 0;
    fileStream->readRawData((char*)&uint8_value,sizeof(quint8));
    ui->lineEdit_QUint->setText(QString("%1").arg(uint8_value));

    qint16 int16_value = 0;
    fileStream->readRawData((char*)&int16_value,sizeof(qint16));
    ui->lineEdit_Qint16->setText(QString("%1").arg(int16_value));

    quint16 uint16_value = 0;
    fileStream->readRawData((char*)&uint16_value,sizeof(quint16));
    ui->lineEdit_QUint16->setText(QString("%1").arg(uint16_value));

    qint32 int32_value = 0;
    fileStream->readRawData((char*)&int32_value,sizeof(qint32));
    ui->lineEdit_Qint32->setText(QString("%1").arg(int32_value));

    qint64 int64_value = 0;
    fileStream->readRawData((char*)&int64_value,sizeof(qint64));
    ui->lineEdit_Qint64->setText(QString("%1").arg(int64_value));

    bool bool_value = false;
    fileStream->readRawData((char *)&bool_value,sizeof(bool));
    ui->checkBox_IsBool->setChecked(bool_value);

    qfloat16 float16_value = 0;
    fileStream->readRawData((char*)&float16_value,sizeof(qfloat16));
    float val = float16_value;                      //asprintf()不支持qfloat16类型参数
    ui->lineEdit_QFloat16->setText(QString::asprintf("%.2f",val));

    float float_value = 0;
    fileStream->readRawData((char*)&float_value,sizeof(float));
    ui->lineEdit_QFloat->setText(QString::asprintf("%.4f",float_value));

    double double_value = 0;
    fileStream->readRawData((char*)&double_value,sizeof(double));
    ui->lineEdit_QDouble->setText(QString::asprintf("%.4f",double_value));

    char* buf;
    uint strLen;
    fileStream->readBytes(buf,strLen);          //读取字符串
    QString str_value = QString::fromUtf8(buf,strLen);        //用UTF-8编码
    ui->lineEdit_ShowQCharString->setText(str_value);

    fileStream->readBytes(buf,strLen);          //读取下一个字符串
    str_value = QString::fromLatin1(buf,strLen);        //用Latin-1编码
    ui->lineEdit_ShowQString->setText(str_value);

    //读取完成
    delFileStream();
    QMessageBox::information(this,"消息","从文件连续读取数据完成.");
}


void MainWindow::on_pushButton_QInt8Write_clicked()
{
    //qint8，写入
    if(iniWrite()){                                       //初始化写文件操作,创建QFile和QDataStream对象
        qint8 value = ui->spinBox_Qint->value();
        fileStream->writeRawData((char *)&value,sizeof(qint8));    //写qint8类型数据
        delFileStream();                                            //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QInt8Read_clicked()
{
    //qint8,读出
    if(iniRead()){
        qint8  value = 0;
        fileStream->readRawData((char *)&value,sizeof(qint8));              //读qint32类型数据
        ui->lineEdit_Qint->setText(QString("%1").arg(value));
        delFileStream();                                                   //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QUint8Write_clicked()
{
    //quint8，写入
    if(iniWrite()){                                       //初始化写文件操作,创建QFile和QDataStream对象
        quint8 value = ui->spinBox_QUint->value();
        fileStream->writeRawData((char *)&value,sizeof(quint8));    //写quint8类型数据
        delFileStream();                                            //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QUint8Read_clicked()
{
    //quint8,读出
    if(iniRead()){
        quint8  value = 0;
        fileStream->readRawData((char *)&value,sizeof(quint8));              //读quint8类型数据
        ui->lineEdit_QUint->setText(QString("%1").arg(value));
        delFileStream();                                                   //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QInt16Write_clicked()
{
    //qint16，写入
    if(iniWrite()){                                       //初始化写文件操作,创建QFile和QDataStream对象
        qint16 value = ui->spinBox_Qint16->value();
        fileStream->writeRawData((char *)&value,sizeof(qint16));    //写qint16类型数据
        delFileStream();                                            //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QInt16Read_clicked()
{
    //qint16,读出
    if(iniRead()){
        qint16  value = 0;
        fileStream->readRawData((char *)&value,sizeof(qint16));              //读qint16类型数据
        ui->lineEdit_Qint16->setText(QString("%1").arg(value));
        delFileStream();                                                   //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QUint16Write_clicked()
{
    //quint16，写入
    if(iniWrite()){                                       //初始化写文件操作,创建QFile和QDataStream对象
        quint16 value = ui->spinBox_QUint16->value();
        fileStream->writeRawData((char *)&value,sizeof(quint16));    //写quint16类型数据
        delFileStream();                                            //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QUint16Read_clicked()
{
    //quint16,读出
    if(iniRead()){
        quint16  value = 0;
        fileStream->readRawData((char *)&value,sizeof(quint16));              //读quint16类型数据
        ui->lineEdit_QUint16->setText(QString("%1").arg(value));
        delFileStream();                                                   //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QInt64Write_clicked()
{
    //qint64，写入
    if(iniWrite()){                                       //初始化写文件操作,创建QFile和QDataStream对象
        qint64 value = ui->spinBox_Qint64->value();
        fileStream->writeRawData((char *)&value,sizeof(qint64));    //写qint64类型数据
        delFileStream();                                            //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_QInt64Read_clicked()
{
    //qint64,读出
    if(iniRead()){
        qint64  value = 0;
        fileStream->readRawData((char *)&value,sizeof(qint64));              //读qint64类型数据
        ui->lineEdit_Qint64->setText(QString("%1").arg(value));
        delFileStream();                                                   //关闭文件，删除QFile和QDataStream对象
    }
}


void MainWindow::on_pushButton_clicked()
{
    //测试用文件
    QString curPath = QDir::currentPath();
    m_filename = QFileDialog::getSaveFileName(this,"选择一个文件",curPath,"原始二进制文件(*.raw)");

    if(!m_filename.isEmpty()){
        ui->lineEdit_Filename->setText(m_filename);
        ui->groupBox_ReadAndWriteDate->setEnabled(true);
        ui->action_ReadFromFile->setEnabled(true);
        ui->action_WriteToFile->setEnabled(true);
    }
}


void MainWindow::on_action_EditClearAll_triggered()
{
    //编缉框全清空  按钮
    QObjectList  objList = ui->groupBox_ReadAndWriteDate->children();    //分组框的子对象列表
    for(int i = 0;i < objList.size();i++){
        const QMetaObject *meta = objList.at(i)->metaObject();
        QString className = QString(meta->className());                 //子对象名称
        if(className == "QSpinBox"){
            QSpinBox *spin = qobject_cast<QSpinBox*>(objList.at(i));
            spin->setValue(0);
        }
        if(className == "QDoubleSpinBox"){
            QDoubleSpinBox  *doubleSpin = qobject_cast<QDoubleSpinBox*>(objList.at(i));
            doubleSpin->setValue(0);
        }
        if(className == "QLineEdit"){
            QLineEdit  *lineit = qobject_cast<QLineEdit*>(objList.at(i));
            lineit->clear();
        }
        if(className == "QCheckBox"){
            QCheckBox  *checkbox = qobject_cast<QCheckBox*>(objList.at(i));
            checkbox->setChecked(false);
        }
    }
}


void MainWindow::on_pushButton_BoolWrite_clicked()
{    //bool类型数据，写入
    if(iniWrite()){
        bool bool_value = ui->checkBox_Bool->isChecked();
        fileStream->writeRawData((char*)&bool_value,sizeof(bool));
        delFileStream();
    }
}


void MainWindow::on_pushButton_BoolRead_clicked()
{
    //bool类型数据，读出
    if(iniRead()){
         bool bool_value = false;
          fileStream->readRawData((char *)&bool_value,sizeof(bool));
          ui->checkBox_IsBool->setChecked(bool_value);
          delFileStream();
    }

}


void MainWindow::on_pushButton_QFloat16Write_clicked()
{
    //qfloat16类型数据,写入
    if(iniWrite()){
       qfloat16 qfloat16_value = ui->spinBox_QFloat16->value();
       fileStream->writeRawData((char*)&qfloat16_value,sizeof(qfloat16));
       delFileStream();
}
}


void MainWindow::on_pushButton_QFloat16Read_clicked()
{

    //qfloat16类型数据，读出
if(iniRead()){
    qfloat16 float16_value = 0;
    fileStream->readRawData((char*)&float16_value,sizeof(qfloat16));
    float val = float16_value;                      //asprintf()不支持qfloat16类型参数
    ui->lineEdit_QFloat16->setText(QString::asprintf("%.2f",val));
    delFileStream();
}
}

