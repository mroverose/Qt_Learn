#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QActionGroup>
#include <QTranslator>
#include <QSettings>

extern QTranslator trans;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buildUI();
    buildSignalSlots();
//    ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    this->setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buildUI(){
    //创建状态栏上的组件
    labFile = new QLabel(this);      //label用于显示当前文件名
    labFile->setMinimumWidth(150);
    labFile->setText(tr("文件名："));
    ui->statusbar->addWidget(labFile);

    progressbar1 = new QProgressBar(this);
    progressbar1->setMaximumWidth(200);
    progressbar1->setMinimum(5);
    progressbar1->setMaximum(50);
    progressbar1->setValue(ui->plainTextEdit->font().pointSize());
    ui->statusbar->addWidget(progressbar1);

    labInfo = new QLabel(this);
    labInfo->setText(tr("选择字体名称： "));
    ui->statusbar->addPermanentWidget(labInfo);

    //为“汉语”和“English”创建ActionGroup，实现互斥选择
    actionGroup = new QActionGroup(this);
    actionGroup->addAction(ui->actionLang_CN);
    actionGroup->addAction(ui->actionLang_EN);
    actionGroup->setExclusive(true);
    ui->actionLang_CN->setChecked(true);

    //创建工具栏上无法可视化设计的一些组件
    spinFontSize = new QSpinBox(this);
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->plainTextEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->toolBar->addWidget(spinFontSize);

    comboFontName = new QFontComboBox(this);
    comboFontName->setMinimumWidth(150);
    ui->toolBar->addWidget(comboFontName);
    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actionClose);   //“退出”按钮
}

void MainWindow::buildSignalSlots(){
    connect(spinFontSize,SIGNAL(valueChanged(int)),this,SLOT(do_fontSize_changed(int)));
    connect(comboFontName,&QFontComboBox::currentFontChanged,this,&MainWindow::do_fontSelected);
}

void MainWindow::do_fontSelected(const QFont & font){
    //选择字体的FontComboBox
    labInfo->setText(tr("字体名称：%1") .arg(font.family()));
    QTextCharFormat  fmt = ui->plainTextEdit->currentCharFormat();
    fmt.setFont(font);
    ui->plainTextEdit->mergeCurrentCharFormat(fmt);
}

void MainWindow::do_fontSize_changed(int fontsize){
    //设置字体大小的SpinBox
    QTextCharFormat fmt = ui->plainTextEdit->currentCharFormat();
    fmt.setFontPointSize(fontsize);
    ui->plainTextEdit->mergeCurrentCharFormat(fmt);
    progressbar1->setValue(fontsize);
}


void MainWindow::on_actionFont_Bold_triggered(bool checked)
{
    QTextCharFormat fmt = ui->plainTextEdit->currentCharFormat();
    if(checked)fmt.setFontWeight(QFont::Bold);
    else fmt.setFontWeight(QFont::Bold);
    ui->plainTextEdit->mergeCurrentCharFormat(fmt);
}


void MainWindow::on_actionFont_Italic_triggered(bool checked)
{
    QTextCharFormat fmt = ui->plainTextEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->plainTextEdit->mergeCurrentCharFormat(fmt);
}


void MainWindow::on_actionFont_Underline_triggered(bool checked)
{
    //underline
    QTextCharFormat fmt = ui->plainTextEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->plainTextEdit->mergeCurrentCharFormat(fmt);
}


void MainWindow::on_actionFile_Save_triggered()
{   //保存文件
    ui->plainTextEdit->document()->setModified(false);
    labFile->setText(tr("文件已保存"));
}



void MainWindow::on_actionSys_ToggleText_triggered(bool checked)
{   //显示按钮文字
    if(checked)ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    else ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
}


void MainWindow::on_plainTextEdit_copyAvailable(bool b)
{
    ui->actionEdit_Cut->setEnabled(b);
    ui->actionEdit_Copy->setEnabled(b);
    ui->actionEdit_Paste->setEnabled(ui->plainTextEdit->canPaste());
}


void MainWindow::on_plainTextEdit_selectionChanged()
{
    QTextCharFormat fmt = ui->plainTextEdit->currentCharFormat();
    ui->actionFont_Bold->setChecked(fmt.font().bold());
    ui->actionFont_Italic->setChecked(fmt.fontItalic());
    ui->actionFont_Underline->setChecked(fmt.fontUnderline());
}


void MainWindow::on_actionLang_CN_triggered()
{
    //切换到中文界面
    if(trans.load("samp18_1_cn.qm")){
        ui->retranslateUi(this);            //重新翻译界面文字
        labInfo->setText(tr("字体名称"));       //labInfo 是动态创建的组件
        QSettings settings;
        settings.setValue("Language","CN");
    }
}


void MainWindow::on_actionLang_EN_triggered()
{
    //切换到英文界面
    if(trans.load("samp18_1_en.qm")){
        ui->retranslateUi(this);            //重新翻译界面文字
        labInfo->setText(tr("字体名称"));       //labInfo 是动态创建的组件
        QSettings settings;
        settings.setValue("Language","EN");
    }
    qDebug()<<"translate here";
}

