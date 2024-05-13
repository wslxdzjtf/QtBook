#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include    <QNetworkAccessManager>
#include    <QNetworkReply>
#include    <QFile>
#include    <QUrl>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QNetworkAccessManager networkManager;
    QNetworkReply *reply;
    QFile *downloadFile;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void on_finished();
    void on_readyRead();
    void on_downloadProgress(qint64 bytesRead,qint64 totalBytes);
    void on_btnDefaultPath_clicked();
    void on_btnDownload_clicked();
};

#endif // MAINWINDOW_H
