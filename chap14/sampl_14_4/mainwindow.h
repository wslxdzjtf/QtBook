#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include    <QUdpSocket>
#include    <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel * LabSocketState;
    QUdpSocket * udpSocket;
    QHostAddress groupAddress;
    QString getLocalIP();//获取本机IP地址
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onSocketStateChange(QAbstractSocket::SocketState socketState);
    void on_actClear_triggered();
    void onSocketReadyRead();

    void on_actStart_triggered();

    void on_actStop_triggered();

    void on_btnMulticast_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
