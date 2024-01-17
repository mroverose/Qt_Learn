#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QPrintPreviewDialog>
#include <QPainter>
#include <QTextBlock>
#include <QPrintDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setCentralWidget(ui->splitter);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_open_triggered()
{
    //打开 按钮
    QString curPath = QDir::currentPath();      //当前目录
    QString filter = "图片文件(*.bmp *.jpg *.png);; BMP文件(*.bmp);;JPG文件(*.jpg);;PNG文件(*.png)";
    QString fileName = QFileDialog::getOpenFileName(this,"选择图片文件",curPath,filter);
    if(fileName.isEmpty())
        return;
    ui->statusbar->showMessage(fileName);
    m_filename = fileName;                            //保存当前图片文件名
    QFileInfo fileInfo(fileName);
    QDir::setCurrent(fileInfo.absolutePath());

    m_image.load(fileName);                         //加载图片文件
    QPixmap  pixmap = QPixmap::fromImage(m_image);  //创建QPixmap对象用于界面显示
    ui->label_picture->setPixmap(pixmap);
    ui->tabWidget->setCurrentIndex(0);
    showImageFeatures();                           //显示图片属性
}


void MainWindow::showImageFeatures(bool formatChanged){
    if(formatChanged){
        QImage::Format  fmt = m_image.format();            //图像格式
        if(fmt == QImage::Format_RGB32)
            ui->lineEdit_ImageFormat->setText("32-bit RGB(0xffRRGGBB)");
        else if(fmt == QImage::Format_RGB16)
            ui->lineEdit_ImageFormat->setText("16-bit RGB565");
        else if(fmt == QImage::Format_RGB888)
            ui->lineEdit_ImageFormat->setText("24-bit RGB888");
        else if(fmt == QImage::Format_Grayscale8)
            ui->lineEdit_ImageFormat->setText("8-bit grayscale");
        else if(fmt == QImage::Format_Grayscale16)
            ui->lineEdit_ImageFormat->setText("16-bit grayscale");
        else if(fmt == QImage::Format_ARGB32)
            ui->lineEdit_ImageFormat->setText("32-bit ARGB(0xAARRGGBB)");
        else if(fmt == QImage::Format_Indexed8)
            ui->lineEdit_ImageFormat->setText("8-bit indexes into colormap");
        else
            ui->lineEdit_ImageFormat->setText(QString("Format = %1,其他格式").arg(fmt));

        ui->lineEdit_ImageDepth->setText(QString("%1 bits/pixel").arg(m_image.depth()));
        ui->lineEdit_ImageBitCnt->setText(QString("%1 bits").arg(m_image.bitPlaneCount()));
        ui->checkBox_IsAlpha->setChecked(m_image.hasAlphaChannel());
        ui->checkBox_IsGray->setChecked(m_image.isGrayscale());
    }
    //缩放或旋转之后显示大小信息
    ui->lineEdit_ImageHeight->setText(QString("%1 像素").arg(m_image.height()));
    ui->lineEdit_ImageWidth->setText(QString("%1 像素").arg(m_image.width()));
    qsizetype  sz = m_image.sizeInBytes();            //图像数据字节数
    if(sz < 1024 * 9)
        ui->lineEdit_ImageSize->setText(QString("%1 Bytes").arg(sz));
    else
        ui->lineEdit_ImageSize->setText(QString("%1 KB").arg(sz / 1024));
    QString dpi = QString::asprintf("DPI_X = %.0f,DPI_Y = %.0f",m_image.dotsPerMeterX() * 0.0254,m_image.dotsPerMeterY() * 0.0254);
    ui->lineEdit_ImageDpi->setText(dpi);       //分辨率
}

void MainWindow::on_action_save_triggered()
{
    //保存按钮
    m_image.save(m_filename);          //保存到当前文件
    imageModified(false);
}




void MainWindow::on_action_File_SaveAs_triggered()
{
    //另存按钮
    QString filter = "图片文件(*.bmp *.jpg *.png);; BMP文件(*.bmp);;JPG文件(*.jpg);;PNG文件(*.png)";
    QString fileName = QFileDialog::getSaveFileName(this,"保存文件",m_filename,filter);
    if(fileName.isEmpty())
        return;
    m_image.save(fileName);                   //保存为新文件
    m_filename = fileName;                   //重新设置当前文件名
    ui->statusbar->showMessage(fileName);
    imageModified(false);
}


