#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //  setCentralWidget(ui->splitter);    //设置中心组件
    ui->listWidget->setContextMenuPolicy(Qt::CustomContextMenu);   //定制快捷菜单
    setActionsForButton();
    createSelectonMenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setActionsForButton(){
    //为各个Qtoolbutton类按钮设置Action
    ui->toolButton_Listini->setDefaultAction(ui->actionList_Ini);
    ui->toolButton_ListClear->setDefaultAction(ui->actionList_Clear);
    ui->toolButton_ListAppend->setDefaultAction(ui->actionList_Append);
    ui->toolButton_ListDelete->setDefaultAction(ui->actionList_Delete);
    ui->toolButton_ListInsert->setDefaultAction(ui->actionList_Insert);
    ui->toolButton_SeletcAll->setDefaultAction(ui->actionList_SletectAll);
    ui->toolButton_SelectNone->setDefaultAction(ui->actionList_SelectNone);
    ui->toolButton_SelectReverse->setDefaultAction(ui->actionList_SelectReverse);
}

void  MainWindow::createSelectonMenu(){
    //创建下拉菜单
      QMenu  *menuSelection = new QMenu(this);
        menuSelection->addAction(ui->actionList_SletectAll);
        menuSelection->addAction(ui->actionList_SelectNone);
        menuSelection->addAction(ui->actionList_SelectReverse);
    //listWidget上方的“项选择”按钮
      ui->toolButton_SelectItem->setPopupMode(QToolButton::MenuButtonPopup);
      ui->toolButton_SelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
      ui->toolButton_SelectItem->setDefaultAction(ui->actionSelectPopMenu);
      ui->toolButton_SelectItem->setMenu(menuSelection);
     //工具栏的“项选择”按钮，具有下拉菜单
      QToolButton  *aBtn = new QToolButton(this);
      aBtn->setPopupMode(QToolButton::InstantPopup);
      aBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
      aBtn->setDefaultAction(ui->actionSelectPopMenu);
      aBtn->setMenu(menuSelection);
      ui->toolBar->addWidget(aBtn);
      //在工具栏添加分隔条和“退出”按钮
      ui->toolBar->addSeparator();
      ui->toolBar->addAction(ui->actionQuit);
}


void MainWindow::on_actionList_Ini_triggered()
{
    //初始化列表
      QListWidgetItem  *aItem;
      QIcon aIcon;
      aIcon.addFile(":favicon.ico");
      bool chk = ui->checkBox_Item->isChecked();
      ui->listWidget->clear();

      for(int i = 0;i < 10;i++){
          QString str = QString("Item %1").arg(i);
          aItem = new QListWidgetItem();
          aItem->setText(str);
          aItem->setIcon(aIcon);
          aItem->setCheckState(Qt::Checked);
          if(chk)aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |
                                  Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
          else aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable |
                                  Qt::ItemIsEnabled);
          ui->listWidget->addItem(aItem);
      }
}


void MainWindow::on_actionList_Clear_triggered()
{
    //清除列表
      ui->listWidget->clear();
}


void MainWindow::on_actionList_Insert_triggered()
{
    //“插入项”Action
      QIcon  aIcon(":favicon.ico");
      bool chk = ui->checkBox_Item->isChecked();
      QListWidgetItem *aItem = new QListWidgetItem("Inserted Item");
      aItem->setIcon(aIcon);
      aItem->setCheckState(Qt::Checked);
      if(chk)aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |
                          Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
      else aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable |
                          Qt::ItemIsEnabled);
      ui->listWidget->insertItem(ui->listWidget->currentRow(),aItem);
}


void MainWindow::on_actionList_Append_triggered()
{
    //“添加项”Action
      QIcon  aIcon(":favicon.ico");
      bool chk = ui->checkBox_Item->isChecked();
      QListWidgetItem *aItem = new QListWidgetItem("Added Item");
      aItem->setIcon(aIcon);
      aItem->setCheckState(Qt::Checked);
      if(chk)aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |
                          Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
      else aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable |
                          Qt::ItemIsEnabled);
      ui->listWidget->addItem(aItem);
}


void MainWindow::on_actionList_Delete_triggered()
{
    //“删除当前项”Action
      int row = ui->listWidget->currentRow();
      QListWidgetItem *aItem = ui->listWidget->takeItem(row);
      delete aItem;       //需要手动删除对象
}


void MainWindow::on_actionList_SelectReverse_triggered()
{
    //“返选”Action
      QListWidgetItem *aItem;
      int cnt = ui->listWidget->count();
      for(int i = 0;i < cnt;i++){
          aItem = ui->listWidget->item(i);
          if(aItem->checkState() != Qt::Checked)aItem->setCheckState(Qt::Checked);
          else aItem->setCheckState(Qt::Unchecked);
      }
}


