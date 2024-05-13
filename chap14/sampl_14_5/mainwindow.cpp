#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_finished()
{
    QFileInfo fileInfo;
    fileInfo.setFile(downloadFile->fileName());
    downloadFile->close();
    delete downloadFile;
    downloadFile=Q_NULLPTR;
    reply->deleteLater();
    reply = Q_NULLPTR;
    if(ui->checkOpen->isChecked()){
        QDesktopServices::openUrl(QUrl::fromLocalFile(fileInfo.absolutePath()));
        ui->btnDownload->setEnabled(true);
    }
}

void MainWindow::on_readyRead()
{
    downloadFile->write(reply->readAll());
}

void MainWindow::on_downloadProgress(qint64 bytesRead, qint64 totalBytes)
{
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesRead);
}

void MainWindow::on_btnDefaultPath_clicked()
{
    QString curPath = QDir::currentPath();
    QDir dir(curPath);
    QString sub = "temp";
    dir.mkdir(sub);
    ui->editPath->setText(curPath + "/" + sub + "/");
}

void MainWindow::on_btnDownload_clicked()
{
    QString urlSpec = ui->editURL->text().trimmed();
    if(urlSpec.isEmpty()){
        QMessageBox::information(this,"error","请输入正确的URL地址");
        return;
    }

    QUrl newUrl = QUrl::fromUserInput(urlSpec);
    if(!newUrl.isValid()){
        QMessageBox::information(this,"error",QString("无效的URL：%1 \n错误信息：%2").arg(urlSpec,newUrl.errorString()));
        return;
    }
    QString tempDir = ui->editPath->text().trimmed();
    if(tempDir.isEmpty()){
        QMessageBox::information(this,"error","目录无效");
        return;
    }
    QString fullFileName = tempDir + newUrl.fileName();
    if(QFile::exists(fullFileName)){
        QFile::remove(fullFileName);
    }
    downloadFile = new QFile(fullFileName);
    if(!downloadFile->open(QIODevice::WriteOnly)){
        QMessageBox::information(this,"error","临时文件打开失败");
        return;
    }
    ui->btnDownload->setEnabled(false);
    reply = networkManager.get(QNetworkRequest(newUrl));
    connect(reply,SIGNAL(finished()),this,SLOT(on_finished()));
    connect(reply,SIGNAL(readyRead()),this,SLOT(on_readyRead()));
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(on_downloadProgress(qint64,qint64)));
}
