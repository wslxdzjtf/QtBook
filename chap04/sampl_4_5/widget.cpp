#include "widget.h"
#include "ui_widget.h"
#include <QTimer>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    fTimer = new QTimer(this);
    fTimer->setInterval(1000);
    fTimer->stop();
    connect(fTimer,SIGNAL(timeout()),this,SLOT(on_timer_timeout()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnGetTime_clicked()
{   //获取当前时间
    QDateTime curDateTime = QDateTime::currentDateTime();
    ui->dateEdit->setDate(curDateTime.date());
    ui->editDate->setText(curDateTime.toString("yyyy-MM-dd"));

    ui->editTime->setText(curDateTime.toString("hh:mm:ss"));
    ui->timeEdit->setTime(curDateTime.time());

    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->editDateTime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

void Widget::on_btnSetTime_clicked()
{
    QString str = ui->editTime->text();
    QTime time = QTime::fromString(str,"hh:mm:ss");
    ui->timeEdit->setTime(time);
}

void Widget::on_btnSetDate_clicked()
{
    QString str = ui->editDate->text();
    QDate date = QDate::fromString(str,"yyyy-MM-dd");
    ui->dateEdit->setDate(date);
}

void Widget::on_btnSetDateTime_clicked()
{
    QString str = ui->editDateTime->text();
    QDateTime datetime = QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
    ui->dateTimeEdit->setDateTime(datetime);
}

void Widget::on_calendarWidget_selectionChanged()
{
    QDate dt = ui->calendarWidget->selectedDate();
    ui->editCalendar->setText(dt.toString("yyyy年M月d日"));
}

void Widget::on_timer_timeout()
{
    ui->LCDHour->display(QTime::currentTime().hour());
    ui->LCDMin->display(QTime::currentTime().minute());
    ui->LCDSec->display(QTime::currentTime().second());
    int value = ui->progressBar->value();
    value++;
    if(value>100)
        value = 0;
    ui->progressBar->setValue(value);
}

void Widget::on_btnSetIntv_clicked()
{
    fTimer->setInterval(ui->spinBoxIntv->value());
}

void Widget::on_btnStart_clicked()
{
    fTimer->start();
    ui->btnStart->setEnabled(false);
    ui->btnSetIntv->setEnabled(false);
    ui->btnStop->setEnabled(true);
    fTimeCounter.start();
}

void Widget::on_btnStop_clicked()
{
    ui->btnStart->setEnabled(true);
    ui->btnSetIntv->setEnabled(true);
    ui->btnStop->setEnabled(false);
    fTimer->stop();
    int tmMsec = fTimeCounter.elapsed();
    int sec = tmMsec/1000;
    int mSec = tmMsec%1000;
    QString str = QString::asprintf("流逝时间：%d秒%d毫秒",sec,mSec);
    ui->LabElapsTime->setText(str);
}
