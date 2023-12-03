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
    void on_pushButton_OnLeft_clicked();

    void on_pushButton_OnMiddle_clicked();

    void on_pushButton_OnRight_clicked();

    void on_pushButton_Bold_clicked(bool checked);

    void on_pushButton_Italic_clicked(bool checked);

    void on_pushButton_UnderLine_clicked(bool checked);

    void on_checkBox_ReadOnly_clicked(bool checked);

    void on_checkBox_Enable_clicked(bool checked);

    void on_checkBox_CheckBtnEnable_clicked(bool checked);

    void on_radioButton_Black_clicked();

    void on_radioButton_Red_clicked();

    void on_radioButton_Blue_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
