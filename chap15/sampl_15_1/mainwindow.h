#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include    <QMediaPlayer>
#include    <QMediaPlaylist>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
    QString duratuinTime;   //总时长
    QString positionTime;   //当前进度
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void on_stateChanged(QMediaPlayer::State state);
    void on_positionChanged(qint64 position);
    void on_durationChanged(qint64 duration);
    void on_PlayListIndexChanged(int index);
    void on_btnAdd_clicked();
    void on_btnRemove_clicked();
    void on_btnClear_clicked();
    void on_listWidget_doubleClicked(const QModelIndex &index);
    void on_btnPlay_clicked();
    void on_btnPause_clicked();
    void on_btnStop_clicked();
    void on_btnPrevious_clicked();
    void on_btnNext_clicked();
    void on_sliderVolumn_valueChanged(int value);
    void on_sliderPosition_valueChanged(int value);
    void on_btnSound_clicked();
};

#endif // MAINWINDOW_H
