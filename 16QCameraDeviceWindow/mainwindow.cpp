#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labDuration = new QLabel("录制时间: ");
    labDuration->setMinimumWidth(120);
    ui->statusbar->addWidget(labDuration);
    labFormatInfo = new QLabel("图片分辨率: ");
    labFormatInfo->setMinimumWidth(150);
    ui->statusbar->addWidget(labFormatInfo);
    labInfo = new QLabel("信息");
    ui->statusbar->addPermanentWidget(labInfo);

    //1.发现摄像头，若没有默认摄像头，就无法进行本示例的操作
    QCameraDevice  defaultCameraDevice = QMediaDevices::defaultVideoInput();
    //默认摄像头
    if(defaultCameraDevice.isNull()){
        QMessageBox::critical(this,"提示","没有发现摄像头");
        return;
    }
    QByteArray defaultCameraID = defaultCameraDevice.id();
    ui->action_openCamera->setEnabled(true);
    int index = 0;
    for(int i = 0;i < QMediaDevices::videoInputs().size();i++){
        QCameraDevice device = QMediaDevices::videoInputs().at(i);
        if(device.id() == defaultCameraID){
            ui->comboBox_camera->addItem(device.description() + "(默认)",QVariant::fromValue(device));
            //添加QCameraDevice类型的用户数据
            index = i;
        }
        else
            ui->comboBox_camera->addItem(device.description(),QVariant::fromValue(device));
    }
    if(ui->comboBox_camera->currentIndex() != index)
        ui->comboBox_camera->setCurrentIndex(index);        //用默认摄像头作为当前摄像头

    //2.创建抓取管理器session和各个设备
    session = new QMediaCaptureSession(this);       //抓取管理器
    session->setVideoOutput(ui->videoWidget);       //设置视频输出组件，用于视频预览

    //2.1创建QAudioInput对象，用于音频输入
    QAudioInput  *audioInput = new QAudioInput(this);
    audioInput->setDevice(QMediaDevices::defaultAudioInput());
    session->setAudioInput(audioInput);                         //设置音频输入设备，用于录音

    //2.2创建QCamera对象，用于控制摄像头
    camera = new QCamera(this);                     //摄像头
    camera->setCameraDevice(defaultCameraDevice);       //设置使用默认摄像头设备
    session->setCamera(camera);                         //为session设置摄像头
    connect(camera,&QCamera::activeChanged,this,&MainWindow::do_camera_activeChanged);
    connect(ui->comboBox_camera,&QComboBox::currentIndexChanged,this,&MainWindow::do_camera_changed);
    do_camera_changed(ui->comboBox_camera->currentIndex());

    //2.3 创建QImageCapture对象，用于拍照
    imageCapture = new QImageCapture(this);             //抓图器
    imageCapture->setQuality(QImageCapture::VeryHighQuality);           //抓图器编码品质
    session->setImageCapture(imageCapture);             //为session设置抓图器
    connect(imageCapture,&QImageCapture::readyForCaptureChanged,this,&MainWindow::do_image_readyForCapture);
    connect(imageCapture,&QImageCapture::imageCaptured,this,&MainWindow::do_image_captured);
    connect(imageCapture,&QImageCapture::imageSaved,this,&MainWindow::do_image_saved);

    soundEffect = new QSoundEffect(this);               //用于在拍照时播放快门音效
    QString filename = ":sound/images/shutter.wav";     //资源文件中的文件
    soundEffect->setSource(QUrl::fromLocalFile(filename));

    //2.4 创建QMediaRecorder对象，用于录像
    recorder = new QMediaRecorder(this);            //创建recorder
    session->setRecorder(recorder);                 //为session设置recorder
    connect(recorder,&QMediaRecorder::durationChanged,this,&MainWindow::do_recorder_duration);
    connect(recorder,&QMediaRecorder::recorderStateChanged,this,&MainWindow::do_recorder_stateChanged);
    connect(recorder,&QMediaRecorder::errorOccurred,this,&MainWindow::do_recorder_error);

    //3.视频编码和文件格式，添加到“录象设置”
    QMediaFormat  format;
    foreach(QMediaFormat::VideoCodec codec,format.supportedVideoCodecs(QMediaFormat::Encode))
        ui->comboBox_recorderEncode->addItem(QMediaFormat::videoCodecDescription(codec),QVariant::fromValue(codec));
    foreach(QMediaFormat::FileFormat fileFormat,format.supportedFileFormats(QMediaFormat::Encode))
        ui->comboBox_recorderFormat->addItem(QMediaFormat::fileFormatDescription(fileFormat),QVariant::fromValue(fileFormat));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::closeEvent(QCloseEvent *event){
    if(m_isWorking){
        if(recorder->recorderState() == QMediaRecorder::RecordingState)
            recorder->stop();
        camera->stop();
    }
    event->accept();
}


