#ifndef TDIALOGDATA_H
#define TDIALOGDATA_H

#include <QDialog>
#include <QSqlRecord>

namespace Ui {
class TDialogData;
}

class TDialogData : public QDialog
{
    Q_OBJECT
private:
    QSqlRecord   m_recored;             //保存一条记录的数据
public:
    explicit TDialogData(QWidget *parent = nullptr);
    ~TDialogData();
    void  setUpdateRecord(QSqlRecord  &recData);         //更新记录
    void  setInsertRecord(QSqlRecord  &recData);         //插入记录
    QSqlRecord   getRecordData();                        //获取界面输入的数据

private slots:
   // void on_btnClearPhoto_clicked();                    //清除照片
    //void on_btnSetPhoto_clicked();                      //导入照片
    void on_pushButton_ClearPhoto_clicked();

    void on_pushButton_SetPhoto_clicked();

private:
    Ui::TDialogData *ui;
};

#endif // TDIALOGDATA_H
