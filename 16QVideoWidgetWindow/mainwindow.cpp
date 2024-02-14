 #include "mainwindow.h"
#include "ui_mainwindow.h"
// #include <QtMultimediaWidgets>
// #include <QVideoWidget>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);            //创建播放器
    QAudioOutput *audioOutput = new QAudioOutput(this);
    player->setAudioOutput(audioOutput);            //设置音频输出通道
    player->setVideoOutput(ui->videoWidget);        //设置视频输出组件
    ui->videoWidget->setMediaPlayer(player);

    //使用TMyVideoWidget视频输出组件解除注释
    connect(player,&QMediaPlayer::playbackStateChanged,this,&MainWindow::do_stateChanged);
    connect(player,&QMediaPlayer::positionChanged,this,&MainWindow::do_positionChanged);
    connect(player,&QMediaPlayer::durationChanged,this,&MainWindow::do_durationChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_openFile_clicked()
{
    //打开文件
    QString curPath = QDir::homePath();
    QString dlgTitle = "选择视频文件";
    QString filter = "视频文件(*.wmv,*.mp4);;所有文件(*.*)";
    QString aFile = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFile.isEmpty())
        return;
    QFileInfo fileInfo(aFile);
    ui->label_fileName->setText(fileInfo.fileName());
    player->setSource(QUrl::fromLocalFile(aFile));          //设置播放文件
    player->play();
}


void MainWindow::on_pushButton_play_clicked()
{
    player->play();
}


void MainWindow::on_pushButton_pause_clicked()
{
    player->pause();
}


void MainWindow::on_pushButton_stop_clicked()
{
    player->stop();
}


void MainWindow::on_pushButton_mutex_clicked()
{
    //静音按钮
    bool mute = player->audioOutput()->isMuted();
    player->audioOutput()->setMuted(!mute);
    //if(mute)
  //      ui->pushButton_mutex->setIcon(QIcon(":images/volumn.bmp"));
   // else
   //     ui->pushButton_mutex->setIcon(QIcon(":images/mute.bmp"));

    if(mute)
        ui->pushButton_mutex->setText("静音");
    else
        ui->pushButton_mutex->setText("声音");
}


void MainWindow::on_horizontalSlider_volumn_valueChanged(int value)
{
    //调节音量
    player->audioOutput()->setVolume(value / 100.0);
}

void MainWindow::do_stateChanged(QMediaPlayer::PlaybackState state){
    //播放器状态发生变化
    bool isPlaying = (state == QMediaPlayer::PlayingState);
    ui->pushButton_play->setEnabled(!isPlaying);
    ui->pushButton_pause->setEnabled(isPlaying);
    ui->pushButton_stop->setEnabled(isPlaying);
}


void MainWindow::do_durationChanged(qint64 duration){
    //文件时长发生变化
    ui->horizontalSlider_playPosition->setMaximum(duration);
    int secs = duration / 1000;
    int mins = secs / 60;
    secs = secs % 60;
    durationTime = QString::asprintf("%d:%d",mins,secs);
    ui->label_playTime->setText(positionTime + "/" + durationTime);
}


void MainWindow::do_positionChanged(qint64 position){
    if(ui->horizontalSlider_playPosition->isSliderDown())
        return;
    ui->horizontalSlider_playPosition->setSliderPosition(position);
    int secs = position / 1000;
    int mins = secs / 60;
    secs = secs % 60;
    positionTime = QString::asprintf("%d:%d",mins,secs);
    ui->label_playTime->setText(positionTime + "/" + durationTime);
}

void MainWindow::on_horizontalSlider_playPosition_valueChanged(int value)
{
    //播放位置
    if(ui->horizontalSlider_playPosition->isSliderDown())      //当播放进度条在拖动时
       player->setPosition(value);                              //重新设置播放位置
     else return;
}


void MainWindow::on_pushButton_fullScreen_clicked()
{
    //全屏按钮
    ui->videoWidget->setFullScreen(true);
}

