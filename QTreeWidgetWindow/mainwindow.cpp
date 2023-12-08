#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建状态栏上的组件
    labNodeText = new QLabel("节点标题",this);
    labNodeText->setMinimumWidth(200);
    ui->statusbar->addWidget(labNodeText);

    spinRatio = new QSpinBox(this);
    spinRatio->setRange(0,2000);
    spinRatio->setValue(100);
    spinRatio->setSuffix(" % ");
    spinRatio->setReadOnly(true);
    spinRatio->setButtonSymbols(QAbstractSpinBox::NoButtons); //不显示右侧调节按钮
    ui->statusbar->addPermanentWidget(spinRatio);
    labFileName = new QLabel("文件名",this);
    ui->statusbar->addPermanentWidget(labFileName);

    //初始化目录树
    buildTreeHeader();
    iniTree();
    setCentralWidget(ui->scrollArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buildTreeHeader(){
    //重新构建treeFiles的表头
    ui->treeWidget->clear();
    QTreeWidgetItem   *header = new QTreeWidgetItem();
    header->setText(MainWindow::colItem,    "目录和文件");
    header->setText(MainWindow::colItemType,"节点类型");
    header->setText(MainWindow::colDate,    "最后修改日期");
    header->setTextAlignment(colItem,Qt::AlignHCenter | Qt::AlignVCenter);
    header->setTextAlignment(colItemType,Qt::AlignHCenter | Qt::AlignVCenter);
    ui->treeWidget->setHeaderItem(header);
}


void MainWindow::iniTree(){
    //初始化目录树，创建一个顶层节点
    QIcon   icon(":favicon");
    QTreeWidgetItem   *item = new QTreeWidgetItem(MainWindow::itTopItem);
    item->setIcon(MainWindow::colItem,icon);
    item->setText(MainWindow::colItem,"图片");
    item->setText(MainWindow::colItemType,"Top Item");
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(MainWindow::colItem,Qt::Checked);
    ui->treeWidget->addTopLevelItem(item);
}

void MainWindow::on_treeWidget_itemChanged(QTreeWidgetItem *item, int column)
{
    Q_UNUSED(item);
    Q_UNUSED(column);
    qDebug("itemChanged() is emitted");
}


void MainWindow::on_treeWidget_itemSelectionChanged()
{
    qDebug("itemSelectionChanged() is emitted");
}


void MainWindow::on_actionAddFolder_triggered()
{
    //"添加目录"action
    QString  dir = QFileDialog::getExistingDirectory();
    if(dir.isEmpty())return;
    QTreeWidgetItem *parItem = ui->treeWidget->currentItem();
    if(parItem == nullptr)return;
    if(parItem->type() != itImageItem)addFolderItem(parItem,dir);
}


void MainWindow::addFolderItem(QTreeWidgetItem *parItem, QString dirName){
    //添加一个分组结点
    QIcon     icon(":faviocon");
    QString  NodeText = getFinalFolderName(dirName);       //获取最后的文件夹名称
    QTreeWidgetItem   *item = new QTreeWidgetItem(MainWindow::itGroupItem);
    item->setText(colItem,NodeText);   //设置第一列文字                        //设置图标
    item->setIcon(colItem,icon);
    item->setText(colItemType,"Group Item");      //设置第二列文字
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                   | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem,Qt::Checked);
    item->setData(colItem,Qt::UserRole,QVariant(dirName));   //设置用户数据，存储完整目录名称
    parItem->addChild(item);            //添加到父节点下面
}

QString MainWindow::getFinalFolderName(const QString &fullPathName){
    //从一个完整目录名称里获取最后的文件夹名称
    int cnt = fullPathName.length();               //字符串长度
    int i = fullPathName.lastIndexOf("/");          //最后一次出现的位置
    QString str = fullPathName.right(cnt - i - 1);      //获取最后的文件夹名称
    return str;
}



void MainWindow::on_actionAddFiles_triggered()
{
    //添加文件  Action，添加图片节点
    QStringList files = QFileDialog::getOpenFileNames(this,"选择文件","","Images(*.jpg)");
    if(files.isEmpty())return;
    QTreeWidgetItem *parItem,*item;
    item = ui->treeWidget->currentItem();
    if(item == nullptr)item = ui->treeWidget->topLevelItem(0);  //如果未选择现有节点 则取顶层节点
    if(item->type() == itImageItem)parItem = item->parent();    //如果当前节点是图片节点，取其父节点作为添加图片的父节点
    else parItem = item;
    for(int i = 0;i < files.size();++i){
        QString aFilename = files.at(i);   //获取一个文件名
        addImageItem(parItem,aFilename);    //添加一个图片节点
    }
    parItem->setExpanded(true);             //展开父节点
}

void MainWindow::addImageItem(QTreeWidgetItem *parItem, QString aFileName){
    //添加一个图片节点
    QIcon   icon(":favicon");
    QFileInfo   fileInfo(aFileName);
    QString  NodeText = fileInfo.fileName();
    QDateTime   birthDate = fileInfo.lastModified();

    QTreeWidgetItem   *item;
    item = new QTreeWidgetItem(MainWindow::itImageItem);
    item->setIcon(colItem,icon);
    item->setText(colItem,NodeText);
    item->setText(colItemType,"Image Item");
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                   | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem,Qt::Checked);
    item->setData(colItem,Qt::UserRole,QVariant(aFileName));   //设置用户数据，存储完整文件名
    parItem->addChild(item);
}

