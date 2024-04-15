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

//append函数
void Widget::on_pushButton_29_clicked()
{
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();
    ui->edtResult->setText(str1.append(str2));
}

//prepend函数
void Widget::on_pushButton_30_clicked()
{
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();
    ui->edtResult->setText(str1.prepend(str2));
}

//toUpper函数
void Widget::on_pushButton_31_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    ui->edtResult->setText(str1.toUpper());
}

//toLower函数
void Widget::on_pushButton_32_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    ui->edtResult->setText(str1.toLower());
}

//left函数
void Widget::on_pushButton_33_clicked()
{
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    ui->LabSpin->setText("left()");
    int v=ui->spinBox->value();
    str2=str1.left(v);
    ui->edtResult->setText(str2);
}

//right函数
void Widget::on_pushButton_34_clicked()
{
    QString str1,str2;
    str1 = ui->comboBox1->currentText();
    ui->LabSpin->setText("right()");
    int v = ui->spinBox->value();
    str2=str1.right(v);
    ui->edtResult->setText(str2);
}

//section函数
void Widget::on_pushButton_28_clicked()
{
    int i;
    QString str1,str2,str3;
    str1=ui->comboBox1->currentText();
    i=ui->spinBox->value();
//    str2=str1.section('\\',2,2);
    str3=ui->comboBox2->currentText();
    if (QString::compare(str3,"\\",Qt::CaseInsensitive)==0)
        str2=str1.section('\\',i,i+1); //
    else
        str2=str1.section(str3,i,i+1); //

    ui->edtResult->setText(str2);
}

//simplified函数
void Widget::on_pushButton_35_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    ui->edtResult->setText(str1.simplified());
}

//trimmed函数
void Widget::on_pushButton_36_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    ui->edtResult->setText(str1.trimmed());
}

//count函数
void Widget::on_pushButton_19_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    ui->spinBox->setValue(str1.count());
    ui->LabSpin->setText("count()");
}

//size函数
void Widget::on_pushButton_20_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    ui->spinBox->setValue(str1.size());
    ui->LabSpin->setText("size()");
}

//indexOf函数
void Widget::on_pushButton_21_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    QString str2 = ui->comboBox2->currentText();
    int i;
    i=str1.indexOf(str2);
    ui->spinBox->setValue(i);
    ui->LabSpin->setText("indexOf()");

}

//lastIndexOf函数
void Widget::on_pushButton_22_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    QString str2 = ui->comboBox2->currentText();
    int i;
    i=str1.lastIndexOf(str2);
    ui->spinBox->setValue(i);
    ui->LabSpin->setText("lastIndexOf()");
}

//endsWith函数
void Widget::on_pushButton_23_clicked()
{
    QString str1,str2;
    str1=ui->comboBox1->currentText();
    str2=ui->comboBox2->currentText();
    ui->checkBox->setChecked(str1.endsWith(str2));
    ui->checkBox->setText("endsWith");
}

//startsWith函数
void Widget::on_pushButton_24_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    QString str2 = ui->comboBox2->currentText();
    ui->checkBox->setChecked(str1.startsWith(str2));
    ui->checkBox->setText("startsWith");
}

//contains函数
void Widget::on_pushButton_25_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    QString str2 = ui->comboBox2->currentText();
    ui->checkBox->setChecked(str1.contains(str2,Qt::CaseSensitive));
    ui->checkBox->setText("contains");
}

//isNull函数
void Widget::on_pushButton_26_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    ui->checkBox->setChecked(str1.isNull());
    ui->checkBox->setText("isNull");
}

//isEmpty函数
void Widget::on_pushButton_27_clicked()
{
    QString str1 = ui->comboBox1->currentText();
    ui->checkBox->setChecked(str1.isEmpty());
    ui->checkBox->setText("isEmpty");
}

