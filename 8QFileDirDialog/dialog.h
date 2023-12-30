#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFileSystemWatcher>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QFileSystemWatcher  filewatcher;           //用于监视文件和目录
    void showBtnInfo(QObject *btn);             //显示按钮的标题的toolTip提示信息
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    void do_directoryChanged(const QString &path);
    void do_fileChanged(const QString &path);
private slots:


    void on_pushButton_baseName_clicked();

    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_60_clicked();

    void on_pushButton_61_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_63_clicked();

    void on_pushButton_64_clicked();

    void on_pushButton_65_clicked();

    void on_pushButton_66_clicked();

    void on_pushButton_67_clicked();

    void on_pushButton_OpenFile_clicked();

    void on_pushButton_OpenDir_clicked();

    void on_pushButton_ClearText_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
