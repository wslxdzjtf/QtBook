#include "qmyvideowidget.h"
#include <QKeyEvent>
#include <QMouseEvent>

QmyVideoWidget::QmyVideoWidget(QWidget *parent) : QVideoWidget(parent)
{

}

void QmyVideoWidget::setMediaPlayer(QMediaPlayer *player)
{
    thePlayer = player;
}

void QmyVideoWidget::keyPressEvent(QKeyEvent *event)
{
    if((event->key()==Qt::Key_Escape) && isFullScreen())
        setFullScreen(false);
    QVideoWidget::keyPressEvent(event);
}

void QmyVideoWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        if(thePlayer->state()==QMediaPlayer::PlayingState)
            thePlayer->pause();
        else
            thePlayer->play();
    }
    QVideoWidget::mousePressEvent(event);
}
