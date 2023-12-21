#ifndef TFORMTABLE_H
#define TFORMTABLE_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "tdialogheaders.h"

namespace Ui {
class TFormTable;
}

class TFormTable : public QMainWindow
{
    Q_OBJECT
private:
    TDialogHeaders * dlgSetHeader = nullptr;      //设置表头对话框
    QStandardItemModel  *m_model;                  //数据模型
    QItemSelectionModel  *m_selection;           //选择模型
public:
    explicit TFormTable(QWidget *parent = nullptr);
    ~TFormTable();

private slots:
    void on_action_TableSize_triggered();

    void on_action_TableHeader_triggered();

private:
    Ui::TFormTable *ui;
};

#endif // TFORMTABLE_H
