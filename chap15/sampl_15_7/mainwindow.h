#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include    <QCameraInfo>
#include    <QCamera>
#include    <QLabel>

#include    <QCameraViewfinder>
#include    <QCameraImageCapture>
#include    <QMediaRecorder>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QCamera     *curCamera=Q_NULLPTR;//

    QCameraImageCapture *imageCapture; //抓图
    QMediaRecorder* mediaRecorder;//录像

    QLabel   *LabCameraState;
    QLabel   *LabInfo;
    QLabel   *LabCameraMode;

    void    iniCamera();//初始化
    void    iniImageCapture();//初始化静态画图
    void    iniVideoRecorder();//初始化视频录制
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
//QCamera的槽函数
    void    on_cameraStateChanged(QCamera::State state);
    void    on_cameraCaptureModeChanged(QCamera::CaptureModes mode);

//QCameraImageCapture的槽函数
    void    on_imageReadyForCapture(bool ready);
    void    on_imageCaptured(int id, const QImage &preview);
    void    on_imageSaved(int id, const QString &fileName);

// QMediaRecorder的槽函数
    void    on_videoStateChanged(QMediaRecorder::State state);
    void    on_videoDurationChanged(qint64 duration);

    void on_actCapture_triggered();

    void on_actStartCamera_triggered();

    void on_actStopCamera_triggered();

    void on_actVideoRecord_triggered();

    void on_actVideoStop_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
