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


void Widget::on_btnCal_clicked()
{
    int num=ui->spinNum->value(); //读取数量，直接是整数
    float price=ui->spinPrice->value();//读取单价，直接是浮点数
    float total=num*price;//相乘计算
    ui->spinTotal->setValue(total); //直接显示浮点数
}

void Widget::on_btnDec_clicked()
{
    int val;
    val=ui->spinDec->value();//读取十进制数
    ui->spinBin->setValue(val); //设置数值即可，自动以二进制显示
    ui->spinHex->setValue(val); //设置数值即可，自动以十六进制显示
}

void Widget::on_btnBin_clicked()
{
    int val = ui->spinBin->value();
    ui->spinDec->setValue(val);
    ui->spinHex->setValue(val);
}

void Widget::on_btnHex_clicked()
{
    int val = ui->spinHex->value();
    ui->spinDec->setValue(val);
    ui->spinBin->setValue(val);
}
