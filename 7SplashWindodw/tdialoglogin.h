#ifndef TDIALOGLOGIN_H
#define TDIALOGLOGIN_H

#include <QDialog>

namespace Ui {
class TDialogLogin;
}

class TDialogLogin : public QDialog
{
    Q_OBJECT
private:
    bool m_moving = false;           //表示窗口是否在鼠标操作下移动
    QPoint m_lastPos;                 //上一次的鼠标光标位置
    QString m_user = "user";           //初始化用户名
    QString m_pswd = "123456";           //初始化密码，未加密的
    int m_tryCount = 0;                 //试错次数
    void readSetting();                //读取设置
    void writeSetting();               //写入设置
    QString encrpt(const QString& str);        //字符串加密

protected:
        //鼠标事伯处理函数，用于拖动窗口
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
public:
    explicit TDialogLogin(QWidget *parent = nullptr);
    ~TDialogLogin();

private slots:
    void on_pushButton_OK_clicked();

private:
    Ui::TDialogLogin *ui;
};

#endif // TDIALOGLOGIN_H
