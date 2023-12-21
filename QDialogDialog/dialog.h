#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT
private:
    void do_progress_canceled();
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_OpenFile_clicked();

    void on_pushButton_OpenFiles_clicked();

    void on_pushButton_SaveFile_clicked();

    void on_pushButton_SelectDirs_clicked();

    void on_pushButton_SelectColor_clicked();

    void on_pushButton_SelectFont_clicked();

    void on_pushButton_ProgressDialog_clicked();

    void on_pushButton_InputString_clicked();

    void on_pushButton_InputNum_clicked();

    void on_pushButton_InputFloat_clicked();

    void on_pushButton_InputItems_clicked();

    void on_pushButton_informationBox_clicked();

    void on_pushButton_criticalBox_clicked();

    void on_pushButton_warningBox_clicked();

    void on_pushButton_aboutBox_clicked();

    void on_pushButton_questionBox_clicked();

    void on_pushButton_aboutQtBox_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
