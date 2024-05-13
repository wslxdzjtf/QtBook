#include "dialog.h"
#include "ui_dialog.h"

void Dialog::closeEvent(QCloseEvent *event)
{
    if(threadConsumer.isRunning())
        threadConsumer.terminate();
    if(threadProducer.isRunning())
        threadProducer.terminate();
    event->accept();
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&threadProducer,SIGNAL(started()),this,SLOT(on_ProducerStarted()));
    connect(&threadProducer,SIGNAL(finished()),this,SLOT(on_ProducerFinished()));

    connect(&threadConsumer,SIGNAL(started()),this,SLOT(on_ConsumerStarted()));
    connect(&threadConsumer,SIGNAL(finished()),this,SLOT(on_ConsumerFinished()));
    connect(&threadConsumer,SIGNAL(newValue(int*,int,int)),this,SLOT(on_ConsumerValueChanged(int*,int,int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnStartThread_clicked()
{
    threadConsumer.start();
    threadProducer.start();
    ui->btnStartThread->setEnabled(false);
    ui->btnStopThread->setEnabled(true);
}

void Dialog::on_ProducerStarted()
{
    ui->LabProducer->setText(QString::asprintf("生产者状态：started"));
}

void Dialog::on_ProducerFinished()
{
    ui->LabProducer->setText(QString::asprintf("生产者状态：finished"));
}

void Dialog::on_ConsumerStarted()
{
    ui->LabConsumer->setText(QString::asprintf("消费者状态：started"));
}

void Dialog::on_ConsumerFinished()
{
    ui->LabConsumer->setText(QString::asprintf("消费者状态：finished"));
}

void Dialog::on_ConsumerValueChanged(int *data, int count, int seq)
{
    QString str = QString::asprintf("第%d组数据：",seq);
    for(int i = 0 ; i < count; i++){
        str = str + QString::asprintf(" %d",*data);
        data++;
    }
    ui->plainTextEdit->appendPlainText(str);
}

void Dialog::on_btnStopThread_clicked()
{
    threadConsumer.terminate();
    threadProducer.terminate();
    ui->btnStartThread->setEnabled(true);
    ui->btnStopThread->setEnabled(false);
}
