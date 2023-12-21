#include "tformtable.h"
#include "ui_tformtable.h"
#include "tdialogsize.h"


TFormTable::TFormTable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TFormTable)
{
    ui->setupUi(this);
    m_model = new QStandardItemModel(12,6,this);
    m_selection = new QItemSelectionModel(m_model,this);
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(m_selection);
}

TFormTable::~TFormTable()
{
    delete ui;
}

void TFormTable::on_action_TableSize_triggered()
{
    //定义表格大小
    TDialogSize  *dlgTableSize = new TDialogSize(this);
    dlgTableSize->setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);
    dlgTableSize->setRowColumn(m_model->rowCount(),m_model->columnCount());
    int ret = dlgTableSize->exec();          //以模态方式显示对话框
    if(ret == QDialog::Accepted){
        int cols = dlgTableSize->columnCount();
        m_model->setColumnCount(cols);
        int rows = dlgTableSize->rowCount();
        m_model->setRowCount(rows);
    }
    delete dlgTableSize;          //删除对话框
}


void TFormTable::on_action_TableHeader_triggered()
{
    //设置表头按钮
    if(dlgSetHeader == nullptr)dlgSetHeader = new TDialogHeaders(this);
    if(dlgSetHeader->headerList().count() != m_model->columnCount()){
        QStringList strList;
        for(int i = 0;i < m_model->columnCount();i++){
            strList.append(m_model->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString());     //获取现有表头标题
            dlgSetHeader->setHeaderList(strList);                    //用于对话框初始化显示
        }
        int ret = dlgSetHeader->exec();        //以模态方式显示对话框
        if(ret == QDialog::Accepted){
            QStringList strList = dlgSetHeader->headerList();
            m_model->setHorizontalHeaderLabels(strList);
        }
    }
}

