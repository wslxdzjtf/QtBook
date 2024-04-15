#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QList>
#include <QStack>
#include <QQueue>
#include <QSet>
#include <QMap>
#include <QMultiMap>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    qDebug()<<qBound(1,10,100);
    qDebug()<<qBound(1,1000,100);

    qDebug()<<qFuzzyCompare(float(1.000001),float(1.000000));
    qDebug("OK:%d",qFuzzyCompare(float(1.000001),float(1.000000)));

    QList<QString>aList;
    aList.append("Monday");
    aList.append("Tuesday");
    aList.append("Wednesday");
    QString str = aList[0];
    qDebug()<<str<<("\n==================");  //显示Monday

    QList<QString> list;
    list<<"one"<<"two"<<"three";
    QString str1 = list[1];     //str1=="two"
    QString str0 = list.at(0);  //str0=="one"
    qDebug()<<str0<<str1<<("\n==================");

    QStack<int>stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    while(!stack.isEmpty())
        qDebug()<<stack.pop();

    QQueue<int> queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    while(!queue.isEmpty()){
        qDebug()<<queue.dequeue();
    }
    qDebug()<<("==================");

    QSet<QString>set;
    set<<"dog"<<"cat"<<"tiger";
    if(set.contains("cat"))
        qDebug()<<"the set has a cat";

    QMap<QString,int> map;
    map["one"]=1;
    map["two"]=2;
    map["three"]=3;
    map.insert("four",4);
    map.remove("two");
    int num1 = map["one"];
    int num2 = map.value("two");
    int num3 = map["five"];
    int timeout = map.value("TIMEOUT",30);
    qDebug()<<num1<<num2<<num3<<timeout;    //1 0 0 30

    QMultiMap<QString,int>map1,map2,map3;
    map1.insert("plenty",100);
    map1.insert("plenty",2000);
    map2.insert("plenty",5000);
    map3=map1+map2;
    qDebug()<<map3.size();  //3

    QList<int> values = map3.values("plenty");
        foreach(int i,values)qDebug()<<i;   //5000 2000 100
    qDebug()<<("==================");

    //遍历
    qDebug()<<("正向遍历");
    QList<QString>list2;
    list<<"A"<<"B"<<"C"<<"D";
    QListIterator<QString> i (list2);
    while(i.hasNext())  //判断在迭代器指针后面是否还有数据项
        qDebug()<<i.next(); //跳过一个数据项，并返回其值
    qDebug()<<list2;

    qDebug()<<("逆向遍历");
    QListIterator<QString> j(list2);
    j.toBack();
    while(j.hasPrevious())
        qDebug()<<j.previous();
    qDebug()<<("=============");
    qDebug()<<list2;

    //删除奇数项
    QList<int> list3;
    list3<<1<<2<<3<<4<<5;
    QMutableListIterator<int> k (list3);
    while(k.hasNext()){
        if(k.next()%2!=0)
            k.remove();
    }
    qDebug()<<list3;

    //删除键（城市名称）里以"City"结尾的数据项
    QMap<QString,QString> map4;
    map4.insert("Paris","France");
    map4.insert("New York","USA");
    map4.insert("Mexico City","USA");
    map4.insert("Moscow","Russia");

    QMutableMapIterator<QString,QString>a(map4);
    while(a.hasNext()){
        if(a.next().key().endsWith("City"))
            a.remove();
        while(a.findNext("USA"))
            a.remove();
    }
    qDebug()<<map4;
}

Widget::~Widget()
{
    delete ui;
}
