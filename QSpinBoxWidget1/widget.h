#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
QT_BEGIN_NAMESPACE
namespace Ui {
   class Widget;
}QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void on_pushButton_TotalAmount_clicked();

    void on_spinBox_DecNum_valueChanged(int arg1);

    void on_spinBox_BinNum_valueChanged(int arg1);

    void on_spinBox_HexNum_valueChanged(int arg1);

private:
    Ui::Widget   *ui;
};
#endif // WIDGET_H
