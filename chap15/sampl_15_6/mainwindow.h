#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include    <QMediaPlayer>
#include    <QMediaPlaylist>
#include    <QVideoWidget>
#include <QGraphicsVideoItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaPlayer *player;
    QString durationTime;
    QString positionTime;
    QGraphicsVideoItem *videoItem;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void on_stateChanged(QMediaPlayer::State state);
    void on_durationChanged(qint64 duration);
    void on_positionChanged(qint64 position);
    void on_btnAdd_clicked();
    void on_btnPlay_clicked();
    void on_btnPause_clicked();
    void on_btnStop_clicked();
    void on_btnSound_clicked();
    void on_sliderVolumn_valueChanged(int value);
    void on_sliderPosition_valueChanged(int value);
};

#endif // MAINWINDOW_H
