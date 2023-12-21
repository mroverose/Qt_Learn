#include "tdialoglocate.h"
#include "ui_tdialoglocate.h"
#include <QMessageBox>
#include <QCloseEvent>
TDialogLocate::TDialogLocate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialogLocate)
{
    ui->setupUi(this);
}

TDialogLocate::~TDialogLocate()
{
    QMessageBox::information(this,"提示","TDialogLocate对话框被删除");
    delete ui;
}

void TDialogLocate::closeEvent(QCloseEvent *event){
    //对话框关闭
    event->accept();
    emit changeActionEnable(true);      //发射信号
}

void TDialogLocate::showEvent(QShowEvent *event){
    //对话框显示
    event->accept();
    emit  changeActionEnable(false);      //发射信号
}



void TDialogLocate::on_pushButton_SetText_clicked()
{
    //定位到单元格，并设置文字
    int row = ui->spinBox_Row->value();       //行号
    int col = ui->spinBox_Column->value();     //列号
    QString  text = ui->lineEdit->text();
    emit  changeCellText(row,col,text);     //发射信号
    if(ui->checkBox_Row->isChecked())ui->spinBox_Row->setValue(1 + ui->spinBox_Row->value());
    if(ui->checkBox_Column->isChecked())ui->spinBox_Column->setValue(1 + ui->spinBox_Column->value());
}
void TDialogLocate::setSpinValue(int rowNo, int colNo){
    ui->spinBox_Row->setValue(rowNo);
    ui->spinBox_Column->setValue(colNo);
}

void TDialogLocate::setSpinRange(int rowCount, int colCount){
    //设置spinbox的最大值
    ui->spinBox_Row->setMaximum(rowCount - 1);
    ui->spinBox_Column->setMaximum(colCount - 1);
}
