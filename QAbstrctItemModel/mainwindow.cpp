#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_model = new QStandardItemModel(2,FixedColumnCount,this);
    m_selection = new QItemSelectionModel(m_model,this);
    //选择当前单元格变化时的信号与槽
    connect(m_selection,&QItemSelectionModel::currentChanged,this,&MainWindow::do_currentChanged);
    //为tableView设置数据模型和选择模型
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(m_selection);
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
   // setCentralWidget(ui->splitter);
    //设置自定义代理
    intSpinDelegate = new TSpinBoxDelegate(this);
    ui->tableView->setItemDelegateForColumn(0,intSpinDelegate);     //测深

    floatSpinDelegate = new TFloatSpinDelegate(this);
    ui->tableView->setItemDelegateForColumn(1,floatSpinDelegate);   //垂深
    ui->tableView->setItemDelegateForColumn(2,floatSpinDelegate);   //方位
    ui->tableView->setItemDelegateForColumn(3,floatSpinDelegate);   //总位移

    comboDelegate = new TComboBoxDelegate(this);
    QStringList strList;
    strList<<"优"<<"良"<<"一般"<<"不合格";
    comboDelegate->setItems(strList,false);
    ui->tableView->setItemDelegateForColumn(4,comboDelegate);
    //创建状态栏组件
    labCurFile = new QLabel("当前文件： ",this);
    labCurFile->setMinimumWidth(200);
    labCellPos = new QLabel("当前单元格: ",this);
    labCellPos->setMinimumWidth(180);
    labCellPos->setAlignment(Qt::AlignHCenter);
    labCellText = new QLabel("单元格内容: ",this);
    labCellText->setMinimumWidth(150);
    ui->statusbar->addWidget(labCurFile);
    ui->statusbar->addWidget(labCellPos);
    ui->statusbar->addWidget(labCellText);
}


