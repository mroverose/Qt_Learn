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
    void on_checkBox_TextVisible_clicked(bool checked);

    void on_checkBox_InvertedAppear_clicked(bool checked);

    void on_radioButton_ShowPercent_clicked();

    void on_radioButton_ShowValue_clicked();

    void do_valueChanged(int value);

private:
    Ui::Widget *ui;

};
#endif // WIDGET_H
