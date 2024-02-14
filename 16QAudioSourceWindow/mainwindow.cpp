#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaDevices>
#include <QMessageBox>
#include <QChart>
#include <QValueAxis>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    iniChart();             //创建图表
    QAudioDevice device = QMediaDevices::defaultAudioInput();       //默认音频输入设备
    if(device.isNull()){
        ui->action_beginRecord->setEnabled(false);
        ui->groupBox_audioDeviceAndFormat->setTitle("音频输入设置(无设备)");
        QMessageBox::information(this,"提示","无音频输入设备");
        return;
    }
    ui->comboBox_audioInputDevice->addItem(device.description());           //只添加默认音频输入设备
    //首选音频格式
    QAudioFormat  audioFormat = device.preferredFormat();                   //音频输入设备的首选音频格式
    ui->comboBox_sampleFormat->setCurrentIndex(audioFormat.sampleFormat());     //采样点格式
    ui->spinBox_sampleFreq->setValue(audioFormat.sampleRate());                 //采样频率
    int minRate = device.minimumSampleRate();
    int maxRate = device.maximumSampleRate();
    ui->label_sampleRateRange->setText(QString::asprintf("范围: %d~%d",minRate,maxRate));
    ui->spinBox_sampleFreq->setRange(minRate,maxRate);

    ui->spinBox_channelCnt->setValue(audioFormat.channelCount());               //通道数
    int minChan = device.minimumChannelCount();
    int maxChan = device.maximumChannelCount();
    ui->label_channelCnt->setText(QString::asprintf("范围:%d~%d",minChan,maxChan));
    ui->spinBox_channelCnt->setRange(minChan,maxChan);

    ui->spinBox_sampleByteCnt->setValue(audioFormat.bytesPerSample());          //每个采样点的字节数
    ui->spinBox_frameByteCnt->setValue(audioFormat.bytesPerFrame());            //每帧字节数
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniChart(){
    //创建图表
    QChart *chart = new QChart;
    chart->setTitle("音频输入原始信号");
    ui->chartView->setChart(chart);
    lineSeries = new QLineSeries();         //创建序列
    chart->addSeries(lineSeries);
    lineSeries->setUseOpenGL(true);         //使用OpenGL加速

    QValueAxis *axisX = new QValueAxis;      //X轴
    axisX->setRange(0,m_bufferSize);        //x轴数据范围
    axisX->setLabelFormat("%g");
    axisX->setTitleText("Samples");
    QValueAxis *axisY = new QValueAxis;     //Y轴
    axisY->setRange(0,256);                 //UInt8采样，数据范围0~255
    axisY->setTitleText("Audio Level");

    chart->addAxis(axisX,Qt::AlignBottom);
    chart->addAxis(axisY,Qt::AlignLeft);
    lineSeries->attachAxis(axisX);
    lineSeries->attachAxis(axisY);
    chart->legend()->hide();                //隐藏图例
}

void MainWindow::on_action_preferAudioFormat_triggered()
{
    //首选音频格式 按钮，显示默认音频输入设备的首选音频格式
    QAudioFormat audioFormat = QMediaDevices::defaultAudioInput().preferredFormat();
    ui->spinBox_sampleFreq->setValue(audioFormat.sampleRate());         //采样频率
    ui->comboBox_sampleFormat->setCurrentIndex(audioFormat.sampleFormat());       //采样点格式
    ui->spinBox_channelCnt->setValue(audioFormat.channelCount());           //通道数
    ui->spinBox_frameByteCnt->setValue(audioFormat.bytesPerFrame());        //每帧字节数
    ui->spinBox_sampleByteCnt->setValue(audioFormat.bytesPerSample());
}


void MainWindow::on_action_testAudioFormat_triggered()
{
    //测试音频格式 按钮
    QAudioFormat daqFormat;
    daqFormat.setSampleRate(ui->spinBox_sampleFreq->value());
    daqFormat.setChannelCount(ui->spinBox_channelCnt->value());
    int index = ui->comboBox_sampleFormat->currentIndex();
    daqFormat.setSampleFormat(QAudioFormat::SampleFormat(index));       //采样点格式
    QAudioDevice device = QMediaDevices::defaultAudioInput();           //默认音频输入格式
    if(device.isFormatSupported(daqFormat))
        QMessageBox::information(this,"提示","默认设备支持所选格式");
    else
        QMessageBox::information(this,"提示","默认设备不支持所选格式");
}




void MainWindow::on_comboBox_sampleFormat_currentIndexChanged(int index)
{
    //采样点格式下拉列表框
    switch(index)       //采样点格式，更新“每采样点字节数” SpingBox的显示值
    {
        case 0:             //Unknow
    case 1:                 //Uint8
            ui->spinBox_sampleByteCnt->setValue(1);break;
    case 2:                 //Int16
        ui->spinBox_sampleByteCnt->setValue(2); break;
    case 3:                 //Int32
    case 4:                 //Float
        ui->spinBox_channelCnt->setValue(4);
        int bytes = ui->spinBox_channelCnt->value() * ui->spinBox_sampleByteCnt->value();
        ui->spinBox_frameByteCnt->setValue(bytes);          //更新每帧字节数

        bool canShowWave = (index == 1) && (ui->spinBox_channelCnt->value() == 1);          //是否可以显示曲线
        ui->checkBox_showWave->setEnabled(canShowWave);                 //只有采样点格式为UInt8且通道数为1时才能显示曲线
        if(!canShowWave)                //如果不能显示曲线
            ui->checkBox_showWave->setChecked(false);
    }

}

