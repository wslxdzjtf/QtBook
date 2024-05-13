#include "dialog.h"
#include "ui_dialog.h"

void Dialog::closeEvent(QCloseEvent *event)
{
    if(threadProducer.isRunning()){
        threadProducer.stopThread();
        threadProducer.wait();
        threadConsumer.stopThread();
        threadConsumer.wait();
    }
    event->accept();
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&threadProducer,SIGNAL(started()),this,SLOT(on_threadProducerStarted()));
    connect(&threadProducer,SIGNAL(finished()),this,SLOT(on_threadProducerFinished()));

    connect(&threadConsumer,SIGNAL(started()),this,SLOT(on_threadConsumerStarted()));
    connect(&threadConsumer,SIGNAL(finished()),this,SLOT(on_threadConsumerFinished()));

    connect(&threadConsumer,SIGNAL(newValued(int,int)),this,SLOT(on_threadConsumerNewValue(int,int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_threadConsumerNewValue(int seq, int diceValue)
{
    ui->plainTextEdit->appendPlainText(QString::asprintf("第%d次投骰子，点数为：%d",seq,diceValue));
    QPixmap pic;
    pic.load(QString::asprintf(":/dice/images/d%d.jpg",diceValue));
    ui->LabPic->setPixmap(pic);
}

void Dialog::on_threadConsumerStarted()
{
    ui->LabConsumer->setText("消费线程状态：started");
    ui->btnStartThread->setEnabled(false);
    ui->btnStopThread->setEnabled(true);
}

void Dialog::on_threadConsumerFinished()
{
    ui->LabConsumer->setText("消费线程状态：finished");
    ui->btnStartThread->setEnabled(true);
    ui->btnStopThread->setEnabled(false);
}

void Dialog::on_threadProducerStarted()
{
    ui->LabProducer->setText("生产线程状态：started");
    ui->btnStartThread->setEnabled(false);
    ui->btnStopThread->setEnabled(true);
}

void Dialog::on_threadProducerFinished()
{
    ui->LabProducer->setText("生产线程状态：finished");
    ui->btnStartThread->setEnabled(true);
    ui->btnStopThread->setEnabled(false);
}

void Dialog::on_btnStartThread_clicked()
{
    threadConsumer.start();
    threadProducer.start();
}

void Dialog::on_btnStopThread_clicked()
{
    threadProducer.stopThread();
    threadProducer.wait();

    threadConsumer.terminate();
    //threadConsumer.wait();
}


void Dialog::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}
