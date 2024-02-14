#include "tmyvideowidget.h"

TMyVideoWidget::TMyVideoWidget(QWidget *parent) : QVideoWidget(parent) {}

void TMyVideoWidget::setMediaPlayer(QMediaPlayer *player){
    //设置播放器
    m_player = player;
}

void TMyVideoWidget::keyPressEvent(QKeyEvent *event){
    //按键事件处理函数，按Esc键退出全屏
    if((event->key() == Qt::Key_Escape) && (isFullScreen())){
        setFullScreen(false);
        event->accept();
        QVideoWidget::keyPressEvent(event);
    }
}

void TMyVideoWidget::mousePressEvent(QMouseEvent *event){
    //鼠标处理函数，点击暂停播放或继续播放
    if(event->button() == Qt::LeftButton){
        if(m_player->playbackState() == QMediaPlayer::PlayingState)
            m_player->pause();
        else
            m_player->play();
    }
    QVideoWidget::mousePressEvent(event);
}
