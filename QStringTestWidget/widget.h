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
    void on_pushButton_QStr_isN_isEmpty_clicked();

    void on_pushButton_QStr_first_last_clicked();

    void on_pushButton_QStr_front_back_clicked();

    void on_pushButton_QStr_left_right_clicked();

    void on_pushButton_QStr_section_clicked();

    void on_pushButton_size_length_clicked();

    void on_pushButton_QStr_resize_clicked();

    void on_pushButton_QStr_fill_clicked();

    void on_pushButton_QStr_indexof_clicked();

    void on_pushButton_QStr_contains_clicked();

    void on_pushButton_QStr_endsWith_startsWith_clicked();

    void on_pushButton_QStr_count_clicked();

    void on_pushButton_QStr_trim_simplifiy_clicked();

    void on_pushButton_QStr_insert_clicked();

    void on_pushButton_QStr_remove_clicked();

    void on_pushButton_QStr_replace_clicked();

    void on_pushButton_QStr_clearTxt_clicked();

private:
    Ui::Widget *ui;
    void showBoolInfo(QString str,bool checkValue);
};
#endif // WIDGET_H
