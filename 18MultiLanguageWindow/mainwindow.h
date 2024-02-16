#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSpinBox>
#include <QFontComboBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel  *labFile;
    QLabel  *labInfo;           //状态栏LABLE
    QProgressBar    *progressbar1;
    QSpinBox    *spinFontSize;
    QFontComboBox   *comboFontName;
    QActionGroup    *actionGroup;    //Action分组，用于“汉语”和“ENGLISH”两个工具按钮的互斥选择
    void    buildUI();    //以代码化方式创建UI
    void    buildSignalSlots();      //关联信号与槽
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void do_fontSize_changed(int fontsize);     //改变字体大小的SpinBox的响应
    void do_fontSelected(const QFont &font);    //选择字体的FontComboBox的响应
    void on_actionFont_Bold_triggered(bool checked);
    void on_actionFont_Italic_triggered(bool checked);
    void on_actionFont_Underline_triggered(bool checked);
    void on_actionFile_Save_triggered();
    void on_actionSys_ToggleText_triggered(bool checked);
    void on_plainTextEdit_copyAvailable(bool b);
    void on_plainTextEdit_selectionChanged();
    void on_actionLang_CN_triggered();
    void on_actionLang_EN_triggered();
};
#endif // MAINWINDOW_H
