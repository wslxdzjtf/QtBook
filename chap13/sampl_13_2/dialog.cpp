#include "dialog.h"
#include "ui_dialog.h"

void Dialog::closeEvent(QCloseEvent *event)
{
    if(threadA.isRunning()){
        threadA.stopThread();
        threadA.wait();
    }
    event->accept();
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&threadA,SIGNAL(started()),this,SLOT(on_threadAStarted()));
    connect(&threadA,SIGNAL(finished()),this,SLOT(on_threadAFinished()));
    connect(&mTimer,SIGNAL(timeout()),this,SLOT(onTimerOut()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_threadAnewValue(int seq, int diceValue)
{
    ui->plainTextEdit->appendPlainText(QString::asprintf("第%d次投骰子，点数为：%d",seq,diceValue));
    QPixmap pic;
    pic.load(QString::asprintf(":/dice/images/d%d.jpg",diceValue));
    ui->LabPic->setPixmap(pic);
}

void Dialog::on_threadAStarted()
{
    mTimer.start(100);
    ui->LabA->setText("ThreadA状态：started");
    ui->btnStartThread->setEnabled(false);
    ui->btnDiceBegin->setEnabled(true);
    ui->btnDiceEnd->setEnabled(false);
    ui->btnStopThread->setEnabled(true);
}

void Dialog::on_threadAFinished()
{
    mTimer.stop();
    ui->LabA->setText("ThreadA状态：finished");
    ui->btnStartThread->setEnabled(true);
    ui->btnDiceBegin->setEnabled(false);
    ui->btnDiceEnd->setEnabled(false);
    ui->btnStopThread->setEnabled(false);
}

void Dialog::on_btnStartThread_clicked()
{
    threadA.start();

}

void Dialog::on_btnStopThread_clicked()
{
    threadA.stopThread();


}

void Dialog::on_btnDiceBegin_clicked()
{
    threadA.diceBegin();
    ui->btnDiceBegin->setEnabled(false);
    ui->btnDiceEnd->setEnabled(true);
}

void Dialog::on_btnDiceEnd_clicked()
{
    threadA.dicePause();
    ui->btnDiceBegin->setEnabled(true);
    ui->btnDiceEnd->setEnabled(false);
}

void Dialog::on_btnClear_clicked()
{
    ui->plainTextEdit->clear();
}

void Dialog::onTimerOut()
{
    int seq,diceValue;
    bool valid = threadA.readValue(&seq,&diceValue);
    static int lastSeq;
    if(!valid || seq==lastSeq) return;
    lastSeq=seq;
    ui->plainTextEdit->appendPlainText(QString::asprintf("第%d次投骰子，点数为：%d",seq,diceValue));
    QPixmap pic;
    pic.load(QString::asprintf(":/dice/images/d%d.jpg",diceValue));
    ui->LabPic->setPixmap(pic);
}
