#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *labSocketState;
    QTcpSocket *tcpSocket;  //客服
    QString getLocalIP();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actClear_triggered();
    void onConnected();
    void onDisconnected();
    void onStateChanged(QAbstractSocket::SocketState state);
    void onSocketReadyRead();

    void on_actConnect_triggered();

    void on_actDisconnect_triggered();

    void on_btnSend_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
