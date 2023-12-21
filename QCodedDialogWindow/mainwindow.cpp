#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCloseEvent>
#include "tdialogsize.h"
#include <QStringList>
#include "tdialoglocate.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dlgSetHeaders = nullptr;
    m_model = new QStandardItemModel(6,4,this);
    QStringList header;
    header<<"姓名"<<"性别"<<"学位"<<"部门";
    m_model->setHorizontalHeaderLabels(header);                //设置表头标题
    m_Selection = new QItemSelectionModel(m_model);            //创建选择模型
    connect(m_Selection,&QItemSelectionModel::currentChanged,this,&MainWindow::do_model_currentChanged);

    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(m_Selection);
    setCentralWidget(ui->tableView);
    //创建状态栏组件
    labCellPos = new QLabel("当前单元格",this);
    labCellPos->setMinimumWidth(180);
    labCellPos->setAlignment(Qt::AlignHCenter);
    ui->statusbar->addWidget(labCellPos);
    labCellText = new QLabel("单元格内容",this);
    labCellText->setMinimumWidth(200);
    ui->statusbar->addWidget(labCellText);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::do_model_currentChanged(const QModelIndex &current, const QModelIndex &previous){
    Q_UNUSED(previous);
    if(current.isValid()){
        labCellPos->setText(QString::asprintf("当前单元格：%d行，%d列",current.row(),current.column()));     //显示模型索引的行号和列号
        QStandardItem  *aItem;
        aItem = m_model->itemFromIndex(current);           //从模型索引获得Item
        this->labCellText->setText("单元格内容：" + aItem->text());           //显示Itmer的文字内容
    }
}

void MainWindow::do_setCellText(int row, int column, QString &text)
{
    //定位到单元格，并设置文字
    QModelIndex  index = m_model->index(row,column);   //获取模型索引
    m_Selection->clearSelection();
    m_Selection->setCurrentIndex(index,QItemSelectionModel::Select);  //定位到单元格
    m_model->setData(index,text,Qt::DisplayRole);          //设置单元格文字
}


void MainWindow::closeEvent(QCloseEvent *event){
    //窗口关闭时询问是否退出
    QMessageBox::StandardButton result;
    result = QMessageBox::question(this,"确认","确定要退出本程序吗？");
    if(result == QMessageBox::Yes)event->accept();
    else  event->ignore();
}
void MainWindow::on_action_SetRowAndCol_triggered()
{
    //动态创建，以模态方式显示，用后删除
    TDialogSize    *dlgTableSize = new TDialogSize(this);
    dlgTableSize->setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);          //固定大小
    dlgTableSize->setRowColumn(m_model->rowCount(),m_model->columnCount());
    int ret = dlgTableSize->exec();          //以模态方式显示对话框
    if(ret == QDialog::Accepted){
        int cols = dlgTableSize->columnCount();
        m_model->setColumnCount(cols);
        int rows = dlgTableSize->rowCount();
        m_model->setRowCount(rows);
    }
    delete dlgTableSize;      //删除对话框
}




void MainWindow::on_action_SetTableHeader_triggered()
{
    //创建一次，多次调用，对话框关闭时只是隐藏
    if(dlgSetHeaders == nullptr)        //如果对象没有被创建，就创建对象
        dlgSetHeaders = new TDialogHeaders(this);
    if(dlgSetHeaders->headerList().size() != m_model->columnCount()){
        //只需在创建时传递参数给对话框，由于对话框只是隐藏，界面内容保存
        QStringList strList;
        for(int i = 0;i < m_model->columnCount();i++){
            strList.append(m_model->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString());
            dlgSetHeaders->setHeaderList(strList);
    }
    int ret = dlgSetHeaders->exec();          //以模态方式显示对话框
    if(ret == QDialog::Accepted){
            QStringList strList = dlgSetHeaders->headerList();   //获取修改后的字符串列表
            m_model->setHorizontalHeaderLabels(strList);           //设置模型的表头标题
        }
}
}




void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    emit cellIndexChanged(index.row(),index.column());
}


void MainWindow::on_action_LocateCell_triggered()
{
    TDialogLocate *dlgLocate = new TDialogLocate(this);
    dlgLocate->setAttribute(Qt::WA_DeleteOnClose);          //对话框关闭时自动删除
    dlgLocate->setWindowFlag(Qt::WindowStaysOnTopHint);     //设置对话框特性StayOnTop
    dlgLocate->setSpinRange(m_model->rowCount(),m_model->columnCount());
    QModelIndex  curIndex = m_Selection->currentIndex();
    if(curIndex.isValid())dlgLocate->setSpinValue(curIndex.row(),curIndex.column());
    //对话框发射changeCellText()信号，用于定位单元格并设置文字
    connect(dlgLocate,&TDialogLocate::changeCellText,this,&MainWindow::do_setCellText);
    //对话框发射changeActionEnable()信号，用于设置action的enabled属性

    //connect(dlgLocate,&TDialogLocate::changeActionEnable,ui->action_LocateCell,&QAction::setEnabled);
    connect(dlgLocate,SIGNAL(changeActionEnable(bool)),ui->action_LocateCell,SLOT(setEnabled(bool)));
    //主窗口发射cellIndexChanged()信号，用于修改对话框上的spinBox值
    connect(this,&MainWindow::cellIndexChanged,dlgLocate,&TDialogLocate::setSpinValue);
    dlgLocate->setModal(false);
    dlgLocate->show();               //以非模态方式显示对话框
}

