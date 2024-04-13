#include "widget.h"
#include "ui_widget.h"
#include <QMetaProperty>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->spinBoxBoy->setProperty("isBoy",true);
    ui->spinBoxGirl->setProperty("isboy",false);

    boy = new QPerson("王世明");
    boy->setProperty("score",94);
    boy->setProperty("age",20);
    boy->setProperty("sex","Boy");

    connect(boy,&QPerson::ageChanged,this,&Widget::on_ageChanged);

    girl = new QPerson("翠花");
    girl->setProperty("score",80);
    girl->setProperty("age",18);
    girl->setProperty("sex","girl");

    connect(girl,&QPerson::ageChanged,this,&Widget::on_ageChanged);

    connect(ui->spinBoxBoy,SIGNAL(valueChanged(int)),this,SLOT(on_spin_valueChanged(int)));

    connect(ui->spinBoxGirl,SIGNAL(valueChanged(int)),this,SLOT(on_spin_valueChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_spin_valueChanged(int arg1)
{
    Q_UNUSED(arg1)
    QSpinBox *spinBox = qobject_cast<QSpinBox*>(sender());
    if(spinBox->property("isBoy").toBool())
        boy->setAge(spinBox->value());
    else
        girl->setAge(spinBox->value());
}

void Widget::on_ageChanged(unsigned value)
{
    Q_UNUSED(value)
    QPerson *aPerson = qobject_cast<QPerson *>(sender());
    QString aName = aPerson->property("name").toString();
    QString aSex = aPerson->property("sex").toString();
    unsigned aAge = aPerson->age();
    ui->txtEdit->appendPlainText(aName+","+aSex+QString::asprintf(",年龄=%d",aAge));
}

void Widget::on_btnBoyInc_clicked()
{
    boy->incAge();
}

void Widget::on_btnGirlInc_clicked()
{
    girl->incAge();
}

void Widget::on_btnClassInfo_clicked()
{
    const QMetaObject *meta = girl->metaObject();
    ui->txtEdit->clear();
    ui->txtEdit->appendPlainText("==元对象信息==\n");
    ui->txtEdit->appendPlainText(QString("类命名：%1\n").arg(meta->className()));
    ui->txtEdit->appendPlainText("property");
    for(int i=meta->propertyOffset();i<meta->propertyCount();i++){
        QMetaProperty prop = meta->property(i);
        const char* propName = prop.name();
        QString propValue = boy->property(propName).toString();
        ui->txtEdit->appendPlainText(QString("属性名称：%1，属性值：%2").arg(propName).arg(propValue));
    }
    ui->txtEdit->appendPlainText("");
    ui->txtEdit->appendPlainText("classInfo");
    for(int i=meta->classInfoOffset();i<meta->classInfoCount();i++){
        QMetaClassInfo classInfo = meta->classInfo(i);
        ui->txtEdit->appendPlainText(QString("Name=%1,Value=%2").arg(classInfo.name()).arg(classInfo.value()));
    }
}
