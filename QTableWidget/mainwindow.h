#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
        //单元格的类行，在创建单元格时用于设置type
    enum    CellType{ctName = 1000,ctSex,ctBirth,ctNation,ctPartyM,ctScore};
        //各字段在表格中的列号
    enum    FieldColNum{colName = 0,colSex,colBirth,colNation,colScore,colPartyM};
    QLabel  *labCellIndex;
    QLabel  *labCellType;                        //状态栏上用于显示单元格的type
    QLabel  *labStudID;                         //状态栏上用天显示单元格的data
    void  createItemsARow(int rowNum,QString name,QString sex,QDate birth,
                           QString nation,bool isPM,int score);               //为某一行创建items
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_SetTableHeader_clicked();

    void on_pushButton_SetTableIni_clicked();

    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_pushButton_SetTableInsertCol_clicked();

    void on_pushButton_SetTableAddCol_clicked();

    void on_pushButton_SetTableDelCol_clicked();

    void on_pushButton_SetTableHeight_clicked();

    void on_pushButton_SetTableWidth_clicked();

    void on_checkBox_TabelEditabel_clicked(bool checked);

    void on_checkBox_TableShowHeader_clicked(bool checked);

    void on_checkBox_TableShowCol_clicked(bool checked);

    void on_checkBox_TableColBkColor_clicked(bool checked);

    void on_radioButton_TableColSelect_clicked();

    void on_radioButton_TableTdSelect_clicked();

    void on_pushButton_SetTableContentToText_clicked();

    void on_pushButton_SetTableCol_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
