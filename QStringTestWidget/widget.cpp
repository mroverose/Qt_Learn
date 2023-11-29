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

void Widget::showBoolInfo(QString str, bool checkValue)
{
    if(checkValue)ui->plainTextEdit->appendPlainText(str + "= true");
    else  ui->plainTextEdit->appendPlainText(str + "= false");
}




void Widget::on_pushButton_QStr_isN_isEmpty_clicked()
{   //测试isNull() 和 isEmpty()函数
    ui->plainTextEdit->appendPlainText("\n === isNULL()函数测试");
    QString   str1,str2 = "";
    ui->plainTextEdit->appendPlainText("QString str1,str2 = """);
    showBoolInfo("str1.isNull()",str1.isNull());
    showBoolInfo("str1.isEmpty()",str1.isEmpty());
    showBoolInfo("\nstr2.isNull()",str2.isNull());
    showBoolInfo("str2.isEmpty()",str2.isEmpty());
    str2.clear();
    ui->plainTextEdit->appendPlainText("\nstr2.chear()后");
    showBoolInfo("\nstr2.isNull()",str2.isNull());
    showBoolInfo("str2.isEmpty()",str2.isEmpty());
}


void Widget::on_pushButton_QStr_first_last_clicked()
{  //测试first() 和 last()函数
    ui->plainTextEdit->appendPlainText("\n === first(),last()函数测试");
    QString   str1,str2 = "";
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    int N = str1.lastIndexOf(str2);
    QString str3 = str1.first(N + 1);
    ui->plainTextEdit->appendPlainText(str3);
    str3 = str1.last(str1.size() - N - 1);
    ui->plainTextEdit->appendPlainText(str3);
}


void Widget::on_pushButton_QStr_front_back_clicked()
{
    //测试front() 和 back()函数
    ui->plainTextEdit->appendPlainText("\n ===  front()函数 & back()函数测试");
    QString   str1,str2;
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("QString str1.front() = " + QString(str1.front()));
    ui->plainTextEdit->appendPlainText("\nQString str1.back() = " + QString(str1.back()));
    ui->plainTextEdit->appendPlainText("\nQString str2.front() = " + QString(str2.front()));
    ui->plainTextEdit->appendPlainText("\nQString str2.back() = " + QString(str2.back()));
}


void Widget::on_pushButton_QStr_left_right_clicked()
{
    //测试left() 和 right()函数
    ui->plainTextEdit->appendPlainText("\n ===  left()函数 & right()函数测试");
    QString   str1,str2;
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);
    ui->plainTextEdit->appendPlainText("\nQString str1.left(N) = " + str1.left(N));
    ui->plainTextEdit->appendPlainText("\nQString str1.right(N) = " + str1.right(N));
    ui->plainTextEdit->appendPlainText("\nQString str2.left(N) = " + str2.left(N));
    ui->plainTextEdit->appendPlainText("\nQString str2.right(N) = " + str2.right(N));
}


void Widget::on_pushButton_QStr_section_clicked()
{
    //测试section函数
    //QString  QString::section(const QString &sep,qsizetype start,qsizetype end = -1,
    //                                QString::SectionFlags   flags = SectionDefault)
    ui->plainTextEdit->appendPlainText("\n ===  section函数测试");
    QString   str1,str2;
    int N = ui->spinBox->value();
    str1 = "学生姓名,男,2003-06-15,汉族,山东,华北地区,中国,亚洲,世界";
    str2 = "学生姓名,女,2013-04-18,朝鲜族,沈阳,东北地区,中国,亚洲,世界";

   // str1 = ui->comboBox_QStr_str1->currentText();
    //str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);
    ui->plainTextEdit->appendPlainText("\nQString str1.section(\",\",0,0) = " + str1.section(",",0,N));
    ui->plainTextEdit->appendPlainText("\nQString str1.section(\",\",0,0) = " + str1.section(",",N,N));

    ui->plainTextEdit->appendPlainText("\nQString str2.section(\",\",0,0) = " + str2.section(",",0,N));
    ui->plainTextEdit->appendPlainText("\nQString str2.section(\",\",0,0) = " + str2.section(",",N,N));

}


