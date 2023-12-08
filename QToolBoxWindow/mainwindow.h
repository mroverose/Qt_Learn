#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    void setActionsForButton();
    void createSelectonMenu();
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionList_Ini_triggered();

    void on_actionList_Clear_triggered();

    void on_actionList_Insert_triggered();

    void on_actionList_Append_triggered();

    void on_actionList_Delete_triggered();

    void on_actionList_SelectReverse_triggered();

    void on_actionList_SelectNone_triggered();

    void on_actionList_SletectAll_triggered();

    void on_toolButton_ListSortUporder_clicked();

    void on_toolButton_ListSortDownorder_clicked();

    void on_checkBox_ListSort_clicked(bool checked);

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_listWidget_currentRowChanged(int currentRow);

    void on_listWidget_currentTextChanged(const QString &currentText);

    void on_listWidget_itemChanged(QListWidgetItem *item);

    void on_listWidget_itemSelectionChanged();

    void on_listWidget_itemPressed(QListWidgetItem *item);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_listWidget_itemActivated(QListWidgetItem *item);

    void on_listWidget_itemEntered(QListWidgetItem *item);

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_TextClear_clicked();

    void on_pushButton_TextAddLine_clicked();

    void on_actionSelectPopMenu_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
