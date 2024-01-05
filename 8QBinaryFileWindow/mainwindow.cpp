#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QFileDialog>
#include <QDataStream>
#include <QFontDialog>
#include <QColorDialog>
#include <QMessageBox>

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


void MainWindow::on_pushButton_clicked()
{
    //测试用文件按钮
    QString curPath = QDir::currentPath();
    m_filename = QFileDialog::getSaveFileName(this,"选择一个文件",curPath,"流数据文件(*.stream)");
    if(!m_filename.isEmpty()){
        ui->lineEdit_Filename->setText(m_filename);
        ui->groupBox_ReadAndWriteDate->setEnabled(true);
        ui->action_WriteToFile->setEnabled(true);
        ui->action_ReadFromFile->setEnabled(true);
    }
}


template<typename T>
void MainWindow::writeByStream(T value)
{
    QFile fileDevice(m_filename);           //定义QFile对象，设置文件名
    if(!fileDevice.open(QIODevice::WriteOnly))return;             //以只写模式打开

    QDataStream fileStream(&fileDevice);         //创建QDataStream对象
    fileStream.setVersion(QDataStream::Qt_6_6);   //设置版本号，写入和读取时使用的版本要兼容
    if(ui->radioButton_BigEndian->isChecked())           //设置字节序
        fileStream.setByteOrder(QDataStream::BigEndian);
    else
        fileStream.setByteOrder(QDataStream::LittleEndian);

    if(ui->radioButton_SinglePrecision->isChecked())
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    else
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);
    fileStream<<value;                     //用流写入操作符写入
    fileDevice.close();
}

void MainWindow::on_pushButton_QUint16Write_clicked()
{
    //quint16类型数据，写入
    quint16 value = ui->spinBox_QUint16->value();
    writeByStream(value);
}



void MainWindow::on_pushButton_QUint16Read_clicked()
{
    //quint16类型数据，读出
    quint16 value = 0;
    readByStream(value);
    ui->lineEdit_QUint16->setText(QString("%1").arg(value));
}


void MainWindow::on_pushButton_BoolWrite_clicked()
{
    //bool类型数据，写入
    bool value = ui->checkBox_Bool->isChecked();
    writeByStream(value);
}


void MainWindow::on_pushButton_QFloat16Write_clicked()
{
    //qfloat16类型数据，写入
    qfloat16 value = ui->spinBox_QFloat16->value();
    writeByStream(value);
}


void MainWindow::on_pushButton_QFloatWrite_clicked()
{
    //float类型数据，写入
    float value = ui->spinBox_QFloat->value();
    writeByStream(value);
}


void MainWindow::on_pushButton_QDoubleWrite_clicked()
{
    //double类型数据，写入
    double value = ui->spinBox_QDouble->value();
    writeByStream(value);
}


void MainWindow::on_pushButton_QInt8Write_clicked()
{
    //qint8类型数据，写入
    qint8 value = ui->spinBox_Qint->value();
    writeByStream(value);
}


void MainWindow::on_pushButton_QUint8Write_clicked()
{
    //quint8类型数据，写入
    quint8 value = ui->spinBox_QUint->value();
    writeByStream(value);
}


void MainWindow::on_pushButton_QInt16Write_clicked()
{
    //qint16类型数据，写入
    qint16 value = ui->spinBox_Qint16->value();
    writeByStream(value);
}


void MainWindow::on_pushButton_QInt32Write_clicked()
{
    //qint32类型数据，写入
    qint32 value = ui->spinBox_Qint32->value();
    writeByStream(value);
}


void MainWindow::on_pushButton_QInt64Write_clicked()
{
    //qint64类型数据，写入
    qint64 value = ui->spinBox_Qint64->value();
    writeByStream(value);
}


void MainWindow::on_pushButton_QCharWrite_clicked()
{
    //char* 类型数据，写入
    QString str = ui->lineEdit_QCharString->text();
    char * value = str.toLocal8Bit().data();
    writeByStream(value);
}


void MainWindow::on_pushButton_QStringWrite_clicked()
{
    //QString 字符串，写入
    QString value = ui->lineEdit_QStirng->text();
    writeByStream(value);
}


void MainWindow::on_pushButton_QFont_clicked()
{
    //选择字体 按钮
    QFont font = ui->pushButton_QFont->font();
    bool OK = false;
    font = QFontDialog::getFont(&OK,font,this);
    if(OK)
        ui->pushButton_QFont->setFont(font);
}


void MainWindow::on_pushButton_QColor_clicked()
{
    //选择颜色 按钮
    QPalette plet = ui->pushButton_QColor->palette();
    QColor  color = plet.buttonText().color();
    color = QColorDialog::getColor(color);
    if(color.isValid()){
        plet.setColor(QPalette::ButtonText,color);
        ui->pushButton_QColor->setPalette(plet);
    }
}


