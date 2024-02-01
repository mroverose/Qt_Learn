#include "tpendialog.h"
#include "ui_tpendialog.h"
#include <QColorDialog>

TPenDialog::TPenDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TPenDialog)
{
    ui->setupUi(this);
    //线型下拉列表框的选择设置
    ui->comboBox_lineStyle->clear();
    ui->comboBox_lineStyle->addItem("NoPen");
    ui->comboBox_lineStyle->addItem("SolidLine");
    ui->comboBox_lineStyle->addItem("DashLine");
    ui->comboBox_lineStyle->addItem("DotLine");
    ui->comboBox_lineStyle->addItem("DashDotLine");
    ui->comboBox_lineStyle->addItem("DashDotDotLine");
    ui->comboBox_lineStyle->setCurrentIndex(1);
}

TPenDialog::~TPenDialog()
{
    delete ui;
}

QPen TPenDialog::getPen(QPen &iniPen, bool *ok){
    //静态函数，获取QPen对象
    TPenDialog      *dlg = new TPenDialog;          //创建对话框
    dlg->setPen(iniPen);
    QPen pen;
    int ret = dlg->exec();                      //以模态方式显示对话框
    if(ret == QDialog::Accepted){
        pen = dlg->getPen();
        *ok = true;
    }
    else{
        pen = iniPen;
        *ok = false;
    }
    delete dlg;
    return pen;
}

void TPenDialog::setPen(QPen &pen){
    //初始化pen，并刷新显示界面
    m_pen  = &pen;
    ui->spinBox_lineWidth->setValue(pen.width());            //线宽
    int i = static_cast<int>(pen.style());                 //枚举类型转换为整型
    ui->comboBox_lineStyle->setCurrentIndex(i);

    QColor color = pen.color();
    ui->pushButton_Color->setAutoFillBackground(true);
    QString str = QString::asprintf("background-color: rgb(%d,%d,%d);",color.red(),color.green(),color.blue());
    ui->pushButton_Color->setStyleSheet(str);
}

QPen TPenDialog::getPen(){
    //获得设置的QPen对象
    m_pen->setStyle(Qt::PenStyle(ui->comboBox_lineStyle->currentIndex()));      //线型
    m_pen->setWidth(ui->spinBox_lineWidth->value());
    QColor color = ui->pushButton_Color->palette().color(QPalette::Button);
    m_pen->setColor(color);
    return *m_pen;
}

void TPenDialog::on_pushButton_Color_clicked()
{
    //设置颜色
    QColor color =  QColorDialog::getColor();
    if(color.isValid()){
        //用样式表设置按钮的背景色
        QString str = QString::asprintf("background-color: rgb(%d,%d,%d);",color.red(),color.green(),color.blue());
        ui->pushButton_Color->setStyleSheet(str);
    }
}