void MainWindow::on_actionList_SelectNone_triggered()
{
    //“全不选”Action
      QListWidgetItem *aItem;
      int cnt = ui->listWidget->count();
      for(int i = 0;i < cnt;i++){
          aItem = ui->listWidget->item(i);
          if(aItem->checkState() == Qt::Checked)aItem->setCheckState(Qt::Unchecked);
      }
}


void MainWindow::on_actionList_SletectAll_triggered()
{
    //“全选”Action
      QListWidgetItem *aItem;
      int cnt = ui->listWidget->count();
      for(int i = 0;i < cnt;i++){
          aItem = ui->listWidget->item(i);
          if(aItem->checkState() == Qt::Unchecked)aItem->setCheckState(Qt::Checked);
      }
}


void MainWindow::on_toolButton_ListSortUporder_clicked()
{
    //升序排序
      ui->listWidget->sortItems(Qt::AscendingOrder);
}


void MainWindow::on_toolButton_ListSortDownorder_clicked()
{
    //降序排序
      ui->listWidget->sortItems(Qt::DescendingOrder);
}


void MainWindow::on_checkBox_ListSort_clicked(bool checked)
{
      ui->listWidget->setSortingEnabled(checked);
}


void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    //listWidget的currentItemChanged()信号的槽函数
      QString str;
      if(current != nullptr){
          if(previous == nullptr)str = "当前：" + current->text();
          else str = "前一项： " + previous->text() + "；＋当前项：" + current->text();
          ui->lineEdit->setText(str);
      }
      ui->plainTextEdit->appendPlainText("currentItemChanged()信号被发射");
}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    //currentRowChanged()信号
      ui->plainTextEdit->appendPlainText(
          QString("currentRowChanged()信号被发射，currentRow = %1").arg(currentRow));
}


void MainWindow::on_listWidget_currentTextChanged(const QString &currentText)
{
    //currentTextChanged()信号
      ui->plainTextEdit->appendPlainText(
          "currentTextChanged()信号被发射,currentText = "+ currentText);
}


void MainWindow::on_listWidget_itemChanged(QListWidgetItem *item)
{
    //itemChanged信号
      ui->plainTextEdit->appendPlainText(
          "currentItemChanged()信号被发射" + item->text());
}


void MainWindow::on_listWidget_itemSelectionChanged()
{
    //itemSelectionChanged()信号
      ui->plainTextEdit->appendPlainText(
          "itemSelectionChanged()信号被发射");
}


void MainWindow::on_listWidget_itemPressed(QListWidgetItem *item)
{
    //itemPressed()信号
      ui->plainTextEdit->appendPlainText(
          "itemPressed()信号被发射" + item->text());
}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    //itemClicked()信号
      ui->plainTextEdit->appendPlainText(
          "itemClicked()信号被发射" + item->text());
}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    //itemDoubleClicked()信号
      ui->plainTextEdit->appendPlainText(
          "itemDoubleClicked()信号被发射" + item->text());
}


void MainWindow::on_listWidget_itemActivated(QListWidgetItem *item)
{
    //itemActivated()信号
      ui->plainTextEdit->appendPlainText(
          "itemActived()信号被发射" + item->text());
}


void MainWindow::on_listWidget_itemEntered(QListWidgetItem *item)
{
    //itemEntered()信号
      ui->plainTextEdit->appendPlainText(
          "itemEntered()信号被发射" + item->text());
}


void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
      Q_UNUSED(pos);
      QMenu *menuList = new QMenu(this);
      //添加Action将其作为菜单项
      menuList->addAction(ui->actionList_Ini);
      menuList->addAction(ui->actionList_Clear);
      menuList->addAction(ui->actionList_Delete);
      menuList->addAction(ui->actionList_Insert);
      menuList->addAction(ui->actionList_Append);
      menuList->addSeparator();
      menuList->addAction(ui->actionList_SletectAll);
      menuList->addAction(ui->actionList_SelectNone);
      menuList->addAction(ui->actionList_SelectReverse);

      menuList->exec(QCursor::pos());      //在光标位置显示快捷菜单
      delete menuList;               //菜单显示完需要删除对象
}


void MainWindow::on_pushButton_TextClear_clicked()
{
      ui->plainTextEdit->clear();
}


void MainWindow::on_pushButton_TextAddLine_clicked()
{
      ui->plainTextEdit->appendPlainText("");
}


void MainWindow::on_actionSelectPopMenu_triggered()
{

}

