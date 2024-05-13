#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QFileDialog>
#include    <QMessageBox>
#include    <QSoundEffect>
#include    <QSound>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    LabCameraState=new QLabel("摄像头state: ");
    LabCameraState->setMinimumWidth(150);
    ui->statusBar->addWidget(LabCameraState);

    LabCameraMode=new QLabel("抓取模式: ");
    LabCameraMode->setMinimumWidth(150);
    ui->statusBar->addWidget(LabCameraMode);

    LabInfo=new QLabel("");
//    LabInfo->setMinimumWidth(200);
    ui->statusBar->addPermanentWidget(LabInfo);

    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
    if (cameras.size()>0)
    {
        iniCamera();  //初始化摄像头
        iniImageCapture();//初始化静态画图
        //iniVideoRecorder();//初始化视频录制
        curCamera->start();
    }
}

void MainWindow::iniCamera()
{//  创建  QCamera对象
    QCameraInfo curCameraInfo=QCameraInfo::defaultCamera(); //获取缺省摄像头
    ui->comboCamera->addItem(curCameraInfo.description());//摄像头描述
    ui->comboCamera->setCurrentIndex(0);

    curCamera=new QCamera(curCameraInfo,this); //创建摄像头对象

    QCameraViewfinderSettings viewfinderSettings;
    viewfinderSettings.setResolution(640, 480);
    curCamera->setViewfinderSettings(viewfinderSettings);

    curCamera->setViewfinder(ui->viewFinder); //设置取景框预览
    curCamera->setCaptureMode(QCamera::CaptureStillImage);//设置为抓图

    ui->checkStillImage->setChecked(
            curCamera->isCaptureModeSupported(QCamera::CaptureStillImage)); //支持抓图
    ui->checkVideo->setChecked(
            curCamera->isCaptureModeSupported(QCamera::CaptureVideo));//支持视频录制

    connect(curCamera,SIGNAL(stateChanged(QCamera::State)),
            this,SLOT(on_cameraStateChanged(QCamera::State)));

//Windows平台上不支持captureModeChanged()信号
    connect(curCamera,SIGNAL(captureModeChanged(QCamera::CaptureModes)),
            this,SLOT(on_cameraCaptureModeChanged(QCamera::CaptureModes)));

}

void MainWindow::iniImageCapture()
{//创建 QCameraImageCapture对象
    imageCapture = new QCameraImageCapture(curCamera,this);

    imageCapture->setBufferFormat(QVideoFrame::Format_Jpeg); //缓冲区格式
    imageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile); //保存目标

    connect(imageCapture, SIGNAL(readyForCaptureChanged(bool)),
            this, SLOT(on_imageReadyForCapture(bool)));
    connect(imageCapture,SIGNAL(imageCaptured(int, const QImage &)),
            this,SLOT(on_imageCaptured(int, const QImage &)));
    connect(imageCapture,SIGNAL(imageSaved(int, const QString &)),
            this,SLOT(on_imageSaved(int, const QString &)));
}

void MainWindow::iniVideoRecorder()
{//创建QMediaRecorder对象
    mediaRecorder = new QMediaRecorder(curCamera,this);

    ui->chkMute->setChecked(mediaRecorder->isMuted());
    connect(mediaRecorder, SIGNAL(stateChanged(QMediaRecorder::State)),
            this, SLOT(on_videoStateChanged(QMediaRecorder::State)));
    connect(mediaRecorder, SIGNAL(durationChanged(qint64)),
            this, SLOT(on_videoDurationChanged(qint64)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cameraStateChanged(QCamera::State state)
{
  switch (state)
  {
    case QCamera::UnloadedState:
      LabCameraState->setText("摄像头state: UnloadedState");
      break;
    case QCamera::LoadedState:
      LabCameraState->setText("摄像头state: LoadedState");
      break;
    case QCamera::ActiveState:
      LabCameraState->setText("摄像头state: ActiveState");
  }

  ui->actStartCamera->setEnabled(state!=QCamera::ActiveState);
  ui->actStopCamera->setEnabled(state==QCamera::ActiveState);
}

void MainWindow::on_cameraCaptureModeChanged(QCamera::CaptureModes mode)
{
    if (mode==QCamera::CaptureStillImage)
        LabCameraMode->setText("抓取模式: StillImage");
    else if (mode==QCamera::CaptureVideo)
        LabCameraMode->setText("抓取模式: Video");
    else
        LabCameraMode->setText("抓取模式: Viewfinder");
}

void MainWindow::on_imageReadyForCapture(bool ready)
{
//    bool  ok=(ready  && curCamera->captureMode()==QCamera::CaptureStillImage);
    ui->actCapture->setEnabled(ready);
}

void MainWindow::on_imageCaptured(int id, const QImage &preview)
{
    Q_UNUSED(id);
    QImage scaledImage = preview.scaled(ui->LabCapturedImage->size(),
                     Qt::KeepAspectRatio,  Qt::SmoothTransformation);
    ui->LabCapturedImage->setPixmap(QPixmap::fromImage(scaledImage));
}

void MainWindow::on_imageSaved(int id, const QString &fileName)
{
    Q_UNUSED(id);
    LabInfo->setText("图片保存为： "+fileName);
}

void MainWindow::on_videoStateChanged(QMediaRecorder::State state)
{//状态变化
//    bool  ok=(curCamera->captureMode()==QCamera::CaptureVideo);
    ui->actVideoRecord->setEnabled(state!=QMediaRecorder::RecordingState);
    ui->actVideoStop->setEnabled(state==QMediaRecorder::RecordingState);

    ui->chkMute->setEnabled(ui->actVideoRecord->isEnabled());
}

void MainWindow::on_videoDurationChanged(qint64 duration)
{
    ui->LabDuration->setText(QString("录制时间:%1 秒").arg(duration/1000));
}

void MainWindow::on_actCapture_triggered()
{//抓图 按钮
    if (curCamera->captureMode()!=QCamera::CaptureStillImage)
    {
        curCamera->setCaptureMode(QCamera::CaptureStillImage);
    }

    QString filename=QCoreApplication::applicationDirPath()+"/shutter.wav";
    QSound::play(filename); //播放快门音效

    imageCapture->capture();
}

void MainWindow::on_actStartCamera_triggered()
{
    curCamera->start();
}

void MainWindow::on_actStopCamera_triggered()
{
    curCamera->stop();
}

void MainWindow::on_actVideoRecord_triggered()
{//开始录像
//    ui->LabCapturedImage->clear();

    if (!mediaRecorder->isAvailable())
    {
        QMessageBox::critical(this,"错误",
               "不支持视频录制！\n mediaRecorder->isAvailable()==false");
        return;
    }
    if (curCamera->captureMode()!=QCamera::CaptureVideo)
    {
        curCamera->setCaptureMode(QCamera::CaptureVideo);
        return;
    }

    QString selectedFile=ui->editOutputFile->text().trimmed();
    if (selectedFile.isEmpty())
    {
        QMessageBox::critical(this,"错误","请先设置录像输出文件");
        return;
    }

    if (QFile::exists(selectedFile))
     if (!QFile::remove(selectedFile))
     {
       QMessageBox::critical(this,"错误","所设置录音输出文件被占用，无法删除");
        return;
     }

    mediaRecorder->setOutputLocation(QUrl::fromLocalFile(selectedFile));
    mediaRecorder->record();
}

void MainWindow::on_actVideoStop_triggered()
{//停止录像
    mediaRecorder->stop();
}

