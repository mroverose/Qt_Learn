#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tformdoc.h"
#include <QDir>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mdiArea->setTabsClosable(true);    //页面可关闭
    ui->mdiArea->setTabsMovable(true);     //页面可移动
    setCentralWidget(ui->mdiArea);
    setWindowState(Qt::WindowMaximized);      //最大化
    ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_DocNew_triggered()
{
    TFormDoc  *formDoc = new TFormDoc(this);
    ui->mdiArea->addSubWindow(formDoc);          //文档窗口添加到MDI子窗口管理器中
    formDoc->show();
    ui->action_Cut->setEnabled(true);
    ui->action_Copy->setEnabled(true);
    ui->action_Paste->setEnabled(true);
    ui->action_Font->setEnabled(true);
}


void MainWindow::on_action_DocOpen_triggered()
{
    bool needNew = false;                 //是否需要新建子窗口
    TFormDoc   *formDoc;
    if(ui->mdiArea->subWindowList().size() > 0){
        formDoc = (TFormDoc*)ui->mdiArea->activeSubWindow()->widget();
        needNew = formDoc->isFileOpened();      //子窗口已打开文件，需要新建子窗口
    }
    else  needNew = true;
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this,tr("打开一个文件"),curPath,"C程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty())return;
    if(needNew){
        formDoc = new TFormDoc(this);
        ui->mdiArea->addSubWindow(formDoc);
    }
    formDoc->loadFromFile(aFileName);
    formDoc->show();
    ui->action_Cut->setEnabled(true);
    ui->action_Paste->setEnabled(true);
    ui->action_Copy->setEnabled(true);
    ui->action_Font->setEnabled(true);
}


void MainWindow::on_action_CloseAll_triggered()
{
    //关闭全部
    ui->mdiArea->closeAllSubWindows();
}


void MainWindow::on_action_Cascase_triggered()
{
    //级联展开
    ui->mdiArea->cascadeSubWindows();
}


void MainWindow::on_action_Tile_triggered()
{
    //平铺展开
    ui->mdiArea->tileSubWindows();
}


void MainWindow::on_action_MDI_triggered(bool checked)
{
    //MDI模式
    if(checked)ui->mdiArea->setViewMode(QMdiArea::TabbedView);
    else  ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
    ui->mdiArea->setTabsClosable(checked);
    ui->action_Cascase->setEnabled(!checked);      //子窗口模式下才有用
    ui->action_Tile->setEnabled(!checked);
}


void MainWindow::on_action_DocSave_triggered()
{
    //保存
    TFormDoc *formDoc = (TFormDoc *)ui->mdiArea->activeSubWindow()->widget();
    formDoc->saveToFile();
}


void MainWindow::on_action_Cut_triggered()
{
    TFormDoc *formDoc = (TFormDoc *)ui->mdiArea->activeSubWindow()->widget();
    formDoc->textCut();
}


void MainWindow::on_action_Copy_triggered()
{
    TFormDoc *formDoc = (TFormDoc *)ui->mdiArea->activeSubWindow()->widget();
    formDoc->textCopy();
}


void MainWindow::on_action_Paste_triggered()
{
    TFormDoc *formDoc = (TFormDoc *)ui->mdiArea->activeSubWindow()->widget();
    formDoc->textPaste();
}


void MainWindow::on_action_Font_triggered()
{
    TFormDoc *formDoc = (TFormDoc *)ui->mdiArea->activeSubWindow()->widget();
    formDoc->setEditFont();
}


void MainWindow::on_mdiArea_subWindowActivated(QMdiSubWindow *arg1)
{
    if(ui->mdiArea->subWindowList().size() == 0){
        ui->action_Cut->setEnabled(false);
        ui->action_Copy->setEnabled(false);
        ui->action_Paste->setEnabled(false);
        ui->action_Font->setEnabled(false);
        ui->statusbar->clearMessage();               //清除状态栏信息
    }
    else{
        TFormDoc   *formdoc = static_cast<TFormDoc*>(arg1->widget());
        ui->statusbar->showMessage(formdoc->currentFileName());           //显示子窗口文件名
    }
}

