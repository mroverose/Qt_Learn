#ifndef TMYLABEL_H
#define TMYLABEL_H

#include <QLabel>

class TMyLabel : public QLabel
{
    Q_OBJECT
public:
    TMyLabel(QWidget *parent = nullptr);
    bool event(QEvent *e);
protected:
    void mouseDoubleClickEvent(QMouseEvent *event);
signals:
    void  doubleClicked();
};

#endif // TMYLABEL_H
