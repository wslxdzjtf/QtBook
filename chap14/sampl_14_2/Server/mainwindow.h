#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *lablisten;
    QLabel *labSocketState;
    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;  //客服
    QString getLocalIP();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void closeEvent(QCloseEvent *event);
private:
    Ui::MainWindow *ui;
private slots:
    void onNewConnected();
    void on_actStart_triggered();
    void on_actStop_triggered();
    void onClientConnected();
    void onClientDisconnected();
    void onClientStateChanged(QAbstractSocket::SocketState state);
    void onSocketReadyRead();
    void on_btnSend_clicked();
    void on_actClear_triggered();
};

#endif // MAINWINDOW_H
