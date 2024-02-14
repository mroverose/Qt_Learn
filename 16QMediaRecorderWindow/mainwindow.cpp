#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    session = new QMediaCaptureSession(this);       //管理器
    QAudioInput *audioInput = new QAudioInput(this);
    session->setAudioInput(audioInput);
    recorder = new QMediaRecorder(this);
    session->setRecorder(recorder);
    connect(recorder,&QMediaRecorder::recorderStateChanged,this,&MainWindow::do_stateChanged);
    connect(recorder,&QMediaRecorder::durationChanged,this,&MainWindow::do_durationChanged);

    if(QMediaDevices::defaultAudioInput().isNull()){
        ui->groupBox_recordDevice->setTitle("录音设置(无设备)");
        ui->action_record->setEnabled(false);
        QMessageBox::information(this,"提示","无音频输入设备");
        return;
    }
    foreach(QAudioDevice device,QMediaDevices::audioInputs())       //音频输入设备列表
        ui->comboBox_inputDevice->addItem(device.description(),QVariant::fromValue(device));

    QMediaFormat format;            //默认的格式对象
    foreach(QMediaFormat::AudioCodec encoder,format.supportedAudioCodecs(QMediaFormat::Encode))         //支持的编码格式
        ui->comboBox_voiceEncode->addItem(QMediaFormat::audioCodecDescription(encoder),QVariant::fromValue(encoder));
    foreach(QMediaFormat::FileFormat fileFormat,format.supportedFileFormats(QMediaFormat::Encode))      //支持的文件格式
        ui->comboBox_fileFormat->addItem(QMediaFormat::fileFormatDescription(fileFormat),QVariant::fromValue(fileFormat));

    //采样频率
    int minSampRate = audioInput->device().minimumSampleRate();         //输入设备支持的最低采样频率
    ui->comboBox_sampleFrequency->addItem(QString("Minimum %1").arg(minSampRate),minSampRate);
    int maxSampleRate = audioInput->device().maximumSampleRate();       //输入设备支持的最高采样频率
    ui->comboBox_sampleFrequency->addItem(QString("Maximum %1").arg(maxSampleRate),maxSampleRate);
    ui->comboBox_sampleFrequency->addItem("16000",16000);
    ui->comboBox_sampleFrequency->addItem("44100",44100);
    ui->comboBox_sampleFrequency->addItem("48000",48000);
    ui->comboBox_sampleFrequency->addItem("88200",88200);
    //通道数
    int minChan = audioInput->device().minimumChannelCount();       //最少通道数
    ui->comboBox_channelCnt->addItem(QString("Minimum %1").arg(minChan),minChan);
    int maxChan = audioInput->device().maximumChannelCount();       //最多通道数
    ui->comboBox_channelCnt->addItem(QString("Maximum %1").arg(maxChan),maxChan);
    ui->comboBox_channelCnt->addItem("1",1);
    ui->comboBox_channelCnt->addItem("2",2);
    //固定品质
    ui->horizontalSlider_quality->setRange(0,int(QImageCapture::VeryHighQuality));
    ui->horizontalSlider_quality->setValue(int(QImageCapture::NormalQuality));
    //固定比特率
    ui->comboBox_byteRate->addItem("32000");
    ui->comboBox_byteRate->addItem("64000");
    ui->comboBox_byteRate->addItem("96000");
    ui->comboBox_byteRate->addItem("128000");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_record_triggered()
{
    //开始录音
    if(recorder->recorderState() == QMediaRecorder::PausedState){
        //若是暂停状态，就继续录音
        recorder->record();
        return;
    }
    QString selectedFile = ui->lineEdit->text().trimmed();
    if(selectedFile.isEmpty()){
        QMessageBox::critical(this,"错误","请先设置录音输出文件");
        return;
    }
    if(QFile::exists(selectedFile))
        QFile::remove(selectedFile);
    recorder->setOutputLocation(QUrl::fromLocalFile(selectedFile));     //设置输出文件
    //设置sessionr的音频输入设备
    session->audioInput()->setDevice(QMediaDevices::defaultAudioInput());

    //设置recorder 的mediaFormat参数，包括音频编码和文件格式
    QMediaFormat mediaFormat;
    QVariant var = ui->comboBox_voiceEncode->itemData(ui->comboBox_voiceEncode->currentIndex());
    QMediaFormat::FileFormat fileFormat = var.value<QMediaFormat::FileFormat>();
    mediaFormat.setFileFormat(fileFormat);              //设置文件格式

    var = ui->comboBox_fileFormat->itemData(ui->comboBox_fileFormat->currentIndex());
    QMediaFormat::AudioCodec audioCodec = var.value<QMediaFormat::AudioCodec>();
    mediaFormat.setAudioCodec(audioCodec);                  //设置音频编码
    recorder->setMediaFormat(mediaFormat);                  //设置媒介格式

    //设置recorder的其他参数
    var = ui->comboBox_sampleFrequency->itemData(ui->comboBox_sampleFrequency->currentIndex());
    recorder->setAudioSampleRate(var.toInt());              //设置采样频率
    var = ui->comboBox_channelCnt->itemData(ui->comboBox_channelCnt->currentIndex());
    recorder->setAudioChannelCount(var.toInt());            //设置通道数
    recorder->setAudioBitRate(ui->comboBox_byteRate->currentText().toInt()); //设置比特率
    recorder->setQuality(QMediaRecorder::Quality(ui->horizontalSlider_quality->value()));       //设置录制品质

    if(ui->radioButton_fixQuality->isChecked())         //设置编码模式，固定品质
        recorder->setEncodingMode(QMediaRecorder::ConstantQualityEncoding);
    else
        recorder->setEncodingMode(QMediaRecorder::ConstantBitRateEncoding);
    recorder->record();


}


void MainWindow::on_action_pause_triggered()
{
    //暂停
    recorder->pause();
}




void MainWindow::on_action_stop_triggered()
{
    //停止
    recorder->stop();
}

void MainWindow::do_stateChanged(QMediaRecorder::RecorderState state){
    //录音状态变化
    bool isRecording = (state == QMediaRecorder::RecordingState);          //正在录制
    ui->action_record->setEnabled(!isRecording);
    ui->action_pause->setEnabled(isRecording);
    ui->action_stop->setEnabled(isRecording);
    ui->pushButton_recodeOutputFile->setEnabled(state == QMediaRecorder::StoppedState);
    //“录音输出文件”按钮
}

void MainWindow::do_durationChanged(qint64 duration){
    //录音持续时间变化
    ui->label->setText(QString("已录制 %1 秒").arg(duration / 1000));
}


void MainWindow::closeEvent(QCloseEvent *event){
    if(recorder->recorderState() == QMediaRecorder::RecordingState || recorder->recorderState() == QMediaRecorder::PausedState){
        QMessageBox::critical(this,"提示","现在正在录音，请停止后再退出");
        event->ignore();
    }
    event->accept();
}

void MainWindow::on_pushButton_recodeOutputFile_clicked()
{
    QString curPath = QDir::homePath();
    QString dlgTitle = "选择保存的文件";
    QString filter = "所有文件(*.*)";
    QString fileName = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
  //  QFileInfo fileInfo(fileName);
    ui->lineEdit->setText(fileName);
}

