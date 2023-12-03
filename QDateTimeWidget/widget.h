#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:


    void on_pushButton_qDebugTime_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_qDebugDateTime_clicked();

    void on_pushButton_SetCurDataAndTime_clicked();

    void on_pushButton_SetTimeFromString_clicked();

    void on_pushButton_SetDateFromString_clicked();

    void on_pushButton_SetDateAndTimeFromString_clicked();

    void on_calendarWidget_selectionChanged();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
