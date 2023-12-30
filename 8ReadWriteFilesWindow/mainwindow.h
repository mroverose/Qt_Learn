#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    bool openbyIO_Whole(const QString &aFileName);
    bool openbyIO_Lines(const QString &aFileName);

    bool saveByIO_Whole(const QString &aFileName);
    bool saveByIO_safe(const QString &aFileName);

    bool openByStream_Whole(const QString &aFileName);
    bool openByStream_Lines(const QString &aFileName);

    bool saveByStream_Whole(const QString &aFileName);
    bool saveByStream_Safe(const QString &aFileName);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_OpenFile_triggered();

    void on_action_SaveFile_triggered();

    void on_action_SaveSaveFile_triggered();

    void on_action_OpenQTextStream_triggered();

    void on_action_SaveQTextStream_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
