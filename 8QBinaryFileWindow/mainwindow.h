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
    QString m_filename;               //用于测试的文件
    template<typename T>void  writeByStream(T value);        //函数模板用于某种数据写入流
    template<typename T>void readByStream(T &value);
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_QUint16Write_clicked();

    void on_pushButton_QUint16Read_clicked();

    void on_pushButton_BoolWrite_clicked();

    void on_pushButton_QFloat16Write_clicked();

    void on_pushButton_QFloatWrite_clicked();

    void on_pushButton_QDoubleWrite_clicked();

    void on_pushButton_QInt8Write_clicked();

    void on_pushButton_QUint8Write_clicked();

    void on_pushButton_QInt16Write_clicked();

    void on_pushButton_QInt32Write_clicked();

    void on_pushButton_QInt64Write_clicked();

    void on_pushButton_QCharWrite_clicked();

    void on_pushButton_QStringWrite_clicked();

    void on_pushButton_QFont_clicked();

    void on_pushButton_QColor_clicked();

    void on_pushButton_QFontWrite_clicked();

    void on_pushButton_QColorWrite_clicked();

    void on_pushButton_QInt64Read_clicked();

    void on_pushButton_BoolRead_clicked();

    void on_pushButton_QFloat16Read_clicked();

    void on_pushButton_QFloatRead_clicked();

    void on_pushButton_QDoubleRead_clicked();

    void on_pushButton_QCahrRead_clicked();

    void on_pushButton_QStringRead_clicked();

    void on_pushButton_QFontRead_clicked();

    void on_pushButton_QColorRead_clicked();

    void on_action_WriteToFile_triggered();

    void on_action_ReadFromFile_triggered();

    void on_action_EditClearAll_triggered();

    void on_pushButton_QUint8Read_clicked();

    void on_pushButton_QInt8Read_clicked();

    void on_pushButton_QInt32Read_clicked();

    void on_pushButton_QInt16Read_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