void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous){
    Q_UNUSED(previous);
    if(current.isValid()){
        labCellPos->setText(QString::asprintf("当前单元格： %d 行，%d 列",current.row(),current.column()));
        QStandardItem   *aItem = m_model->itemFromIndex(current);
        //通过模型索引获得的QStandardItem对象指针
        labCellText->setText("单元格内容: " + aItem->text());
        QFont  font = aItem->font();
        ui->actionFontBold->setChecked(font.bold());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
    QString     curPath = QCoreApplication::applicationDirPath();     //获取应用程序路径
    QString     aFileName = QFileDialog::getOpenFileName(this,"打开一个文件",curPath,"数据文件(*.txt);;所有文件(*.*)");

    if(aFileName.isEmpty())return;
    QStringList aFileContent;        //用字符串列表读取文件内容
    QFile   aFile(aFileName);

    if(aFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream     aStream(&aFile);       //用文本流读取文件
        ui->plainTextEdit->clear();
        while(!aStream.atEnd()){
            QString     str = aStream.readLine();
            ui->plainTextEdit->appendPlainText(str);
            aFileContent.append(str);
        }
        aFile.close();
        labCurFile->setText("当前文件: " + aFileName);
        ui->actionAppend->setEnabled(true);
        ui->actionInsert->setEnabled(true);
        ui->actionDelete->setEnabled(true);
        ui->actionSave->setEnabled(true);
        iniModelData(aFileContent);      //用字符串列表内容初始化数据模型的数据
    }
}

void MainWindow::iniModelData(QStringList &aFileContent){
    int rowCnt = aFileContent.size();
    m_model->setRowCount(rowCnt - 1);
    QString  header = aFileContent.at(0);     //第一行为表头文字
    QStringList     headerList = header.split(QRegularExpression("\\s+"),Qt::SkipEmptyParts);
    m_model->setHorizontalHeaderLabels(headerList);

    //设置表格数据
    int j;
    QStandardItem   *aItem;
    for(int i = 1;i < rowCnt;i++){
        QString     aLineText = aFileContent.at(i);       //获取数据区一行
        //以一个或多个空格、制表符隔开的字符串，分割为一个StringList
        QStringList     tmpList = aLineText.split(QRegularExpression("\\s+"),Qt::SkipEmptyParts);
        for(j = 0;j < FixedColumnCount - 1;j++){
            //不包含最后一列
            aItem = new QStandardItem(tmpList.at(j));
            m_model->setItem(i - 1,j,aItem);
        }
        aItem = new QStandardItem(headerList.at(j));          //最后一行
        aItem->setCheckable(true);
        aItem->setBackground(QBrush(Qt::yellow));
        if(tmpList.at(j) == "0")aItem->setCheckState(Qt::Unchecked);
        else    aItem->setCheckState(Qt::Checked);
        m_model->setItem(i - 1,j,aItem);
    }
}


void MainWindow::on_actionAppend_triggered()
{
    //添加行 action
    QList<QStandardItem *>      aItemList;
    QStandardItem               *aItem;
    for(int i = 0;i < FixedColumnCount - 1;i++){
        aItem = new QStandardItem("0");
        aItemList<<aItem;
    }
    //获取最后一行的表头文字
    QString str = m_model->headerData(m_model->columnCount() - 1,Qt::Horizontal,Qt::DisplayRole).toString();
    aItem = new QStandardItem(str);
    aItem->setCheckable(true);
    aItemList<<aItem;

    m_model->insertRow(m_model->rowCount(),aItemList);                  //插入一行
    QModelIndex curIndex = m_model->index(m_model->rowCount() - 1,0);    //获取模型索引

    aItem->setBackground(QBrush(Qt::yellow));
    if(aItem->text() == "0")aItem->setCheckState(Qt::Unchecked);
    else    aItem->setCheckState(Qt::Checked);

    m_selection->clearSelection();
    m_selection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}


void MainWindow::on_actionInsert_triggered()
{
    //插入行 action
    QList<QStandardItem *>      aItemList;
    QStandardItem               *aItem;
    for(int i = 0;i < FixedColumnCount - 1;i++){
        aItem = new QStandardItem("0");
        aItemList<<aItem;
    }
    //获取最后一行的表头文字
    QString str = m_model->headerData(m_model->columnCount() - 1,Qt::Horizontal,Qt::DisplayRole).toString();
    aItem = new QStandardItem(str);
    aItem->setCheckable(true);
    aItemList<<aItem;

    QModelIndex curIndex = m_selection->currentIndex();    //获取模型索引
    m_model->insertRow(curIndex.row(),aItemList);                  //插入一行

    aItem->setBackground(QBrush(Qt::yellow));
    if(aItem->text() == "0")aItem->setCheckState(Qt::Unchecked);
    else    aItem->setCheckState(Qt::Checked);

    m_selection->clearSelection();
    m_selection->setCurrentIndex(curIndex,QItemSelectionModel::Select);

}


void MainWindow::on_actionDelete_triggered()
{
    //删除行
    QModelIndex     curIndex = m_selection->currentIndex();    //获取当前单元格的模型索引
    if(curIndex.row() == m_model->rowCount() - 1)m_model->removeRow(curIndex.row());
    else{
        m_model->removeRow(curIndex.row());
        m_selection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    }
}




void MainWindow::on_actionAlignLeft_triggered()
{
    //设置文字居左对齐
    if(!m_selection->hasSelection())return;
    //获取选择的单元格的模型索引列表，可以多选
    QModelIndexList     IndexList = m_selection->selectedIndexes();
    for(int i = 0;i < IndexList.count();i++){
        QModelIndex     aIndex = IndexList.at(i);
        QStandardItem   *aItem  = m_model->itemFromIndex(aIndex);  //获取一个单元格的项
        aItem->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    }
}


void MainWindow::on_actionAlignRight_triggered()
{
    //设置文字居右对齐
    if(!m_selection->hasSelection())return;
    //获取选择的单元格的模型索引列表，可以多选
    QModelIndexList     IndexList = m_selection->selectedIndexes();
    for(int i = 0;i < IndexList.count();i++){
        QModelIndex     aIndex = IndexList.at(i);
        QStandardItem   *aItem  = m_model->itemFromIndex(aIndex);  //获取一个单元格的项
        aItem->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
    }

}

void MainWindow::on_actionAlighCenter_triggered()
{
    //设置文字居中对齐
    if(!m_selection->hasSelection())return;
    //获取选择的单元格的模型索引列表，可以多选
    QModelIndexList     IndexList = m_selection->selectedIndexes();
    for(int i = 0;i < IndexList.count();i++){
        QModelIndex     aIndex = IndexList.at(i);
        QStandardItem   *aItem  = m_model->itemFromIndex(aIndex);  //获取一个单元格的项
        aItem->setTextAlignment(Qt::AlignCenter | Qt::AlignVCenter);
    }
}


void MainWindow::on_actionFontBold_triggered(bool checked)
{
    //设置字体为粗体
    if(!m_selection->hasSelection())return;
    //获取选择单元格的模型索引列表
    QModelIndexList     selectedIndex  = m_selection->selectedIndexes();
    for(int i = 0;i < selectedIndex.count();i++){
        QModelIndex     aIndex  =  selectedIndex.at(i);
        QStandardItem   *aItem  =  m_model->itemFromIndex(aIndex);
        QFont font = aItem->font();
        font.setBold(checked);
        aItem->setFont(font);
    }
}


void MainWindow::on_actionModelData_triggered()
{
    //模型数据导出到plainTextEdit中显示
    ui->plainTextEdit->clear();
    QStandardItem   *aItem;
    QString     str;
    //获取表头文字
    for(int i = 0;i < m_model->columnCount();i++){
        aItem = m_model->horizontalHeaderItem(i);
        str = str + aItem->text() + "\t";
    }
    ui->plainTextEdit->appendPlainText(str);
    //获取数据区的每行
    for(int i = 0;i < m_model->rowCount();i++){
        str = "";
        for(int j = 0;j < m_model->columnCount() - 1;j++){
            aItem  = m_model->item(i,j);
            str = str + aItem->text() + QString::asprintf("\t");
        }
        aItem = m_model->item(i,FixedColumnCount - 1);       //最后一列是逻辑型数据
        if(aItem->checkState() == Qt::Checked)str = str + "1";
        else    str += "0";
        ui->plainTextEdit->appendPlainText(str);
    }
}

