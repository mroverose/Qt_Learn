#ifndef TMYVIDEOWIDGET_H
#define TMYVIDEOWIDGET_H

#include <QVideoWidget>
#include <QtMultimedia>

class TMyVideoWidget : public QVideoWidget
{
    Q_OBJECT
private:
    QMediaPlayer      *m_player;
protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
public:
    TMyVideoWidget(QWidget *parent = nullptr);
    void setMediaPlayer(QMediaPlayer *player);
};

#endif // TMYVIDEOWIDGET_H
