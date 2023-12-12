#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel  *labFilePath;
    QFileSystemModel  *m_model;     //数据模型变量
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void on_actionSetRoot_triggered();

    void on_radioButton_ShowDirAndFiles_clicked();

    void on_radioButton_ShowDir_clicked();

    void on_checkBox_FileNameFilter_clicked(bool checked);

    void on_pushButton_Apply_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
