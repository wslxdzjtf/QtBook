#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actOpen_IODevice_triggered()
{
    QString curPath=QCoreApplication::applicationDirPath();
    QString dlgTitle = "打开文件";
    QString filter = "程序(*.h *.cpp);;文本(*.txt);;所有文件(*.*)";
    QString fileName = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(fileName.isEmpty()) return;

    QFile file(fileName);
    if(file.open(QIODevice::ReadOnly|QIODevice::Text)){
        ui->plainTextEditIODevice->setPlainText(QString::fromLocal8Bit(file.readAll()));
        file.close();
        ui->tabWidget->setCurrentIndex(0);
    }
}

void MainWindow::on_actSave_IODevice_triggered()
{
    QString curPath=QCoreApplication::applicationDirPath();
    QString dlgTitle = "保存文件";
    QString filter = "程序(*.h *.cpp);;文本(*.txt);;所有文件(*.*)";
    QString fileName = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if(fileName.isEmpty()) return;

    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly|QIODevice::Text)){
        QString str=ui->plainTextEditIODevice->toPlainText();
        QByteArray strBytes=str.toUtf8();
        file.write(strBytes,strBytes.length());
        ui->tabWidget->setCurrentIndex(0);
    }

}

void MainWindow::on_actOpen_TextStream_triggered()
{
    QString curPath=QCoreApplication::applicationDirPath();
    QString dlgTitle = "打开文件";
    QString filter = "程序(*.h *.cpp);;文本(*.txt);;所有文件(*.*)";
    QString fileName = QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(fileName.isEmpty()) return;

    QFile file(fileName);
    if(file.open(QIODevice::ReadOnly|QIODevice::Text)){
        QTextStream stream(&file);
        stream.setAutoDetectUnicode(true);
        while(!stream.atEnd()){
            ui->plainTextEditTextStream->appendPlainText(stream.readLine());
        }
        //ui->plainTextEditTextStream->setPlainText(file.readAll());
        file.close();
        ui->tabWidget->setCurrentIndex(1);
    }
}

void MainWindow::on_actSave_TextStream_triggered()
{
    QString curPath=QCoreApplication::applicationDirPath();
    QString dlgTitle = "保存文件";
    QString filter = "程序(*.h *.cpp);;文本(*.txt);;所有文件(*.*)";
    QString fileName = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if(fileName.isEmpty()) return;

    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly|QIODevice::Text)){
        QTextStream stream(&file);
        stream.setAutoDetectUnicode(true);
        QString str=ui->plainTextEditTextStream->toPlainText();
        stream<<str;
        ui->tabWidget->setCurrentIndex(1);
    }
}
