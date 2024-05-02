#include "widget.h"
#include "ui_widget.h"
#include    <QTextDocument>
#include    <QTextBlock>
#include    <QMenu>

#include    <QMap>
#include    <QVariant>


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

void Widget::on_btnIniItems_clicked()
{
    QIcon icon(":/images/icon/aim.ico");
    ui->comboBox->clear();
    for(int i=0;i<20;i++){
        ui->comboBox->addItem(icon,QString::asprintf("Item %d",i));
    }
}

void Widget::on_btnClearItems_clicked()
{
    ui->comboBox->clear();
}

void Widget::on_btnIni2_clicked()
{
    ui->comboBox2->clear();
    QIcon icon(":/images/icons/UNIT.ICO");
    QMap<QString,int> City_Zone;
    City_Zone.insert("北京",10);
    City_Zone.insert("上海",20);
    City_Zone.insert("天津",30);
    foreach (auto str, City_Zone.keys())
        ui->comboBox2->addItem(icon,str,City_Zone.value(str));
}


void Widget::on_chkBoxEditable_clicked(bool checked)
{
    ui->comboBox->setEditable(checked);
}

void Widget::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if(!arg1.isEmpty())
        ui->plainTextEdit->appendPlainText(arg1);
}


void Widget::on_comboBox2_currentIndexChanged(const QString &arg1)
{
    if(!arg1.isEmpty()){
        QString zone = ui->comboBox2->currentData().toString();
        ui->plainTextEdit->appendPlainText(arg1+"区号："+zone);
    }
}

void Widget::on_chkBoxReadonly_clicked(bool checked)
{
    ui->plainTextEdit->setReadOnly(checked);
}

void Widget::on_btnClearText_clicked()
{
    ui->plainTextEdit->clear();
}

void Widget::on_btnToComboBox_clicked()
{
    ui->comboBox->clear();
    QTextDocument *doc = ui->plainTextEdit->document();
    QIcon icon(":\images\icons\aim.ico");
    int num = doc->blockCount();
    for(int i = 0;i<num;i++){
        doc->findBlockByNumber(i);
        ui->comboBox->addItem(icon,doc->findBlockByNumber(i).text());
    }
}

void Widget::on_plainTextEdit_customContextMenuRequested(const QPoint &pos)
{
    QMenu *menu = ui->plainTextEdit->createStandardContextMenu();
    menu->exec(pos);
}