void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    Q_UNUSED(previous);
    qDebug("currentItemChanged() is emitted");
    if(current == nullptr)return;
    if(current == previous)return;      //没有切换节点，只是列变化
    int var = current->type();
    switch(var){
    case    itTopItem:
                    ui->actionAddFolder->setEnabled(true);
                    ui->actionAddFiles->setEnabled(true);
                    ui->actionDeleteItem->setEnabled(false);   //不允许删除顶层节点
                    break;
    case    itGroupItem:
                    ui->actionAddFolder->setEnabled(true);
                    ui->actionAddFiles->setEnabled(true);
                    ui->actionDeleteItem->setEnabled(true);
                    break;
    case    itImageItem:
                    ui->actionAddFolder->setEnabled(false);     //图片节点下不能添加目录节点
                    ui->actionAddFiles->setEnabled(true);
                    ui->actionDeleteItem->setEnabled(true);
                    displayImage(current);
    }
}


void MainWindow::on_actionDeleteItem_triggered()
{
    QTreeWidgetItem   *item = ui->treeWidget->currentItem();
    if(item == nullptr)return;
    QTreeWidgetItem  *parItem = item->parent();
    deleteItem(parItem,item);
}

void  MainWindow::deleteItem(QTreeWidgetItem *parItem, QTreeWidgetItem *item){
    //彻底删除一个节点及其子节点面递归调用的函数
    if(item->childCount() > 0){
                    int count = item->childCount();               //子节点个数
                    QTreeWidgetItem  *tempParItem = item;           //临时父节点
                    for(int i = count - 1;i >= 0;i--)deleteItem(tempParItem,tempParItem->child(i));  //递归调用
    }
    parItem->removeChild(item); //删除完子节点后，再删除自己
    delete item;
}

void MainWindow::on_actionScanItems_triggered()
{
    //遍历节点
    for(int i = 0;i < ui->treeWidget->topLevelItemCount();i++){
                    QTreeWidgetItem  *item = ui->treeWidget->topLevelItem(i);
                    changeItemCaption(item);
    }
}

void MainWindow::changeItemCaption(QTreeWidgetItem *item){
    //改变节点的标题
    QString  str = "*" + item->text(colItem);
    item->setText(colItem,str);
    if(item->childCount() > 0){
                    for(int i = 0;i < item->childCount();i++){
                        changeItemCaption(item->child(i));
                    }
    }
}

void MainWindow::displayImage(QTreeWidgetItem *item){
    QString filename = item->data(colItem,Qt::UserRole).toString();
    labFileName->setText(filename);
    labNodeText->setText(item->text(colItem));
    m_pixmap.load(filename);
    ui->actionZoomFitHeight->trigger();
    ui->actionZoomFitHeight->setEnabled(true);
    ui->actionZoomFitWidth->setEnabled(true);
    ui->actionZoomIn->setEnabled(true);
    ui->actionZoomOut->setEnabled(true);
    ui->actionZoomRealSize->setEnabled(true);

}


void MainWindow::on_actionZoomFitHeight_triggered()
{
    //以适合的高度显示图片
    int H = ui->scrollArea->height();
    int realH = m_pixmap.height();
    m_ratio = float(H) / realH;
    spinRatio->setValue(100 * m_ratio);
    QPixmap     pix = m_pixmap.scaledToHeight(H - 30);
    ui->label->setPixmap(pix);
}



void MainWindow::on_actionZoomOut_triggered()
{
    //缩小显示
    m_ratio = m_ratio * 0.6;
    spinRatio->setValue(100 * m_ratio);
    int w = m_ratio * m_pixmap.width();
    int h = m_ratio * m_pixmap.height();
    QPixmap  pix = m_pixmap.scaled(w,h);
    ui->label->setPixmap(pix);
}


void MainWindow::on_actionZoomIn_triggered()
{
    //放大显示
    m_ratio = m_ratio * 1.2;
    spinRatio->setValue(100 * m_ratio);
    int w = m_ratio * m_pixmap.width();
    int h = m_ratio * m_pixmap.height();
    QPixmap  pix = m_pixmap.scaled(w,h);
    ui->label->setPixmap(pix);
}


void MainWindow::on_actionZoomRealSize_triggered()
{
    //以实际大小显示
    m_ratio = 1;
    spinRatio->setValue(100);
    ui->label->setPixmap(m_pixmap);
}


void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    //停靠区visibel属性值变化
    ui->actionDockVisible->setChecked(visible);
}


void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{
    //停靠区floating属性值变化
    ui->actionDockFloat->setChecked(topLevel);
}


void MainWindow::on_actionDockFloat_triggered(bool checked)
{
    //“窗口浮动"按钮
    ui->dockWidget->setFloating(checked);
}


void MainWindow::on_actionDockVisible_triggered(bool checked)
{
    //“窗口可见”按钮
    ui->dockWidget->setVisible(checked);
}




