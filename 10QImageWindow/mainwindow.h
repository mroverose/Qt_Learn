#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPrinter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QString m_filename;                 //当前图片文件的名
    QImage m_image;                     //当前图片
    void showImageFeatures(bool formatChanged = true);      //显示图像属性
    void imageModified(bool modified = true);               //图像被修改了，改变Action状态
    void printImage(QPainter *painter,QPrinter *printer);   //打印图像
    void printRGB565Data(QPainter *painter,QPrinter *printer);  //打印RGB565格式的数据
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void do_paintRequestedImage(QPrinter* printer);             //用于打印图片
    void do_PaintRequestedText(QPrinter* printer);              //用于打印文本
    void on_action_open_triggered();

    void on_action_save_triggered();

    void on_action_File_SaveAs_triggered();

    void on_action_FileReload_triggered();

    void on_pushButton_ImageFormTrans_clicked();

    void on_action_ZoomIn_triggered();

    void on_action_ZoomOut_triggered();

    void on_action_RotateLeft_triggered();

    void on_action_RotateRight_triggered();

    void on_action_FlipUD_triggered();

    void on_action_FlipLR_triggered();

    void on_pushButton_GenRgb565_clicked();

    void on_pushButton_SaveDateFile_clicked();

    void on_action_Preview_triggered();

    void on_action_Print_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