void MainWindow::on_pushButton_QFontWrite_clicked()
{
    //QFont类型数据，写入
    QFont font = ui->pushButton_QFont->font();
    writeByStream(font);              //向文件写入QFont类型数据
}


void MainWindow::on_pushButton_QColorWrite_clicked()
{
    //QColor类型数据，写入
    QPalette plet = ui->pushButton_QColor->palette();
    QColor color = plet.buttonText().color();
    writeByStream(color);             //向文件写入QColor类型数据
}




template<typename T>
void MainWindow::readByStream(T &value)
{
    if(!QFile::exists(m_filename)){
        QMessageBox::critical(this,"错误","文件名不存在,文件名： \n" + m_filename);
        return;
    }
    QFile fileDevice(m_filename);
    if(!fileDevice.open(QIODevice::ReadOnly))
        return;

    QDataStream fileStream(&fileDevice);
    fileStream.setVersion(QDataStream::Qt_6_6);          //设置版本号
    if(ui->radioButton_BigEndian->isChecked())
        fileStream.setByteOrder(QDataStream::BigEndian);
    else
        fileStream.setByteOrder(QDataStream::LittleEndian);

    if(ui->radioButton_SinglePrecision->isChecked())
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    else
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);
    fileStream>>value;                                     //使用流读取操作符读出数据
    fileDevice.close();
}

void MainWindow::on_pushButton_QInt64Read_clicked()
{
    //qint64类型数据，读出
    qint64 value = 0;
    readByStream(value);
    ui->lineEdit_Qint64->setText(QString("%1").arg(value));
}



void MainWindow::on_pushButton_BoolRead_clicked()
{
    //bool类型数据，读出
    bool value = false;
    readByStream(value);
    ui->checkBox_IsBool->setChecked(value);
}




void MainWindow::on_pushButton_QFloat16Read_clicked()
{
    //qfloat16类型数据，读出
    qfloat16 value = 0;
    readByStream(value);
    float val = value;                  //转换为float类型，因为QString::asprintf()不支持qfloat16类型
    ui->lineEdit_QFloat16->setText(QString::asprintf("%.2f",val));
}


void MainWindow::on_pushButton_QFloatRead_clicked()
{
    //float类型数据，读出
    float value = 0;
    readByStream(value);
    ui->lineEdit_QFloat->setText(QString::asprintf("%.4f",value));

}


void MainWindow::on_pushButton_QDoubleRead_clicked()
{
    //double类型数据，读出
    double value = 0;
    readByStream(value);
    ui->lineEdit_QDouble->setText(QString::asprintf("%.4f",value));

}


void MainWindow::on_pushButton_QCahrRead_clicked()
{
    //char*字符串，读出
    char * value;
    readByStream(value);
    QString str(value);             //转换为QString类型后才能在界面上显示
    ui->lineEdit_ShowQCharString->setText(str);
}



void MainWindow::on_pushButton_QStringRead_clicked()
{
    //QString字符串，读出
    QString value = "";
    readByStream(value);
    ui->lineEdit_ShowQStirng->setText(value);

}


void MainWindow::on_pushButton_QFontRead_clicked()
{
    //QFont类型数据，读出
    QFont font;
    readByStream(font);
    ui->lineEdit_QFont->setFont(font);
}


void MainWindow::on_pushButton_QColorRead_clicked()
{
    //QColor类型数据,读出
    QColor color = Qt::black;
    readByStream(color);
    QPalette plet = ui->lineEdit_QColor->palette();
    plet.setColor(QPalette::Text,color);
    ui->lineEdit_QColor->setPalette(plet);
}


void MainWindow::on_action_WriteToFile_triggered()
{
    //连续写入文件 按钮
    QFile  fileDevice(m_filename);
    if(!fileDevice.open(QIODevice::WriteOnly))
        return;
    QDataStream  fileStream(&fileDevice);
    fileStream.setVersion(QDataStream::Qt_6_6);
    if(ui->radioButton_BigEndian->isChecked())
        fileStream.setByteOrder(QDataStream::BigEndian);
    else
        fileStream.setByteOrder(QDataStream::LittleEndian);

    if(ui->radioButton_SinglePrecision->isChecked())
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    else
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);

    //按顺序写入各种数据
    qint8 int8_value = ui->spinBox_Qint->value();
    fileStream<<int8_value;

    quint8 uint8_value = ui->spinBox_QUint->value();
    fileStream<<uint8_value;

    qint16 qint16_value = ui->spinBox_Qint16->value();
    fileStream<<qint16_value;

    quint16 uint16_value = ui->spinBox_QUint16->value();
    fileStream<<uint16_value;

    qint32 qint32_value = ui->spinBox_Qint32->value();
    fileStream<<qint32_value;

    qint64 qint64_value = ui->spinBox_Qint64->value();
    fileStream<<qint64_value;

    bool bool_value = ui->checkBox_Bool->isChecked();
    fileStream<<bool_value;

    qfloat16 qfloat16_value = ui->spinBox_QFloat16->value();
    fileStream<<qfloat16_value;

    float float_value = ui->spinBox_QFloat->value();
    fileStream<<float_value;

    double double_value = ui->spinBox_QDouble->value();
    fileStream<<double_value;

    QString str = ui->lineEdit_QCharString->text();
    char* charStr = str.toLocal8Bit().data();
    fileStream<<charStr;

    QString str_value = ui->lineEdit_QStirng->text();
    fileStream<<str_value;

    QFont font = ui->pushButton_QFont->font();
    fileStream<<font;

    QPalette plet = ui->pushButton_QColor->palette();
    QColor color = plet.buttonText().color();
    fileStream<<color;

    fileDevice.close();
    QMessageBox::information(this,"消息","数据连续写入文件完成.");
}


