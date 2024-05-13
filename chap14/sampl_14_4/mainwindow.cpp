#include "mainwindow.h"
#include "ui_mainwindow.h"
#include    <QtNetwork>


QString MainWindow::getLocalIP()
{
    QString hostName=QHostInfo::localHostName();//本地主机名
    QHostInfo   hostInfo=QHostInfo::fromName(hostName);
    QString   localIP="";

    QList<QHostAddress> addList=hostInfo.addresses();//

    if (!addList.isEmpty())
    for (int i=0;i<addList.count();i++)
    {
        QHostAddress aHost=addList.at(i);
        if (QAbstractSocket::IPv4Protocol==aHost.protocol())
        {
            localIP=aHost.toString();
            break;
        }
    }
    return localIP;
}

void MainWindow::onSocketStateChange(QAbstractSocket::SocketState socketState)
{
    switch(socketState)
    {
    case QAbstractSocket::UnconnectedState:
        LabSocketState->setText("scoket状态：UnconnectedState");
        break;
    case QAbstractSocket::HostLookupState:
        LabSocketState->setText("scoket状态：HostLookupState");
        break;
    case QAbstractSocket::ConnectingState:
        LabSocketState->setText("scoket状态：ConnectingState");
        break;

    case QAbstractSocket::ConnectedState:
        LabSocketState->setText("scoket状态：ConnectedState");
        break;

    case QAbstractSocket::BoundState:
        LabSocketState->setText("scoket状态：BoundState");
        break;

    case QAbstractSocket::ClosingState:
        LabSocketState->setText("scoket状态：ClosingState");
        break;

    case QAbstractSocket::ListeningState:
        LabSocketState->setText("scoket状态：ListeningState");
    }
}

void MainWindow::onSocketReadyRead()
{
    QByteArray datagram;
    datagram.resize(udpSocket->pendingDatagramSize());
    QHostAddress peerAddr;
    quint16 peerPort;
    udpSocket->readDatagram(datagram.data(),datagram.size(),&peerAddr,&peerPort);
    QString str = datagram.data();
    QString peer = ("[From " + peerAddr.toString() + ":" + QString::number(peerPort) + "] ");
    ui->plainTextEdit->appendPlainText(peer + str);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LabSocketState = new QLabel("Socket状态：");
    LabSocketState->setMaximumWidth(200);
    ui->statusBar->addWidget(LabSocketState);

    QString localIP = getLocalIP();
    setWindowTitle("UDP收发器：" + localIP);

    udpSocket = new QUdpSocket(this);
    connect(udpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),SLOT(onSocketStateChange(QAbstractSocket::SocketState)));
    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(onSocketReadyRead()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actClear_triggered()
{
    ui->plainTextEdit->clear();
}

void MainWindow::on_actStart_triggered()
{
    QString IP = ui->comboIP->currentText();
    groupAddress = QHostAddress(IP);
    int groupPort = ui->spinPort->value();
    if(udpSocket->bind(QHostAddress::AnyIPv4,groupPort,QUdpSocket::ShareAddress))
    {
        udpSocket->joinMulticastGroup(groupAddress);
        ui->plainTextEdit->appendPlainText("**加入组播成功");
        ui->plainTextEdit->appendPlainText("**组播IP：" + IP);
        ui->plainTextEdit->appendPlainText("**端口：" + QString::number(groupPort));
        ui->actStart->setEnabled(false);
        ui->actStop->setEnabled(true);
        ui->comboIP->setEnabled(false);
    }else
        ui->plainTextEdit->appendPlainText("**端口绑定失败");
}

void MainWindow::on_actStop_triggered()
{
    udpSocket->leaveMulticastGroup(groupAddress);
    udpSocket->abort();
    ui->actStart->setEnabled(true);
    ui->actStop->setEnabled(false);
    ui->comboIP->setEnabled(true);
    ui->plainTextEdit->appendPlainText("**已解除绑定");
    ui->plainTextEdit->appendPlainText("**已退出组播，解除端口绑定");
}

void MainWindow::on_btnMulticast_clicked()
{
    QString targetIP = ui->comboIP->currentText();
    QHostAddress targetAddr(targetIP);
    int targetPort = ui->spinPort->value();
    QString msg = ui->editMsg->text();
    QByteArray str = msg.toUtf8();
    udpSocket->writeDatagram(str,targetAddr,targetPort);
    ui->plainTextEdit->appendPlainText("[out]" + msg);
    ui->editMsg->clear();
    ui->editMsg->setFocus();
}
