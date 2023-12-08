#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QElapsedTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
private:
    QTimer   *m_timer;              //定时器
    QElapsedTimer   m_counter;    //计时器

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void do_timer_timeout();
    void do_timer_shot();

    void on_pushButton_SingleTimer_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_stop_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
