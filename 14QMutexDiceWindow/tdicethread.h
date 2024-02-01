#ifndef TDICETHREAD_H
#define TDICETHREAD_H

#include <QThread>
#include <QMutex>

class TDiceThread : public QThread
{
    Q_OBJECT
private:
    QMutex  mutex;          //信号量
    int  m_seq = 0;         //掷骰子次数的序号
    int     m_diceValue;    //骰子点数
    bool    m_paused = true;    //暂停掷骰子
    bool    m_stop = false;     //停止线程，也就是退出run()函数运行
protected:
    void run();             //线程任务
public:
    explicit TDiceThread(QObject *parent = nullptr);
    void diceBegin();
    void dicePause();
    void stopThread();
    bool    readValue(int *seq,int *diceValue);     //供主线程读取数据的函数
signals:
    void        newValue(int seq,int m_diceValue);          //产生新点数的信号

};

#endif // TDICETHREAD_H
