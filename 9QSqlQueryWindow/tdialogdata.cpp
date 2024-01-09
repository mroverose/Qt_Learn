#include "tdialogdata.h"
#include "ui_tdialogdata.h"
#include <QFileDialog>

TDialogData::TDialogData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialogData)
{
    ui->setupUi(this);
}

TDialogData::~TDialogData()
{
    delete ui;
}

void TDialogData::setUpdateRecord(QSqlRecord &recData){
    //编缉记录，将更新记录数据到界面
    m_recored = recData;             //记录存入私有变量
    ui->spinBox_numberID->setEnabled(false);        //工号不允许编缉
    setWindowTitle("更新记录");
    //根据recData的数据更新界面显示内容
    ui->spinBox_numberID->setValue(recData.value("empNo").toInt());
    ui->lineEdit_name->setText(recData.value("Name").toString());
    ui->lineEdit_gender->setText(recData.value("Gender").toString());
   // ui->comboBox_gender->setCurrentText(recData.value("Gender").toString());
    ui->lineEdit_birth->setText(recData.value("Birthday").toString());
    ui->lineEdit_department->setText(recData.value("Department").toString());
    ui->lineEdit_province->setText(recData.value("Province").toString());
    ui->spinBox_salary->setValue(recData.value("Salary").toInt());
    ui->plainTextEdit->setPlainText(recData.value("Memo").toString());

    QVariant  va = recData.value("Photo");
    if(!va.isValid())
        ui->label_photo->clear();
    else{
        QByteArray  data = va.toByteArray();
        QPixmap  pic;
        pic.loadFromData(data);
        ui->label_photo->setPixmap(pic.scaledToWidth(ui->label_photo->size().width()));
    }
}


void TDialogData::setInsertRecord(QSqlRecord &recData){
    //插入记录，无须更新界面显示内容，但是要存储recData的字段结构
    m_recored = recData;
    ui->spinBox_numberID->setEnabled(true);              //插入的记录，允许编缉工号
    setWindowTitle("插入新记录");
    ui->spinBox_numberID->setValue(recData.value("empNo").toInt());
}

QSqlRecord  TDialogData::getRecordData(){
    //点击“确定”按钮后，界面数据保存到变量m_record中
    m_recored.setValue("empNo",ui->spinBox_numberID->value());
    m_recored.setValue("Name",ui->lineEdit_name->text());
    m_recored.setValue("Gender",ui->lineEdit_gender->text());
    m_recored.setValue("Birthday",ui->lineEdit_birth->text());
    m_recored.setValue("Province",ui->lineEdit_province->text());
    m_recored.setValue("Department",ui->lineEdit_department->text());
    m_recored.setValue("Salary",ui->spinBox_salary->value());
    m_recored.setValue("Memo",ui->plainTextEdit->toPlainText());

    //编缉照片时已修改了m_record的Photo字段的值
    return m_recored;
}

void TDialogData::on_pushButton_ClearPhoto_clicked()
{
   //清除照片 按钮
    ui->label_photo->clear();
    m_recored.setNull("Photo");       //字段清空
}


void TDialogData::on_pushButton_SetPhoto_clicked()
{
    //导入照片
    QString aFile = QFileDialog::getOpenFileName(this,"选择图片文件","","照片(*.jpg *.bnp *.jpeg)");
    if(aFile.isEmpty())
        return;
    QByteArray  data;
    QFile *file = new QFile(aFile);
    file->open(QIODevice::ReadOnly);
    data = file->readAll();
    file->close();
    delete file;

    m_recored.setValue("Photo",data);          //图片保存到Photo字段中
    QPixmap  pic;
    pic.loadFromData(data);
    ui->label_photo->setPixmap(pic.scaledToWidth(ui->label_photo->size().width()));
}




