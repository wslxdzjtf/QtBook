#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    theModel = new QStringListModel(this);
    QStringList strlist;
    strlist<<"item1"<<"item2"<<"item3"<<"item4"<<"item5"<<"item6";
    theModel->setStringList(strlist);
    ui->listView->setModel(theModel);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnTextClear_clicked()
{
    ui->plainTextEdit->clear();
}

void Widget::on_btnTextImport_clicked()
{
    ui->plainTextEdit->clear();
    QStringList strlist = theModel->stringList();
    foreach (auto str, strlist) {
        ui->plainTextEdit->appendPlainText(str);
    }
}

void Widget::on_btnIniList_clicked()
{
    QStringList strlist;
    strlist<<"item1"<<"item2"<<"item3"<<"item4"<<"item5"<<"item6";
    theModel->setStringList(strlist);
}

void Widget::on_btnListClear_clicked()
{
    theModel->removeRows(0,theModel->rowCount());
}

void Widget::on_btnListDelete_clicked()
{
    theModel->removeRow(ui->listView->currentIndex().row());
}

void Widget::on_btnListAppend_clicked()
{
    theModel->insertRow(theModel->rowCount());
    QModelIndex index=theModel->index(theModel->rowCount()-1,0);
    theModel->setData(index,"new Item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

void Widget::on_btnListInsert_clicked()
{
    QModelIndex index = ui->listView->currentIndex();
    theModel->insertRow(index.row());
    theModel->setData(index,"insert Item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}

void Widget::on_listView_clicked(const QModelIndex &index)
{
    ui->label->setText(QString::asprintf("行：%d，列：%d",index.row(),index.column()));
}
