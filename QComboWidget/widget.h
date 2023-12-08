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
    void on_pushButton_initializeList_clicked();

    void on_pushButton_info_clicked();

    void on_comboBox_userInput_currentTextChanged(const QString &arg1);

    void on_comboBox_cityInfo_currentIndexChanged(int index);

    void on_checkBox_clicked(bool checked);

    void on_pushButton_clearList_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
