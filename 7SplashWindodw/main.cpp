#include "mainwindow.h"
#include "tdialoglogin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TDialogLogin *dlgLogin = new TDialogLogin;      //创建Splash登录对话框
    if(dlgLogin->exec() == QDialog::Accepted){
        MainWindow w;                      //显示主窗口
        w.show();                           //应用程序正常运行
        return a.exec();
    }
    else return 0;                      //退出应用程序
}
