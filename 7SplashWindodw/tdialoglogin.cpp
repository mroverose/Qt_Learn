#include "tdialoglogin.h"
#include "ui_tdialoglogin.h"
#include <QSettings>
#include <QCryptographicHash>
#include <QMessageBox>
#include <QMouseEvent>

TDialogLogin::TDialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TDialogLogin)
{
    ui->setupUi(this);
  //  QPixmap  pixmap(":/splash.jpeg");
  //  ui->label_picture->setPixmap(pixmap);
  //  ui->label_picture->setScaledContents(true);
    ui->lineEdit_PassWord->setEchoMode(QLineEdit::Password);
  //  this->setWindowState(Qt::WindowFullScreen);
    this->setAttribute(Qt::WA_DeleteOnClose);           //对话框关闭时自动删除
    this->setWindowFlags(Qt::SplashScreen);              //窗口无边框，不在任务栏显示
    QApplication::setOrganizationName("WWB-Qt");        //设置组织名
    QApplication::setApplicationName("SplashLogin");    //设置应用程序名称
    readSetting();                //读取存储的用户名和密码
}

TDialogLogin::~TDialogLogin()
{
    delete ui;
}

void TDialogLogin::readSetting(){
    //读取存储的用户名和密码，密码是经过加密的
    QSettings  settings;
    bool saved = settings.value("saved",false).toBool();   //读取saved键的值
    m_user = settings.value("Username","user").toString();  //读取Username键的值
    QString defaultPwd = encrpt("123456");                    //默认密码加密后的数据
    m_pswd = settings.value("PSWD",defaultPwd).toString();      //读取PSWD键的值
    if(saved)ui->lineEdit_UserName->setText(m_user);
    ui->checkBox->setChecked(saved);
}

void TDialogLogin::writeSetting(){
    //保存用户名、密码等设置
    QSettings  settings;
    settings.setValue("Username",m_user);                   //用户名
    settings.setValue("PSWD",m_pswd);                      //密码，经过加密的
    settings.setValue("saved",ui->checkBox->isChecked());
}


QString TDialogLogin::encrpt(const QString &str){
    QByteArray  btArray = str.toLocal8Bit();       //字符串转换为字节数组数据
    QCryptographicHash  hash(QCryptographicHash::Md5);          //使用MD5加密算法
    hash.addData(btArray);                                      //添加数据到加密哈希值
    QByteArray  resultArray = hash.result();                    //返回最终的哈希值
    QString md5 = resultArray.toHex();                          //转换成16进制字符串
    return md5;
}


void TDialogLogin::on_pushButton_OK_clicked()
{
    QString user = ui->lineEdit_UserName->text().trimmed();        //输入的用户名
    QString pswd = ui->lineEdit_PassWord->text().trimmed();        //输入的密码
    QString encrptPSWD = encrpt(pswd);                              //对输入的密码进行加密
    if((user == m_user) && (encrptPSWD == m_pswd)){
        writeSetting();                                             //保存设置
        this->accept();                                            //调用accept()关闭对话框
    }
    else{
        m_tryCount++;
        if(m_tryCount > 3){
            QMessageBox::critical(this,"错误","输入错误次数太多，强行退出");
            this->reject();                                       //调用reject(),关闭对话框
        }
        else QMessageBox::warning(this,"错误提示","用户名或密码错误");
    }
}


void TDialogLogin::mousePressEvent(QMouseEvent *event){
    //鼠标按键被按下
    if(event->button() == Qt::LeftButton){
        m_moving = true;
        m_lastPos = event->globalPosition().toPoint() - this->pos();
      //  m_lastPos - event->position().toPoint() - this->pos();
    }
    return QDialog::mousePressEvent(event);
}

void TDialogLogin::mouseMoveEvent(QMouseEvent *event){
    //按下鼠标左键进行移动
   QPoint  eventPos = event->globalPosition().toPoint();
  //   QPoint  eventPos = event->position().toPoint();
    if(m_moving && (event->buttons() & Qt::LeftButton) &&
        (eventPos - m_lastPos).manhattanLength() > QApplication::startDragDistance()){
        move(eventPos - m_lastPos);
        m_lastPos = eventPos - this->pos();
    }
    return QDialog::mouseMoveEvent(event);
}


void TDialogLogin::mouseReleaseEvent(QMouseEvent *event){
    //鼠标按键被释放
    m_moving = false;                        //停止移动
    event->accept();
}