void MainWindow::on_action_FileReload_triggered()
{
    //重新载入 按钮
    QString fileName = m_filename;
    m_image.load(fileName);             //从当前文件重新加载
    QPixmap pixmap = QPixmap::fromImage(m_image);
    ui->label_picture->setPixmap(pixmap);
    ui->tabWidget->setCurrentIndex(0);
    showImageFeatures(true);
    imageModified(false);
}

void MainWindow::imageModified(bool modified){
    //修改“保存”按钮和“重新载入”按钮的enabled属性
    ui->action_FileReload->setEnabled(modified);
    ui->action_save->setEnabled(modified);
}

void MainWindow::on_pushButton_ImageFormTrans_clicked()
{
    //图像格式转换 按钮
    int index = ui->comboBox->currentIndex();
    if(index == 0)
        m_image.convertedTo(QImage::Format_RGB16);
    else if(index == 1)
        m_image.convertedTo(QImage::Format_RGB888);
    else if(index == 2)
        m_image.convertedTo(QImage::Format_RGB32);
    else if(index == 3)
        m_image.convertedTo(QImage::Format_Grayscale8);
    else if(index == 4)
        m_image.convertedTo(QImage::Format_Grayscale16);
    else if(index == 5)
        m_image.convertedTo(QImage::Format_Indexed8);
    else
        return;

    QPixmap pixmap = QPixmap::fromImage(m_image);
    ui->label_picture->setPixmap(pixmap);
    showImageFeatures(true);
    imageModified(true);
}


void MainWindow::on_action_ZoomIn_triggered()
{
    //放大 按钮
    int W = m_image.width();
    int H = m_image.height();
    m_image = m_image.scaled(1.1 * W,1.1 * H,Qt::KeepAspectRatio,Qt::SmoothTransformation);          //放大
    QPixmap   pixmap = QPixmap::fromImage(m_image);
    ui->label_picture->setPixmap(pixmap);
    showImageFeatures(false);
    imageModified(true);
}


void MainWindow::on_action_ZoomOut_triggered()
{
    //缩小 按钮
    int W = m_image.width();
    int H = m_image.height();
    m_image = m_image.scaled(0.6 * W,0.6 * H,Qt::KeepAspectRatio,Qt::SmoothTransformation);          //放大
    QPixmap   pixmap = QPixmap::fromImage(m_image);
    ui->label_picture->setPixmap(pixmap);
    showImageFeatures(false);
    imageModified(true);
}


void MainWindow::on_action_RotateLeft_triggered()
{
    //左旋 按钮
    QTransform matrix;
    matrix.reset();             //单位矩阵
    matrix.rotate(-90);         //默认Qt::ZAxis
    m_image = m_image.transformed(matrix);      //使用变换矩阵matrix进行图像变换
    QPixmap   pixmap = QPixmap::fromImage(m_image);
    ui->label_picture->setPixmap(pixmap);
    showImageFeatures(false);
    imageModified(true);
}


void MainWindow::on_action_RotateRight_triggered()
{
    //右旋 按钮
    QTransform matrix;
    matrix.reset();             //单位矩阵
    matrix.rotate(90);         //默认Qt::ZAxis
    m_image = m_image.transformed(matrix);      //使用变换矩阵matrix进行图像变换
    QPixmap   pixmap = QPixmap::fromImage(m_image);
    ui->label_picture->setPixmap(pixmap);
    showImageFeatures(false);
    imageModified(true);
}


void MainWindow::on_action_FlipUD_triggered()
{
   //"上下翻转" 按钮
    bool horizontal = false;
    bool vertical = true;
    m_image.mirror(horizontal,vertical);          //图像镜像处理
    QPixmap   pixmap = QPixmap::fromImage(m_image);
    ui->label_picture->setPixmap(pixmap);
    imageModified(true);
}


void MainWindow::on_action_FlipLR_triggered()
{
    //"左右翻转" 按钮
    bool horizontal = true;
    bool vertical = false;
    m_image.mirror(horizontal,vertical);          //图像镜像处理
    QPixmap   pixmap = QPixmap::fromImage(m_image);
    ui->label_picture->setPixmap(pixmap);
    imageModified(true);
}


