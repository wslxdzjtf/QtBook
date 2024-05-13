#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labSocketState = new QLabel("Socket状态：");
    labSocketState->setMinimumWidth(200);
    ui->statusBar->addWidget(labSocketState);

    setWindowTitle("客户端：" + getLocalIP());
    tcpSocket = new QTcpSocket(this);

    connect(tcpSocket,SIGNAL(connected()),this,SLOT(onConnected()));
    connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(onDisconnected()));
    connect(tcpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),SLOT(onStateChanged(QAbstractSocket::SocketState)));
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(onSocketReadyRead()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actClear_triggered()
{
    ui->plainTextEdit->clear();
}

QString MainWindow::getLocalIP()
{
    QString hostName = QHostInfo::localHostName();
    QHostInfo hostInfo = QHostInfo::fromName(hostName);
    QString localIP = "";
    QList<QHostAddress> addList = hostInfo.addresses();
    if(addList.isEmpty()) return localIP;
    foreach (auto aHost, addList) {
        if(aHost.protocol() == QAbstractSocket::IPv4Protocol){
            localIP = aHost.toString();
            break;
        }
    }
    return localIP;
}

void MainWindow::onConnected()
{
    ui->plainTextEdit->appendPlainText("**socket connected");
    ui->plainTextEdit->appendPlainText("**peer address：" + tcpSocket->peerAddress().toString());
    ui->plainTextEdit->appendPlainText("**peer port：" + QString::number(tcpSocket->peerPort()));

    ui->actConnect->setEnabled(false);
    ui->actDisconnect->setEnabled(true);
}

void MainWindow::onDisconnected()
{
    ui->plainTextEdit->appendPlainText("**socket disconnected");
    ui->actConnect->setEnabled(true);
    ui->actDisconnect->setEnabled(false);
}

void MainWindow::onStateChanged(QAbstractSocket::SocketState state)
{
    switch (state) {
    case QAbstractSocket::UnconnectedState: //未连接
        labSocketState->setText("socket状态：UnconnectedState");
        break;
    case QAbstractSocket::HostLookupState:  //寻找中
        labSocketState->setText("socket状态：HostLookupState");
        break;
    case QAbstractSocket::ConnectingState:  //连接中
        labSocketState->setText("socket状态：ConnectingState");
        break;
    case QAbstractSocket::ConnectedState:  //连接好
        labSocketState->setText("socket状态：ConnectedState");
        break;
    case QAbstractSocket::BoundState:  //
        labSocketState->setText("socket状态：BoundState");
        break;
    case QAbstractSocket::ListeningState:  //
        labSocketState->setText("socket状态：ListeningState");
        break;
    case QAbstractSocket::ClosingState:  //
        labSocketState->setText("socket状态：ClosingState");
        break;
    default:
        break;
    }
}

//读消息
void MainWindow::onSocketReadyRead()
{
    while (tcpSocket->canReadLine())
        ui->plainTextEdit->appendPlainText("[in] "+tcpSocket->readLine());
}

void MainWindow::on_actConnect_triggered()
{
    QString addr = ui->comboServer->currentText();
    int port = ui->spinPort->value();
    tcpSocket->connectToHost(addr,port);
}

void MainWindow::on_actDisconnect_triggered()
{
    if(tcpSocket->state()==QAbstractSocket::ConnectedState)
        tcpSocket->disconnectFromHost();
}

void MainWindow::on_btnSend_clicked()
{
    QString msg = ui->editMsg->text();
    ui->plainTextEdit->appendPlainText("[out] "+msg);
    ui->editMsg->clear();
    ui->editMsg->setFocus();

    QByteArray str = msg.toUtf8();
    str.append('\n');
    tcpSocket->write(str);
}