void Widget::on_pushButton_size_length_clicked()
{
    //测试size() && length()函数
    ui->plainTextEdit->appendPlainText("\n ===  size()函数 & length()函数测试");
    QString   str1,str2 = "";
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);
   // ui->plainTextEdit->appendPlainText("\nQString str1.count() = " + str1.count());
    ui->plainTextEdit->appendPlainText("\nQString str1.size() = " + str1.size());
    ui->plainTextEdit->appendPlainText("\nQString str1.length() = " + str1.length());

 //   ui->plainTextEdit->appendPlainText("\nQString str2.count() = " + str2.count());
    ui->plainTextEdit->appendPlainText("\nQString str2.size() = " + str2.size());
    ui->plainTextEdit->appendPlainText("\nQString str2.length() = " + str2.length());

}


void Widget::on_pushButton_QStr_resize_clicked()
{
    //测试resize()函数
    ui->plainTextEdit->appendPlainText("\n ===  resize()函数测试");
    QString   str1,str2 = "";
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);
    str1.resize(N);
     ui->plainTextEdit->appendPlainText("\nQString str1.resize() = " + str1);
    str1.resize(N,'*');
    ui->plainTextEdit->appendPlainText("\nQString str1.resize() = " + str1);
    str2.resize(N);
    ui->plainTextEdit->appendPlainText("\nQString str2.resize() = " + str2);
    str2.resize(N,'0');
    ui->plainTextEdit->appendPlainText("\nQString str2.resize() = " + str2);

}


void Widget::on_pushButton_QStr_fill_clicked()
{
    //测试fill()函数
    ui->plainTextEdit->appendPlainText("\n ===  fill()函数测试");
    QString   str1,str2 = "";
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);
    ui->plainTextEdit->appendPlainText("\nQString str1.fill() = " + str1.fill('X'));
    ui->plainTextEdit->appendPlainText("\nQString str1.fill() = " + str1.fill('*',N));

    ui->plainTextEdit->appendPlainText("\nQString str2.fill() = " + str2.fill('0'));
    ui->plainTextEdit->appendPlainText("\nQString str2.fill() = " + str2.fill('0',N));

}


void Widget::on_pushButton_QStr_indexof_clicked()
{
    //测试indexOf()函数 && lastIndexOf()
    ui->plainTextEdit->appendPlainText("\n ===  fill()函数测试");
    QString   str1,str2 = "";
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);

    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);
    ui->plainTextEdit->appendPlainText("\nQString str1.indexOf() = " + str1.indexOf("\\"));
    ui->plainTextEdit->appendPlainText("\nQString str1.lastIndexOf() = " + str1.lastIndexOf(str2));

    ui->plainTextEdit->appendPlainText("\nQString str2.indexOf() = " + str2.indexOf("N"));
    ui->plainTextEdit->appendPlainText("\nQString str2.lastIndexOf() = " + str2.lastIndexOf("Q"));

}


void Widget::on_pushButton_QStr_contains_clicked()
{
//测试contains函数
    ui->plainTextEdit->appendPlainText("\n === contain()函数测试");
    QString   str1,str2 = "";
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);

    showBoolInfo("str1.contains(str2)",str1.contains(str2));
    showBoolInfo("str1.contains(str2)",str1.contains(str2,Qt::CaseInsensitive));
    showBoolInfo("\nstr2.contains(str1)",str2.contains(str1));
    showBoolInfo("str2.contains(str1)",str2.contains(str1));

}