void MainWindow::on_pushButton_GenRgb565_clicked()
{
    ui->plainTextEdit->clear();
    int W = m_image.width();
    int H = m_image.height();
    int total = 2 * W * H;                 //总数据字节数
    QFileInfo  fileInfo(m_filename);
    QString arrayName = fileInfo.baseName();             //不带后缀名的文件名
    QString aLine = QString("const unsigned char RGB565_%1[%2] = {").arg(arrayName).arg(total);
    ui->plainTextEdit->appendPlainText(aLine);

    QString onePixel;                 //1像素的2字节十六进制数据字符串
    QChar  ch0('0');                    //用于填充的字符
    int base = 16;
    int count = 0;                      //单行像素数计数
    for(int y = 0;y < H;y++){           //从上到下逐像素处理
        QApplication::processEvents();
        for(int x = 0;x < W;x++){           //从左到右逐像素处理
            QRgb rgb = m_image.pixel(x,y);      //1像素的RGB颜色，格式为0xAARRGGBB
            quint16 red = qRed(rgb)  &  0x00F8;     //取高5位
            quint16 green = qGreen(rgb)   &  0x00FC;    //取高6位
            quint16 blue = qBlue(rgb)      & 0x00f8;    //取高5位
            quint16  rgb565 = (red << 8) | (green << 3) | (blue >> 3);           //RGB565数据
            quint8  byteLSB = rgb565  &  0x00F;         //低字节
            quint8  byteMSB = rgb565 >> 8;              //高字节
            if(ui->radioButton_LowBitForward->isChecked())
                onePixel += QString("0x%1,0x%2,").arg(byteLSB,2,base,ch0).arg(byteMSB,2,base,ch0);
            else
                onePixel += QString("0x%1,0x%2,").arg(byteMSB,2,base,ch0).arg(byteLSB,2,base,ch0);
            count++;
            if(count == 8){
                onePixel = onePixel.toUpper();
                onePixel = onePixel.replace(QChar('X'),"x");
                ui->plainTextEdit->appendPlainText(onePixel);
                onePixel = "";
                count = 0;
            }
        }
    }
    if(count > 0){          //最后不足8像素的数据
        onePixel = onePixel.toUpper();
        onePixel = onePixel.replace(QChar('X'),"x");
        ui->plainTextEdit->appendHtml(onePixel);
    }
    ui->plainTextEdit->appendPlainText("};");           //数组结尾字符
    ui->tabWidget->setCurrentIndex(1);
    ui->pushButton_SaveDateFile->setEnabled(true);
    QMessageBox::information(this,"提示","RGB565数据生成已完成");
}


void MainWindow::on_pushButton_SaveDateFile_clicked()
{
    //保存数据文件 按钮
    QFileInfo fileInfo(m_filename);
    QString newName = fileInfo.baseName()+ ".h";           //更改文件名后缀
    QString filter = "C语言头文件(*.h);;C语言程序文件(*.c);;文本文件(*.txt)";
    QString fileName = QFileDialog::getSaveFileName(this,"保存文件",newName,filter);
    if(fileName.isEmpty())
        return;
    QFile aFile(fileName);
    if(aFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        QString str = ui->plainTextEdit->toPlainText();
        QByteArray  strBytes = str.toUtf8();            //转换为字节数组，UTF-8编码
        aFile.write(strBytes,strBytes.length());            //写入文件
        aFile.close();
    }
}


void MainWindow::on_action_Preview_triggered()
{
    //打印预览 按钮
    QPrintPreviewDialog  previewDlg(this);              //打印预览对话框
    previewDlg.setWindowFlag(Qt::WindowMaximizeButtonHint);             //具有最大化按钮
    if(ui->tabWidget->currentIndex() == 1)
        connect(&previewDlg,SIGNAL(paintRequested(QPrinter*)),this,SLOT(do_PaintRequestedText(QPrinter*)));
    else
        connect(&previewDlg,SIGNAL(paintRequested(QPrinter*)),this,SLOT(do_paintRequestedImage(QPrinter*)));
    previewDlg.exec();
}

void MainWindow::do_paintRequestedImage(QPrinter *printer){
    QPainter    painter(printer);     //打印机的画笔
    printImage(&painter,printer);
}

