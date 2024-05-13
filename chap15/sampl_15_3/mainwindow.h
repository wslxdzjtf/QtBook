#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAudioRecorder>
#include <QAudioProbe>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QAudioRecorder *recorder;
    QAudioProbe *probe;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void on_stateChanged(QMediaRecorder::State state);
    void on_durationChanged(qint64 duration);
    void on_audioBufferProbed(QAudioBuffer buffer);
    void on_btnGetFile_clicked();
    void on_actPause_triggered();
    void on_actStop_triggered();
    void on_actRecord_triggered();
};

#endif // MAINWINDOW_H