void MainWindow::on_spinBox_channelCnt_valueChanged(int arg1){
        //通道数 SpinBox
        ui->spinBox_frameByteCnt->setValue(arg1 * (ui->spinBox_sampleByteCnt->value()));
                                                                    //每帧字节数
        bool canShowWave = (arg1 == 1) && (ui->comboBox_sampleFormat->currentIndex() == 1);
        ui->checkBox_showWave->setEnabled(canShowWave);             //只有采样点格式为UInt8且通道数为1时才能显示曲线
        if(!canShowWave)
            ui->checkBox_showWave->setChecked(false);
    }



void MainWindow::on_action_beginRecord_triggered()
{
    //开始采集 按钮
    if(ui->comboBox_sampleFormat->currentIndex() == 0)                  //检查采样点格式
    {
        QMessageBox::critical(this,"错误","请设置采样点格式");
        return;
    }
    bool saveToFile = ui->checkBox_dataRecordToFile->isChecked();           //是否保存到文件
    QString fileName = ui->lineEdit_dataFile->text().trimmed();
    if((saveToFile) && (fileName.isEmpty())){
        QMessageBox::critical(this,"错误","请设置要保存的文件");
        return;
    }
    //设置音频格式
    QAudioFormat  daqFormat;
    daqFormat.setSampleRate(ui->spinBox_sampleFreq->value());           //采样频率
    daqFormat.setChannelCount(ui->spinBox_channelCnt->value());         //通道数
    int index = ui->comboBox_sampleFormat->currentIndex();
    daqFormat.setSampleFormat(QAudioFormat::SampleFormat(index));       //采样点格式

    //创建audioSource和myDevice,开始采集音频数据
    audioSource = new QAudioSource(daqFormat,this);
    audioSource->setBufferSize(m_bufferSize);           //设置缓冲区大小，如10000
    audioSource->setVolume(1);                          //设置录音音量，范围为0~1
    myDevice = new TMyDevice(this);                     //创建myDevice
    connect(myDevice,&TMyDevice::updateBlockSize,this,&MainWindow::do_IODevice_update);

    bool showWave = ui->checkBox_showWave->isChecked();                 //是否实时显示曲线
    myDevice->openDAQ(m_bufferSize,showWave,lineSeries,saveToFile,fileName);
    audioSource->start(myDevice);                           //开始采集音频数据
    m_isWorking = true;                 //表示有设备在工作，不允许关闭窗口
    ui->action_beginRecord->setEnabled(false);
    ui->action_stopRecord->setEnabled(true);
    ui->action_playRecFile->setEnabled(false);              //"播放文件” 按钮
}



void MainWindow::on_action_stopRecord_triggered()
{
    //停止采集 按钮
    audioSource->stop();
    myDevice->closeDAQ();               //I/O设备停止记录
    delete myDevice;
    delete audioSource;
    m_isWorking = false;
    ui->action_beginRecord->setEnabled(true);
    ui->action_stopRecord->setEnabled(false);
    ui->action_playRecFile->setEnabled(ui->checkBox_dataRecordToFile->isChecked());         //"播放文件" 按钮
}

void MainWindow::do_IODevice_update(qint64 blockSize){
    float time = audioSource->processedUSecs() / 1000;             //单位：ms
    QString str = QString::asprintf("已录制时间 = %.1f 秒",time / 1000);
    ui->label_recordTime->setText(str);
    ui->label_dataByteCnt->setText(QString("实际数据块字节数 = %1").arg(blockSize));
}

void MainWindow::on_action_playRecFile_triggered()
{
    //播放文件 按钮
    QString filename = ui->lineEdit_dataFile->text().trimmed();
    if(filename.isEmpty() || !QFile::exists(filename)){
        QMessageBox::critical(this,"错误","文件名为空，或文件名不存在");
        return;
    }
    sinkFileDevice.setFileName(filename);                  //文件I/O设备设置文件
    if(!sinkFileDevice.open(QIODeviceBase::ReadOnly)){
        QMessageBox::critical(this,"错误","打开文件时出现错误，无法播放");
        return;
    }
    //使用界面上的音频格式参数
    QAudioFormat format;
    format.setSampleRate(ui->spinBox_sampleFreq->value());
    format.setChannelCount(ui->spinBox_channelCnt->value());
    int index = ui->comboBox_sampleFormat->currentIndex();
    format.setSampleFormat(QAudioFormat::SampleFormat(index));
    //使用默认的音频输出设备，检查是否支持音频格式
    QAudioDevice audioDevice  = QMediaDevices::defaultAudioOutput();
    if(!audioDevice.isFormatSupported(format)){
        QMessageBox::critical(this,"错误","播放设备不支持此音频格式设置，无法播放");
        return;
    }
    //创建QAudioSink对象，然后开始播放
    audioSink = new QAudioSink(format,this);            //创建audioSink
    connect(audioSink,&QAudioSink::stateChanged,this,&MainWindow::do_sink_stateChanged);
    audioSink->start(&sinkFileDevice);                  //开始播放
    m_isWorking = true;                                 //表示有设备在工作，不能关闭窗口
    ui->action_playRecFile->setEnabled(false);
}

void MainWindow::do_sink_stateChanged(QAudio::State state){
    if(state == QAudio::IdleState){                 //播放结束后为空闲状态
        sinkFileDevice.close();                //关闭文件
        audioSink->stop();
        audioSink->deleteLater();               //在主事件循环里删除对象
        ui->action_playRecFile->setEnabled(true);
        m_isWorking = false;                        //表示没有设备在工作了
    }
}


void MainWindow::closeEvent(QCloseEvent *event){
    if(m_isWorking){
        QMessageBox::information(this,"提示","正在采集或播放音频，不允许退出");
        event->ignore();
    }
    else
        event->accept();
}
