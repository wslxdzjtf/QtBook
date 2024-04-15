#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QList>
#include <QStack>
#include <QQueue>
#include <QSet>
#include <QMap>
#include <QMultiMap>
#include <QLinkedList>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QList<QString>list;
    list<<"A"<<"B"<<"C"<<"D";
    QList<QString>::const_iterator i;
    for(i = list.constBegin();i!=list.constEnd();++i)
        qDebug()<<*i;
    qDebug()<<("===========");

    QList<QString>::reverse_iterator j;
    for(j= list.rbegin();j!=list.rend();++j){
        *j = j->toLower();
        qDebug()<<*j;
    }

    QMap<int,int> map;
    map.insert(1,11);
    map.insert(2,22);
    QMap<int,int>::const_iterator k;
    for(k = map.constBegin();k != map.constEnd();++k)
        qDebug()<<k.key()<<'.'<<k.value();
    qDebug()<<("===========");

    QMultiMap<int,int> map1;
    map1.insert(1,11);
    map1.insert(2,22);
    map1.insert(2,111);
    map1.insert(2,222);
    const QList<int> sizes = map1.values(2);
    QList<int>::const_iterator a;
    for(a = sizes.begin();a!=sizes.end();++a)
        qDebug()<<*a;

    //foreach关键版
    QLinkedList<QString> list1;
    list1.append("a");
    list1.append("b");
    foreach (auto str,list1) {
        qDebug()<<str;
    }

    QMultiMap<QString,int> map2;
    map2.insert("A",1);
    map2.insert("A",2);
    map2.insert("B",2);
    foreach (auto str, map2.uniqueKeys()) {
        foreach(auto num,map2.values(str))
            qDebug()<<str<<":"<<num;
    }
}

Widget::~Widget()
{
    delete ui;
}