void MainWindow::do_camera_changed(int index){
    QVariant var = ui->comboBox_camera->itemData(index);            //获取用户数据
    QCameraDevice device = var.value<QCameraDevice>();                  //用户数据转换成QCameraDevice类型
    showCameraDeviceInfo(&device);                                      //显示摄像头设备信息
    camera->setCameraDevice(device);                                    //重新设轩摄象头设备
    showCameraSupportFeatures(camera);                                  //显示摄像头支持的特性
}

void MainWindow::showCameraDeviceInfo(QCameraDevice *device){
    //显示摄像头设备信息
    ui->comboBox_cameraPos->setCurrentIndex(device->position());        //摄像对位置
    //拍照时的图片分辨率
    ui->comboBox_captureRes->clear();           //支持的图片分辨率
    ui->comboBox_captureRes->clear();           //拍照使用的分辨率
    foreach(QSize size,device->photoResolutions()){
        QString str = QString::asprintf("%d X %d",size.width(),size.height());
        ui->comboBox_captureRes->addItem(str);                                   //支持的图片分辨率
        ui->comboBox_imageRes->addItem(str,size);                               //拍照使作的分辨率，添加用户数据
    }

    //视频分辨率
    ui->comboBox_supportedRecorderRes->clear();             //支持的视频分辨率
    ui->comboBox_recorderFrameRate->clear();                    //支持的帧率范围
    ui->comboBox_recorderRes->clear();                          //录像使用的分辨率
    foreach(QCameraFormat format,device->videoFormats()){
        QSize size = format.resolution();
        QString str = QString::asprintf("%d X %d",size.width(),size.height());
        ui->comboBox_supportedRecorderRes->addItem(str);                //支持的视频分辨率
        ui->comboBox_recorderRes->addItem(str,size);                    //录像用的分辨率，添加用户数据
        str = QString::asprintf("%.1f ~ %.1f",format.minFrameRate(),format.maxFrameRate());
        ui->comboBox_recorderFrameRate->addItem(str);                   //帧率范围
    }
}


void MainWindow::showCameraSupportFeatures(QCamera *aCamera){
    //显示摄像头支持的特性
    QCamera::Features features = aCamera->supportedFeatures();                  //摄像头支持的特性
    bool supported = features.testFlag(QCamera::Feature::ColorTemperature);
    ui->checkBox_colorTemperature->setChecked(supported);
    supported = features.testFlag(QCamera::Feature::ExposureCompensation);
    ui->checkBox_exposureCompensation->setChecked(supported);
    supported = features.testFlag(QCamera::Feature::IsoSensitivity);
    ui->checkBox_isoSensitivity->setChecked(supported);
    supported = features.testFlag(QCamera::Feature::ManualExposureTime);
    ui->checkBox_manualExposureTime->setChecked(supported);
    supported = features.testFlag(QCamera::Feature::FocusDistance);
    ui->checkBox_focusDistance->setChecked(supported);
    supported = features.testFlag(QCamera::Feature::CustomFocusPoint);
    ui->checkBox_customFocusPoint->setChecked(supported);
}

void MainWindow::on_action_openCamera_triggered()
{
    //打开摄像头
    camera->start();
}


void MainWindow::on_action_closeCamera_triggered()
{
    //关闭摄像头
    if(recorder->recorderState() == QMediaRecorder::RecordingState)
        recorder->stop();
    camera->stop();
}


void MainWindow::do_camera_activeChanged(bool active){
    //摄像头状态变化
    ui->action_beginRecord->setEnabled(active);
    ui->action_stopRecord->setEnabled(active);
    ui->action_openCamera->setEnabled(!active);
    ui->comboBox_camera->setEnabled(!active);
    m_isWorking = active;
}

