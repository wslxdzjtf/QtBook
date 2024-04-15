#include "widget.h"
#include "ui_widget.h"
#include <QWidget>

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


void Widget::on_SliderRed_2_valueChanged(int value)
{
    Q_UNUSED(value);
    QPalette pal=ui->textEdit_2->palette();
    QColor color;
    color.setRgb(ui->SliderRed_2->value(),ui->SliderGreen_2->value(),
                 ui->SliderBlue_2->value(),ui->SliderAlpha_2->value());
    pal.setColor(QPalette::Base,color);
    ui->textEdit_2->setPalette(pal);
}

void Widget::on_SliderGreen_2_valueChanged(int value)
{
    on_SliderRed_2_valueChanged(value);
}

void Widget::on_SliderBlue_2_valueChanged(int value)
{
    on_SliderRed_2_valueChanged(value);
}

void Widget::on_SliderH_2_valueChanged(int value)
{
    ui->progBarH_2->setValue(value);
    ui->ScrollBarH_2->setValue(value);
}

void Widget::on_SliderV_2_valueChanged(int value)
{
    ui->progBarV_2->setValue(value);
    ui->ScrollBarV_2->setValue(value);
}

void Widget::on_dial_2_valueChanged(int value)
{
    ui->LCDDisplay_2->display(value);
}

void Widget::on_radioBtnHex_2_clicked()
{
    ui->LCDDisplay_2->setDigitCount(3);
    ui->LCDDisplay_2->setHexMode();
}

void Widget::on_radioBtnOct_2_clicked()
{
    ui->LCDDisplay_2->setDigitCount(3);
    ui->LCDDisplay_2->setOctMode();
}

void Widget::on_radioBtnBin_2_clicked()
{
    ui->LCDDisplay_2->setDigitCount(5);
    ui->LCDDisplay_2->setBinMode();
}

void Widget::on_radioBtnDec_2_clicked()
{
    ui->LCDDisplay_2->setDigitCount(3);
    ui->LCDDisplay_2->setDecMode();
}
