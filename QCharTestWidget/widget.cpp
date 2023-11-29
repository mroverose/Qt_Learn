#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_QCharUnicode_clicked()
{
    QString  str = ui->lineEdit_String->text();

    if(str.isEmpty())return;
    for(qint16 i = 0;i < str.size();i++){
        QChar ch = str.at(i);
        char16_t   uniCode = ch.unicode();
        QString  chStr(ch);
        QString  info = chStr + QString::asprintf("\t,Unicode编码 = 0x%X",uniCode);
        ui->plainTextEdit->appendPlainText(info);
    }
}


void Widget::on_pushButton_QCharProperty_clicked()
{
    QString str = ui->lineEdit_Char->text();
    if(str.isEmpty())return;
    QChar  ch = str[0];
    char16_t  uniCode = ch.unicode();
    QString  chStr(ch);
    QString  info = chStr + QString::asprintf("\t,Unicode编码 = 0x%X\n",uniCode);
    ui->plainTextEdit->appendPlainText(info);

    //使用QChar的接口函数判断字符的特性
    ui->checkBox_isDigit->setChecked(ch.isDigit());
    ui->checkBox_isLetter->setChecked(ch.isLetter());
    ui->checkBox_isLetterOrNumber->setChecked(ch.isLetterOrNumber());
    ui->checkBox_isLower->setChecked(ch.isLower());
    ui->checkBox_isMark->setChecked(ch.isMark());
    ui->checkBox_isPunct->setChecked(ch.isPunct());
    ui->checkBox_isSymbol->setChecked(ch.isSymbol());
    ui->checkBox_isUpper->setChecked(ch.isUpper());
}


void Widget::on_pushButton_QCharToLatin1_clicked()
{
    //与Latin1的转换按钮
    QString str = "Dimple";
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(str);
    QChar ch = QChar::fromLatin1('P');
    str[0] = ch;
    ui->plainTextEdit->appendPlainText("\n"+str);
}


void Widget::on_pushButton_QCharToUTF_clicked()
{
    //与UTF-16的转换
    QString str = "Hello,北京！";
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(str);
    str[6] = QChar(0x9752);
    str[7] = QChar::fromUcs2(0x5C98);
    ui->plainTextEdit->appendPlainText("\n" + str);
}


void Widget::on_pushButton_QCharCompare_clicked()
{
    //“QChar比较与替换"
    QString  str = "他们来自河南或河北，有的来自河东区，有的来自河西区。";
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(str);
    QString  tmp = "河 to 湖";
    QChar He = QChar::fromUcs2(tmp[0].unicode());
    QChar Hu = QChar(tmp[4].unicode());

    for(qint16 i = 0;i < str.size();i++){
        if(str.at(i) == He)str[i] = Hu;
    }
    ui->plainTextEdit->appendPlainText("\n" + str);
}


void Widget::on_pushButton_ClearText_clicked()
{
    ui->plainTextEdit->clear();
}