void MainWindow::on_action_capture_triggered()
{
    //拍照 按钮
    int index = ui->comboBox_encodeQuality->currentIndex();
    imageCapture->setQuality(QImageCapture::Quality(index));        //图片文件编码品质
    index = ui->comboBox_imageRes->currentIndex();
    QVariant var = ui->comboBox_imageRes->itemData(index);         //用户数据
    imageCapture->setResolution(var.toSize());                      //设置分辨率

    if(ui->checkBox_saveAsFile->isChecked())
        imageCapture->captureToFile();                  //拍照并将图片保存到文件
    else
        imageCapture->capture();
    soundEffect->play();                                //播放快门音效
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::do_image_readyForCapture(bool ready){
    //与readyForCaptureChanged()信号关联
    ui->action_capture->setEnabled(ready);
}

void MainWindow::do_image_captured(int id, const QImage &preview){
    //与imageCaptured()信号关联
    Q_UNUSED(id);
    QString str = QString::asprintf("实际图片分辨率= %d X %d",preview.width(),preview.height());
    labFormatInfo->setText(str);
    QImage scaledImage = preview.scaledToWidth(ui->scrollArea->width() - 30);
    ui->label_capturePic->setPixmap(QPixmap::fromImage(scaledImage));
    if(!ui->checkBox_saveAsFile->isChecked())
        labInfo->setText("图片未保存为文件");
}

void MainWindow::do_image_saved(int id, const QString &fileName){
    //与imageSaved()信号关联
    Q_UNUSED(id);
    labInfo->setText("图片保存为文件: " + fileName);
}

void MainWindow::on_action_beginRecord_triggered()
{
    //开始录像 按钮
    QString selectedFile = ui->lineEdit_saveFileName->text().trimmed();
    if(selectedFile.isEmpty()){
        QMessageBox::critical(this,"错误","请先设置输出文件");
        return;
    }

    if(QFile::exists(selectedFile))
        if(!QFile::remove(selectedFile)){
            QMessageBox::critical(this,"错误","所设置录像输出文件被占用，无法删除");
            return;
        }

    //设置视频的参数
    recorder->setEncodingMode(QMediaRecorder::ConstantQualityEncoding);             //固定品质编码
    int index = ui->comboBox_recorderEncodeQuality->currentIndex();
    recorder->setQuality(QMediaRecorder::Quality(index));

    //设置媒介格式
    QMediaFormat mediaFormat;
    index = ui->comboBox_recorderEncode->currentIndex();
    QVariant var = ui->comboBox_recorderEncode->itemData(index);       //获取用户数据
    QMediaFormat::VideoCodec codec = var.value<QMediaFormat::VideoCodec>();
    mediaFormat.setVideoCodec(codec);
    index = ui->comboBox_recorderFormat->currentIndex();
    var = ui->comboBox_recorderFormat->itemData(index);
    QMediaFormat::FileFormat fileFormat = var.value<QMediaFormat::FileFormat>();
    mediaFormat.setFileFormat(fileFormat);                  //设置文件格式
    recorder->setMediaFormat(mediaFormat);                  //设置媒介格式

    //设置分辨率
    index = ui->comboBox_recorderRes->currentIndex();
    var = ui->comboBox_recorderRes->itemData(index);            //获取用户数据
    recorder->setVideoResolution(var.toSize());                 //设置视频分辨率
    labInfo->clear();

    recorder->setOutputLocation(QUrl::fromLocalFile(selectedFile));         //设置输出文件
    recorder->record();
}


void MainWindow::on_action_stopRecord_triggered()
{
    //停止录像
    recorder->stop();
}


void MainWindow::on_action_quite_triggered()
{
    MainWindow::close();
}

void MainWindow::do_recorder_duration(qint64 duration){
    //与durationChanged()信号关联
    labDuration->setText(QString::asprintf("录制时间:%.1f 秒 ",duration / 1000.0));
}


void MainWindow::do_recorder_stateChanged(QMediaRecorder::RecorderState state){
    //与recorderStateChanged()信号关联
    ui->action_beginRecord->setEnabled(state == QMediaRecorder::StoppedState);
    ui->action_stopRecord->setEnabled(state == QMediaRecorder::RecordingState);
}


void MainWindow::do_recorder_error(QMediaRecorder::Error error, const QString &errorString){
    //与errorOccurred()信号关联
    Q_UNUSED(error);
    labInfo->setText(errorString);
}

void MainWindow::on_pushButton_saveFile_clicked()
{
    QString curPath = QDir::homePath();
    QString dlgTitle = "选择保存的视频文件";
    QString filter = "所有文件(*.*)";
    QString aFile = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFile.isEmpty())
        return;
    QFileInfo  fileinfo = QFileInfo(aFile);
    ui->lineEdit_saveFileName->setText(fileinfo.fileName());
}

