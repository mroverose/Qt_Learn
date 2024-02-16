#include "mainwindow.h"

#include <QApplication>
#include <QSettings>
#include <QTranslator>

QTranslator trans;          //全局变量
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setOrganizationName("Mr-Qt");
    QApplication::setApplicationName("samp18_1");
    QSettings   settings;
    QString curLang = settings.value("Language","CN").toString();   //读取注册表
    bool suss = false;
    if(curLang == "EN")
        suss = trans.load("samp18_1_en.qm");
    else
        suss = trans.load("samp18_1_cn.qm");
    if(suss)
        a.installTranslator(&trans);        //加载翻译器
    MainWindow w;
    w.show();
    return a.exec();
}
