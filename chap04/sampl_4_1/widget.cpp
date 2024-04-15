#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString str=ui->editNum->text();
    int num = str.toInt();
    str=ui->editPrice->text();
    float price = str.toFloat();
    float total = num*price;
    str=str.setNum(total,'f',2);
    ui->editTotal->setText(str);
}

void Widget::on_btnDec_clicked()
{
    QString str = ui->editDec->text();
    int value = str.toInt();
    str = str.setNum(value,2);
    ui->editBin->setText(str);
    str = str.setNum(value,8);
    ui->editOct->setText(str);
    str = str.setNum(value,16);
    ui->editHex->setText(str.toUpper());
}

void Widget::on_btnBin_clicked()
{
    QString str =ui->editBin->text();
    bool ok;
    int value = str.toInt(&ok,2);   //以二进制的方式读入value
    ui->editDec->setText(QString::number(value));
    ui->editOct->setText(QString::number(value,8));
    ui->editHex->setText(QString::number(value,16).toUpper());
}

void Widget::on_btnOct_clicked()
{
    QString str = ui->editOct->text();
    bool ok;
    int value = str.toInt(&ok,8);
    ui->editDec->setText(QString::number(value));
    ui->editBin->setText(QString::number(value,2));
    ui->editHex->setText(QString::number(value,16).toUpper());
}

void Widget::on_btnHex_clicked()
{
    QString str = ui->editHex->text();
    bool ok;
    int value = str.toInt(&ok,16);
    ui->editDec->setText(QString::number(value));
    ui->editBin->setText(QString::number(value,2));
    ui->editOct->setText(QString::number(value,8));
}
