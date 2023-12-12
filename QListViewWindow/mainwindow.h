#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QStringList     m_strList;
    QStringListModel    *m_model;       //数据模型
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_ListRestore_clicked();

    void on_pushButton_ListClear_clicked();

    void on_pushButton_ListAddItem_clicked();

    void on_pushButton_ListInsertItem_clicked();

    void on_pushButton_ListDelItem_clicked();

    void on_pushButton_ListMoveUp_clicked();

    void on_pushButton_ListMoveDown_clicked();

    void on_pushButton_ListSort_clicked(bool checked);

    void on_listView_clicked(const QModelIndex &index);

    void on_checkBox_Editable_clicked(bool checked);

    void on_pushButton_TextShowStringList_clicked();

    void on_pushButton_TextClear_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