void Widget::on_pushButton_QStr_endsWith_startsWith_clicked()
{
    //测试endsWith && startsWith函数
    ui->plainTextEdit->appendPlainText("\n === contain()函数测试");
    QString   str1,str2 = "";
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);

    showBoolInfo("str1.endsWith(\".cpp\")",str1.endsWith(".cpp"));
    showBoolInfo("str1.contains(\".cpp\")",str1.startsWith(".cpp",Qt::CaseInsensitive));
    showBoolInfo("\nstr2.contains(\"string\")",str2.endsWith("string"));
    showBoolInfo("str2.contains(\"c:\")",str2.startsWith("c:"));

}


void Widget::on_pushButton_QStr_count_clicked()
{
    //测试count() && size() && length()函数
    ui->plainTextEdit->appendPlainText("\n ===  size()函数 & length()函数测试");
    QString   str1,str2 = "";
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);
    ui->plainTextEdit->appendPlainText("\nQString str1.count(\"Qt\") = " + str1.count("Qt",Qt::CaseInsensitive));
    ui->plainTextEdit->appendPlainText("\nQString str1.size() = " + str1.size());
    ui->plainTextEdit->appendPlainText("\nQString str1.length() = " + str1.length());

    ui->plainTextEdit->appendPlainText("\nQString str2.count(str1) = " + str2.count("str1",Qt::CaseInsensitive));
    ui->plainTextEdit->appendPlainText("\nQString str2.size() = " + str2.size());
    ui->plainTextEdit->appendPlainText("\nQString str2.length() = " + str2.length());
}


void Widget::on_pushButton_QStr_trim_simplifiy_clicked()
{
    //测试trimmed() && simplified()函数
    //trimmed()去除首尾空格
    //simplified()去除多个空格，用单个空格替代
    ui->plainTextEdit->appendPlainText("\n ===  trimmed() && simplified()函数测试");
    QString   str1,str2 = "";
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);
    ui->plainTextEdit->appendPlainText("\nQString str1.trimmed() = " + str1.trimmed());
    ui->plainTextEdit->appendPlainText("\nQString str1.simplified() = " + str1.simplified());
    ui->plainTextEdit->appendPlainText("\nQString str2.trimmed() = " + str2.trimmed());
    ui->plainTextEdit->appendPlainText("\nQString str2.simplified() = " + str2.simplified());
}


void Widget::on_pushButton_QStr_insert_clicked()
{    //测试insert()函数
    ui->plainTextEdit->appendPlainText("\n ===  insert()函数测试");
    QString   str1,str2 = "";
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);

    ui->plainTextEdit->appendPlainText("\nQString str1.insert(N,str2) = " + str1.insert(N,str2));
    ui->plainTextEdit->appendPlainText("\nQString str2.trimmed(N,str1) = " + str2.insert(N,str1));

}


void Widget::on_pushButton_QStr_remove_clicked()
{  //测试remove()函数
    ui->plainTextEdit->appendPlainText("\n ===  remove()函数测试");
    QString   str1,str2 = "";
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);

    ui->plainTextEdit->appendPlainText("\nQString str1.remove(N,5) = " + str1.remove(N,5));
    ui->plainTextEdit->appendPlainText("\nQString str2.remove(N,5) = " + str2.remove(N,5));


}


void Widget::on_pushButton_QStr_replace_clicked()
{
        //测试replace()函数
    ui->plainTextEdit->appendPlainText("\n ===  replace()函数测试");
    QString   str1,str2 = "";
    int N = ui->spinBox->value();
    str1 = ui->comboBox_QStr_str1->currentText();
    str2 = ui->comboBox_QStr_str2->currentText();
    ui->plainTextEdit->appendPlainText("QString str1 = " + str1);
    ui->plainTextEdit->appendPlainText("QString str2 = " + str2);
    ui->plainTextEdit->appendPlainText("输入的数字为 ：" + N);

    ui->plainTextEdit->appendPlainText("\nQString str1.replace(N,str2.size(),str2) = " + str1.replace(N,str2.size(),str2));
    ui->plainTextEdit->appendPlainText("\nQString str2.replace('a','X') = " + str2.replace('a','X'));

}


void Widget::on_pushButton_QStr_clearTxt_clicked()
{
    ui->plainTextEdit->clear();
}

