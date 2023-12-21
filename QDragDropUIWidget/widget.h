#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QAbstractItemView>
#include <QGroupBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
private:
    int getDropActionIndex(Qt::DropAction actionType);    //将枚举值转换为index
    Qt::DropAction    getDropActionType(int index);       //将index转换为枚举值
    QAbstractItemView   *m_itemView = nullptr;            //当前设置属性的组件
    void  refreshToUi(QGroupBox *curGroupBox);            //将组件的属性显示到界面上
protected:
    bool  eventFilter(QObject *watched, QEvent *event);
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_radioButton_ListSource_clicked();

    void on_radioButton_ListWidget_clicked();

    void on_radioButton_TreeWidget_clicked();

    void on_radioButton_TableWidget_clicked();

    void on_checkBox_acceptDrop_clicked(bool checked);

    void on_checkBox_dragEnable_clicked(bool checked);

    void on_comboBox_DragDrop_currentIndexChanged(int index);

    void on_comboBox_MoveAction_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
