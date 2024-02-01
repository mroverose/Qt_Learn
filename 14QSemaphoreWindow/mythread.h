#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class TDaqThread : public QThread
{
    Q_OBJECT
private:
    bool m_stop = false;
protected:
    void run();             //线程任务
public:
    explicit TDaqThread(QObject *parent = nullptr);
    void stopThread();              //结束线程run()函数的运行
};


class TProcessThread : public QThread     //数据处理线程
{
    Q_OBJECT
private:
    bool m_stop = false;
protected:
    void run();
public:
    explicit TProcessThread(QObject *parent = nullptr);
    void stopThread();
signals:
    void dataAvailable(int bufferSeq,int *bufferData,int pointCount);
};

#endif // MYTHREAD_H
