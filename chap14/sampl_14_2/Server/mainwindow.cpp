#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostInfo>

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

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lablisten = new QLabel("监听状态：");
    lablisten->setMinimumWidth(200);
    ui->statusBar->addWidget(lablisten);
    labSocketState = new QLabel("Socket状态：");
    labSocketState->setMinimumWidth(200);
    ui->statusBar->addWidget(labSocketState);

    setWindowTitle("服务器：" + getLocalIP());
    tcpServer = new QTcpServer(this);
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(onNewConnected()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(tcpServer->isListening()){
        tcpServer->close();
    }
    event->accept();
}

void MainWindow::onNewConnected()
{
    tcpSocket = tcpServer->nextPendingConnection(); //获取socket
    connect(tcpSocket,SIGNAL(connected()),this,SLOT(onClientConnected()));
    onClientConnected();
    connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(onClientDisconnected()));
    connect(tcpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),SLOT(onClientStateChanged(QAbstractSocket::SocketState)));
    onClientStateChanged(tcpSocket->state());
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(onSocketReadyRead()));
}

void MainWindow::on_actStart_triggered()
{
    QString IP = ui->comboIP->currentText();
    int port = ui->spinPort->value();
    QHostAddress addr(IP);
    tcpServer->listen(addr,port);

    ui->plainTextEdit->appendPlainText("**开始监听");
    ui->plainTextEdit->appendPlainText("**服务器IP：" + tcpServer->serverAddress().toString());
    ui->plainTextEdit->appendPlainText("**服务器端口：" + QString::number(tcpServer->serverPort()));
    ui->actStart->setEnabled(false);
    ui->actStop->setEnabled(true);
    lablisten->setText("监听状态：ing");
}

void MainWindow::on_actStop_triggered()
{
    if(tcpServer->isListening()){
        tcpServer->close();
        ui->actStart->setEnabled(true);
        ui->actStop->setEnabled(false);
        lablisten->setText("监听状态：closed");
    }
}

void MainWindow::onClientConnected()
{
    ui->plainTextEdit->appendPlainText("**client socket connected");
    ui->plainTextEdit->appendPlainText("**peer address：" + tcpSocket->peerAddress().toString());
    ui->plainTextEdit->appendPlainText("**peer port：" + QString::number(tcpSocket->peerPort()));
}

void MainWindow::onClientDisconnected()
{
    ui->plainTextEdit->appendPlainText("**client socket disconnected");
    tcpSocket->deleteLater();
}

void MainWindow::onClientStateChanged(QAbstractSocket::SocketState state)
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

//写消息
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

void MainWindow::on_actClear_triggered()
{
    ui->plainTextEdit->clear();
}