void MainWindow::on_action_ReadFromFile_triggered()
{
    //连续从文件读出 按钮
    if(!QFile::exists(m_filename)){
        QMessageBox::critical(this,"错误","文件不存在，文件名: \n" + m_filename);
        return;
    }

    QFile  fileDevice(m_filename);
    if(!fileDevice.open(QIODevice::ReadOnly))
        return;
    QDataStream  fileStream(&fileDevice);
    fileStream.setVersion(QDataStream::Qt_6_6);
    if(ui->radioButton_BigEndian->isChecked())
        fileStream.setByteOrder(QDataStream::BigEndian);
    else
        fileStream.setByteOrder(QDataStream::LittleEndian);

    if(ui->radioButton_SinglePrecision->isChecked())
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    else
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);

    //按顺序开始读取各种数据

    fileStream.startTransaction();    //开始读取事务

    qint8 int8_value =  0;
    fileStream>>int8_value;
    ui->lineEdit_Qint->setText(QString("%1").arg(int8_value));

    quint8 uint8_value = 0;
    fileStream>>uint8_value;
    ui->lineEdit_QUint->setText(QString("%1").arg(uint8_value));

    qint16 qint16_value = 0;
    fileStream>>qint16_value;
    ui->lineEdit_Qint16->setText(QString("%1").arg(qint16_value));


    quint16 uint16_value = 0;
    fileStream>>uint16_value;
    ui->lineEdit_QUint16->setText(QString("%1").arg(uint16_value));


    qint32 qint32_value = 0;
    fileStream>>qint32_value;
    ui->lineEdit_Qint32->setText(QString("%1").arg(qint32_value));


    qint64 qint64_value = 0;
    fileStream>>qint64_value;
    ui->lineEdit_Qint64->setText(QString("%1").arg(qint64_value));


    bool bool_value = false;
    fileStream>>bool_value;
    ui->checkBox_IsBool->setChecked(bool_value);


    qfloat16 qfloat16_value = 0;
    fileStream>>qfloat16_value;
    ui->lineEdit_QFloat16->setText(QString::asprintf("%.2f",qfloat16_value));

    float float_value = 0;
    fileStream>>float_value;
    ui->lineEdit_QFloat->setText(QString::asprintf("%.4f",float_value));


    double double_value = 0;
    fileStream>>double_value;
    ui->lineEdit_QDouble->setText(QString::asprintf("%.4f",double_value));


    char* charStr;
    fileStream>>charStr;
    QString str(charStr);
    ui->lineEdit_QCharString->setText(str);

    QString str_value = "";
    fileStream>>str_value;
    ui->lineEdit_QStirng->setText(str_value);

    QFont font;
    fileStream>>font;
    ui->lineEdit_QFont->setFont(font);

    QColor color;
    fileStream>>color;
    QPalette plet = ui->pushButton_QColor->palette();
    plet.setColor(QPalette::Text,color);
    ui->lineEdit_QColor->setPalette(plet);

    if(fileStream.commitTransaction())                     //提交读取操作事务
        QMessageBox::information(this,"消息","从文件连续读取数据完成.");
    else
        QMessageBox::critical(this,"错误","文件读取过程出错，请检查文件格式");
    fileDevice.close();
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


void MainWindow::on_pushButton_QUint8Read_clicked()
{
    //quint8类型数据，读出
    quint8 value = 0;
    readByStream(value);
    ui->lineEdit_QUint->setText(QString("%1").arg(value));
}


void MainWindow::on_pushButton_QInt8Read_clicked()
{
    //qint8类型数据，读出
    qint8 value = 0;
    readByStream(value);
    ui->lineEdit_Qint->setText(QString("%1").arg(value));
}


void MainWindow::on_pushButton_QInt32Read_clicked()
{
    //qint32类型数据，读出
    qint32 value = 0;
    readByStream(value);
    ui->lineEdit_Qint32->setText(QString("%1").arg(value));
}


void MainWindow::on_pushButton_QInt16Read_clicked()
{
    //qint16类型数据，读出
    qint16 value = 0;
    readByStream(value);
    ui->lineEdit_Qint16->setText(QString("%1").arg(value));
}

