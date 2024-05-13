#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    //player->setNotifyInterval(2000);
    player->setVideoOutput(ui->videoWidget);
    ui->videoWidget->setMediaPlayer(player);
    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),this,SLOT(on_stateChanged(QMediaPlayer::State)));
    connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(on_durationChanged(qint64)));
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(on_positionChanged(qint64)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_stateChanged(QMediaPlayer::State state)
{
    ui->btnPlay->setEnabled(!(state==QMediaPlayer::PlayingState));
    ui->btnPause->setEnabled(state==QMediaPlayer::PlayingState);
    ui->btnStop->setEnabled(state==QMediaPlayer::PlayingState||state==QMediaPlayer::PausedState);
}

void MainWindow::on_durationChanged(qint64 duration)
{
    ui->sliderPosition->setMaximum(duration);
    int secs = duration/1000;
    int mins = secs/60;
    secs = secs % 60;
    durationTime = QString::asprintf("%d:%d",mins,secs);
    ui->LabRatio->setText(positionTime + "/" +durationTime);
}

void MainWindow::on_positionChanged(qint64 position)
{
    if(ui->sliderPosition->isSliderDown()) return;

    ui->sliderPosition->setValue(position);
    int secs = position/1000;
    int mins = secs/60;
    secs = secs % 60;
    positionTime = QString::asprintf("%d:%d",mins,secs);
    ui->LabRatio->setText(positionTime + "/" +durationTime);
}

void MainWindow::on_btnAdd_clicked()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择视频","","mp4文件(*.mp4);;所有文件(*.*)");
    if(aFile.isEmpty()) return;
    QFileInfo fileInfo(aFile);
    ui->LabCurMedia->setText(fileInfo.fileName());
    player->setMedia(QUrl::fromLocalFile(aFile));
    player->play();
}

void MainWindow::on_btnPlay_clicked()
{
    player->play();
}

void MainWindow::on_btnPause_clicked()
{
    player->pause();
}

void MainWindow::on_btnStop_clicked()
{
    player->stop();
}

void MainWindow::on_btnSound_clicked()
{
    bool mute = player->isMuted();
    player->setMuted(!mute);
    mute=player->isMuted();
    if (mute)
        ui->btnSound->setIcon(QIcon(":/images/images/volumn.bmp"));
    else
        ui->btnSound->setIcon(QIcon(":/images/images/mute.bmp"));
}

void MainWindow::on_sliderVolumn_valueChanged(int value)
{
    player->setVolume(value);
}

void MainWindow::on_sliderPosition_valueChanged(int value)
{
    player->setPosition(value);
}

void MainWindow::on_pushButton_clicked()
{
    ui->videoWidget->setFullScreen(true);
}