void MainWindow::printImage(QPainter *painter, QPrinter *printer){
    //打印图像
    QMargins margin(20,40,20,40);       //上、下、左、右4个边距，单位：像素
    QRectF pageRect = printer->pageRect(QPrinter::DevicePixel);       //单位：像素
    int pageW = pageRect.width();
    int pageH = pageRect.height();              //打印业面的高度，单位：像素

    const int lineInc = 20;                     //一行文字所占的行高度
    int curX = margin.left();                   //当前X坐标
    int curY = margin.top();                    //当前Y坐标
    painter->drawText(curX,curY,m_filename);      //打印图片文件名
    curY += lineInc;                            //移动到下一行

    painter->drawText(curX,curY,QString("Page With = %1 像素").arg(pageW));
    painter->drawText(200,curY,QString("Image width = %1 像素").arg(m_image.width()));
    curY += lineInc;
    painter->drawText(curX,curY,QString("Page Height = %1 像素").arg(pageH));
    painter->drawText(200,curY,QString("Image height = %1 像素").arg(m_image.height()));
    curY += lineInc;

    int spaceH = pageH - curY;                           // 页面剩余高度
    //图像未超出页面范围，居中显示实际大小的图片
    if((pageW > m_image.width()) && (spaceH > m_image.height())){
        curX = (pageW - m_image.width()) / 2;            //水平居中
        painter->drawImage(curX,curY,m_image);           //打印图象
        return;
    }
    //图像高度或宽度超出页面剩余空间，缩放后打印
    QImage newImg;
    if(m_image.height() > m_image.width())
        newImg = m_image.scaledToHeight(spaceH);            //按高度缩放
    else
        newImg = m_image.scaledToWidth(pageW);              //按宽度缩放
    curX = (pageW - newImg.width()) / 2;                    //水平居中
    painter->drawImage(curX,curY,newImg);                   //打印图像

}

void MainWindow::do_PaintRequestedText(QPrinter *printer){
    QPainter painter(printer);             //打印机画笔
    printRGB565Data(&painter,printer);
}

void MainWindow::printRGB565Data(QPainter *painter, QPrinter *printer){
    //打印文档
    QMargins    margin(20,40,20,40);                  //上、下、左、右四个边距
    QRectF   pageRect = printer->pageRect(QPrinter::DevicePixel);       //单位：像素
    int pageW = pageRect.width();           //打印页面的宽度，单位：像素
    int pageH = pageRect.height();

    const int lineInc = 25;                 //一行文字所点的行高度，单位：像素
    int curX = margin.left();               //当前x坐标
    int curY = margin.top();                //当前Y坐标
    QFont  font = ui->plainTextEdit->font();
    painter->setFont(font);
    int pageNum = 1;                        //打印页编号
    painter->drawLine(margin.left(),pageH - margin.bottom() + 1,pageW - margin.right(),pageH - margin.bottom() + 1);           //页脚画线
    painter->drawText(pageW - 5 * margin.right(),pageH - margin.bottom() + 20,QString("第%1页").arg(pageNum));

    QTextDocument *doc = ui->plainTextEdit->document();                     //文本对象
    int cnt = doc->blockCount();                                            //回车符是一个块
    for(int i = 0;i < cnt;i++){
        QTextBlock textLine = doc->findBlockByNumber(i);
        QString  str = textLine.text();
        painter->drawText(curX,curY,str);
        curY += lineInc;                    //换到下一行
        if(curY >= (pageH - margin.bottom())){
            printer->newPage();             //新建一个打印页
            curY = margin.top();
            pageNum++;
            painter->drawLine(margin.left(),pageH - margin.bottom() + 1,pageW - margin.right(),pageH - margin.bottom() + 1);
            painter->drawText(pageW - 5 * margin.right(),pageH - margin.bottom() + 20,QString("第 %1 页").arg(pageNum));       //页脚页面编号
        }
    }
}


void MainWindow::on_action_Print_triggered()
{
    //打印 按钮
    QPrinter  printer;
    QPrintDialog printDialog(&printer,this);    //设置打印对话框，设置对象是printer
    if(printDialog.exec() == QDialog::Accepted){
        QPainter painter(&printer);          //打印机画笔
        if(ui->tabWidget->currentIndex() == 0)
            printImage(&painter,&printer);              //打印图像
        else
            printRGB565Data(&painter,&printer);         //打印文本
    }
}

