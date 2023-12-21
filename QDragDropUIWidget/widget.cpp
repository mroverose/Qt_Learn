#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //安装事件过滤器，由窗口处理4个项数据组件的事件
    ui->listWidget_ListSource->installEventFilter(this);
    ui->listWidget_ListWidget->installEventFilter(this);
    ui->treeWidget->installEventFilter(this);
    ui->tableWidget->installEventFilter(this);

    //设置4个项数据组件的拖放操作相关属性
    ui->listWidget_ListSource->setAcceptDrops(true);
    ui->listWidget_ListSource->setDragDropMode(QAbstractItemView::DragDrop);
    ui->listWidget_ListSource->setDragEnabled(true);
    ui->listWidget_ListSource->setDefaultDropAction(Qt::CopyAction);

    ui->listWidget_ListWidget->setAcceptDrops(true);
    ui->listWidget_ListWidget->setDragDropMode(QAbstractItemView::DragDrop);
    ui->listWidget_ListWidget->setDragEnabled(true);
    ui->listWidget_ListWidget->setDefaultDropAction(Qt::CopyAction);

    ui->treeWidget->setAcceptDrops(true);
    ui->treeWidget->setDragDropMode(QAbstractItemView::DragDrop);
    ui->treeWidget->setDragEnabled(true);
    ui->treeWidget->setDefaultDropAction(Qt::CopyAction);

    ui->tableWidget->setAcceptDrops(true);
    ui->tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
    ui->tableWidget->setDragEnabled(true);
    ui->tableWidget->setDefaultDropAction(Qt::MoveAction);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_radioButton_ListSource_clicked()
{
    //listSource单选按钮
    m_itemView = ui->listWidget_ListSource;
    refreshToUi(ui->groupBox);
}


void Widget::on_radioButton_ListWidget_clicked()
{
    //listWidget单选按钮
    m_itemView = ui->listWidget_ListWidget;
    refreshToUi(ui->groupBox_2);
}


void Widget::on_radioButton_TreeWidget_clicked()
{
    m_itemView = ui->treeWidget;
    refreshToUi(ui->groupBox_4);
}



void Widget::on_radioButton_TableWidget_clicked()
{
    m_itemView = ui->tableWidget;
    refreshToUi(ui->groupBox_5);
}

void Widget::refreshToUi(QGroupBox *curGroupBox){
    //组件的属性显示到界面上
    ui->checkBox_acceptDrop->setChecked(m_itemView->acceptDrops());
    ui->checkBox_dragEnable->setChecked(m_itemView->dragEnabled());
    ui->comboBox_DragDrop->setCurrentIndex((int)m_itemView->dragDropMode());
    int index = getDropActionIndex(m_itemView->defaultDropAction());
    ui->comboBox_MoveAction->setCurrentIndex(index);    //defaultDropAction下拉列表框

    QFont font = ui->groupBox->font();
    font.setBold(false);
    ui->groupBox->setFont(font);
    ui->groupBox_2->setFont(font);
    ui->groupBox_4->setFont(font);
    ui->groupBox_5->setFont(font);
    ui->groupBox_6->setFont(font);
    font.setBold(true);
    curGroupBox->setFont(font);      //为当前设置属性的组件所在分组框文字用粗体
}

int Widget::getDropActionIndex(Qt::DropAction actionType){
    //根据Qt::DropAction 的枚举值，获取下拉列表框中的索引
    switch(actionType){
        case  Qt::CopyAction:
                    return 0;
        case  Qt::MoveAction:
                    return 1;
        case  Qt::LinkAction:
                    return 2;
        case  Qt::IgnoreAction:
                    return 3;
        default:
                    return 0;
    }
}

void Widget::on_checkBox_acceptDrop_clicked(bool checked)
{
    //acceptDrops复选框
    m_itemView->setAcceptDrops(checked);
}


void Widget::on_checkBox_dragEnable_clicked(bool checked)
{
    //dragEnabled 复选框
    m_itemView->setDragEnabled(checked);
}




void Widget::on_comboBox_DragDrop_currentIndexChanged(int index)
{
    //dragDropMode 下拉列表框
    QAbstractItemView::DragDropMode   mode = (QAbstractItemView::DragDropMode)index;
    m_itemView->setDragDropMode(mode);
}




void Widget::on_comboBox_MoveAction_currentIndexChanged(int index)
{
    //defaultDropAction 下拉列表
    Qt::DropAction   actionType = getDropActionType(index);
    m_itemView->setDefaultDropAction(actionType);
}

Qt::DropAction  Widget::getDropActionType(int index){
    //根据下拉列表框的索引，返回Qt::DropAction类型的枚举值
    switch(index){
    case 0:
                    return Qt::CopyAction;
    case 1:
                    return Qt::MoveAction;
    case 2:
                    return Qt::LinkAction;
    case 3:
                    return Qt::IgnoreAction;
    default:
                    return Qt::CopyAction;
    }
}

bool Widget::eventFilter(QObject *watched, QEvent *event){
    if(event->type() != QEvent::KeyPress)
                    return  QWidget::eventFilter(watched,event);
    QKeyEvent   *keyEvent  =  static_cast<QKeyEvent *>(event);
    if(keyEvent->key()  != Qt::Key_Delete)        //按下的是Delete键，退出
                    return QWidget::eventFilter(watched,event);
    if(watched == ui->listWidget_ListSource){
                    QListWidgetItem   *item = ui->listWidget_ListSource->takeItem(ui->listWidget_ListSource->currentRow());
                    delete   item;
    }
    else if(watched  == ui->listWidget_ListWidget){
                    QListWidgetItem  *item = ui->listWidget_ListWidget->takeItem(ui->listWidget_ListWidget->currentRow());
                    delete item;
    }
    else if(watched == ui->treeWidget){
                    QTreeWidgetItem   *curItem = ui->treeWidget->currentItem();
                    if(curItem->parent() != nullptr){
                        QTreeWidgetItem   *parItem = curItem->parent();
                        parItem->removeChild(curItem);
                    }
                    else{
                        int index = ui->treeWidget->indexOfTopLevelItem(curItem);
                        ui->treeWidget->takeTopLevelItem(index);
                    }
                    delete curItem;
    }
    else if(watched == ui->tableWidget){
                    QTableWidgetItem   *item = ui->tableWidget->takeItem(ui->tableWidget->currentRow(),ui->tableWidget->currentColumn());
                    delete item;
    }
    return true;       //表示事件已经被处理
}
