#include "dialog.h"
#include "ui_dialog.h"

QString Dialog::protocolName(QAbstractSocket::NetworkLayerProtocol protocol)
{
//    switch (protocol) {
//    case QAbstractSocket::IPv4Protocol:
//        return "IPv4 protocol";
//    case QAbstractSocket::IPv6Protocol:
//        return "IPv6 protocol";
//    case QAbstractSocket::AnyIPProtocol:
//        return "Any IP protocol";
//    default:
//        return "UnKnown Network Layer Protocol";
//    }

    switch(protocol)
    {
      case QAbstractSocket::IPv4Protocol:
          return "IPv4 Protocol";
      case QAbstractSocket::IPv6Protocol:
        return "IPv6 Protocol";
      case QAbstractSocket::AnyIPProtocol:
        return "Any IP Protocol";
      default:
        return "Unknown Network Layer Protocol";
     }
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

//QHostInfo 获取本机主机名和IP地址
void Dialog::on_btnGetHostInfo_clicked()
{
    ui->plainTextEdit->clear();
    QString hostName = QHostInfo::localHostName();  //本地主机名
    ui->plainTextEdit->appendPlainText("本机主机名："+hostName+"\n");
    QHostInfo hostInfo = QHostInfo::fromName(hostName);

    QList<QHostAddress> addList = hostInfo.addresses();
    if(addList.isEmpty()) return;
    bool show;
    foreach (auto aHost, addList) {
        if(ui->chkOnlyIPv4->isChecked())
            show = (aHost.protocol()==QAbstractSocket::IPv4Protocol);
        else
            show = true;
        if(show){
            ui->plainTextEdit->appendPlainText("协议："+protocolName(aHost.protocol()));
            ui->plainTextEdit->appendPlainText("本机IP地址："+aHost.toString());
            ui->plainTextEdit->appendPlainText("");
        }
    }
}

void Dialog::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}

void Dialog::on_btnLookup_clicked()
{
    ui->plainTextEdit->clear();
    //异步的方式
    QString hostName = ui->editHost->text();
    ui->plainTextEdit->appendPlainText("正在查询的主机信息：" + hostName);
    QHostInfo::lookupHost(hostName,this,SLOT(lookedUpHostInfo(QHostInfo)));
}

void Dialog::lookedUpHostInfo(const QHostInfo &host)
{
    QList<QHostAddress> addList = host.addresses();
    if(addList.isEmpty()) return;
    bool show;
    foreach (auto aHost, addList) {
        if(ui->chkOnlyIPv4->isChecked())
            show = (aHost.protocol()==QAbstractSocket::IPv4Protocol);
        else
            show = true;
        if(show){
            ui->plainTextEdit->appendPlainText("协议："+protocolName(aHost.protocol()));
            ui->plainTextEdit->appendPlainText("IP地址："+aHost.toString());
            ui->plainTextEdit->appendPlainText("");
        }
    }
}

void Dialog::on_btnDetail_clicked()
{
    ui->plainTextEdit->clear();
    QList<QHostAddress> addList = QNetworkInterface::allAddresses();
    if(addList.isEmpty()) return;
    bool show;
    foreach (auto aHost, addList) {
        if(ui->chkOnlyIPv4->isChecked())
            show = (aHost.protocol()==QAbstractSocket::IPv4Protocol);
        else
            show = true;
        if(show){
            ui->plainTextEdit->appendPlainText("协议："+protocolName(aHost.protocol()));
            ui->plainTextEdit->appendPlainText("IP地址："+aHost.toString());
            ui->plainTextEdit->appendPlainText("");
        }
    }
}

void Dialog::on_btnALLInterface_clicked()
{
    ui->plainTextEdit->clear();
    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();
    foreach (auto aInterface, list) {
        if(!aInterface.isValid()) continue;

        ui->plainTextEdit->appendPlainText("设备名称：" + aInterface.humanReadableName());
        ui->plainTextEdit->appendPlainText("硬件地址：" + aInterface.hardwareAddress());
        QList<QNetworkAddressEntry> entryList = aInterface.addressEntries();
        foreach (auto aEntry, entryList) {
            ui->plainTextEdit->appendPlainText("    IP地 址：" + aEntry.ip().toString());
            ui->plainTextEdit->appendPlainText("    子网掩码：" + aEntry.netmask().toString());
            ui->plainTextEdit->appendPlainText("    广播地址：" + aEntry.broadcast().toString());
        }
        ui->plainTextEdit->appendPlainText("");
    }
}
