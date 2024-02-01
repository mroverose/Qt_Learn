#ifndef TDICETHREAD_H
#define TDICETHREAD_H

#include <QThread>

class TDiceThread : public QThread
{
    Q_OBJECT

protected:
    void run();             //线程任务
public:
    explicit TDiceThread(QObject *parent = nullptr);
};

//TpictureThread获取骰子点数，生成对应的图片文件名
class TPictureThread : public QThread
{
    Q_OBJECT
protected:
    void run();
public:
    explicit TPictureThread(QObject *parent = nullptr);
signals:
    void newPicture(QString picName);
};


//获取骰子点数
class TValueThread : public QThread
{
    Q_OBJECT
protected:
    void run();
public:
    explicit TValueThread(QObject *parent = nullptr);
signals:
    void newValue(int seq,int diceValue);
};
#endif // TDICETHREAD_H
