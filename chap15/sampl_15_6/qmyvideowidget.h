#ifndef QMYVIDEOWIDGET_H
#define QMYVIDEOWIDGET_H

#include <QVideoWidget>
#include <QMediaPlayer>

class QmyVideoWidget : public QVideoWidget
{
    Q_OBJECT
public:
    explicit QmyVideoWidget(QWidget *parent = nullptr);
    void setMediaPlayer(QMediaPlayer *player);
protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);

signals:

public slots:
private:
    QMediaPlayer *thePlayer;
};

#endif // QMYVIDEOWIDGET_H
