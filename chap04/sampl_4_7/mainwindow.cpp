#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);

    ui->tBtnListIni->setDefaultAction(ui->actListIni);
    ui->tBtnListClear->setDefaultAction(ui->actListClear);
    ui->tBtnListAdd->setDefaultAction(ui->actListAppend);
    ui->tBtnListInSert->setDefaultAction(ui->actListInsert);
    ui->tBtnListDel->setDefaultAction(ui->actListDelete);

    ui->tBtnSelALL->setDefaultAction(ui->actSelALL);
    ui->tBtnSelNone->setDefaultAction(ui->actSelNone);
    ui->tBtnSelInvs->setDefaultAction(ui->actSelInvs);

    QMenu *menu = new QMenu(this);
    menu->addAction(ui->actSelALL);
    menu->addAction(ui->actSelNone);
    menu->addAction(ui->actSelNone);
    ui->actSelPopMenu->setMenu(menu);

    ui->mainToolBar->addAction(ui->actSelPopMenu);
    ui->tBtnSelectItem->setDefaultAction(ui->actSelPopMenu);
    ui->mainToolBar->addSeparator();
    ui->mainToolBar->addAction(ui->actQuit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_toolBox_currentChanged(int index)
{
    ui->tabWidget->setCurrentIndex(index);
}

void MainWindow::on_actListIni_triggered()
{
    ui->listWidget->clear();
    QListWidgetItem *aItem;
    QIcon icon(":/images/icons/check2.ico");
    bool chk = ui->checkBox->isChecked();

    for(int i=0;i<20;i++){
        QString str = QString::asprintf("Item %d",i);
        aItem = new QListWidgetItem(str);
        aItem->setIcon(icon);
        aItem->setCheckState(Qt::Checked);

        if(chk)
            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        else
            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        ui->listWidget->addItem(aItem);
    }
}

void MainWindow::on_actListClear_triggered()
{
    ui->listWidget->clear();
}

void MainWindow::on_actListInsert_triggered()
{
    QListWidgetItem *aItem;
    QIcon icon(":/images/icons/check2.ico");
    bool chk = ui->checkBox->isChecked();

    QString str = QString::asprintf("new Inserted Item");
    aItem = new QListWidgetItem(str);
    aItem->setIcon(icon);
    aItem->setCheckState(Qt::Checked);

    if(chk)
        aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    else
        aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    ui->listWidget->insertItem(ui->listWidget->currentRow(),aItem);
}

void MainWindow::on_actListAppend_triggered()
{
    QListWidgetItem *aItem;
    QIcon icon(":/images/icons/check2.ico");
    bool chk = ui->checkBox->isChecked();

    QString str = QString::asprintf("new Append Item");
    aItem = new QListWidgetItem(str);
    aItem->setIcon(icon);
    aItem->setCheckState(Qt::Checked);

    if(chk)
        aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    else
        aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    ui->listWidget->addItem(aItem);
}

void MainWindow::on_actListDelete_triggered()
{
    QListWidgetItem *aItem = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete aItem;
}

void MainWindow::on_actSelALL_triggered()
{
    int cnt = ui->listWidget->count();
    for(int i=0;i<cnt;i++){
         QListWidgetItem *aItem = ui->listWidget->item(i);
         aItem->setCheckState(Qt::Checked);
    }
}

void MainWindow::on_actSelNone_triggered()
{
    int cnt = ui->listWidget->count();
    for(int i=0;i<cnt;i++){
         QListWidgetItem *aItem = ui->listWidget->item(i);
         aItem->setCheckState(Qt::Unchecked);
    }
}

void MainWindow::on_actSelInvs_triggered()
{
    int cnt = ui->listWidget->count();
    for(int i=0;i<cnt;i++){
         QListWidgetItem *aItem = ui->listWidget->item(i);
         if(aItem->checkState()==Qt::Checked)
             aItem->setCheckState(Qt::Unchecked);
         else
             aItem->setCheckState(Qt::Checked);
    }
}



void MainWindow::on_checkBox_clicked(bool checked)
{
    int cnt = ui->listWidget->count();
    for(int i=0;i<cnt;i++){
        QListWidgetItem *aItem = ui->listWidget->item(i);
        if(checked)
            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        else
            aItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }
}

void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    QString str;
    if(current!=NULL){
        if(previous==NULL)
            str="当前项："+current->text();
        else
            str="前一项："+previous->text()+",当前项："+current->text();
        ui->lineEdit->setText(str);
    }
}

void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu* menuList=new QMenu(this); //创建菜单

  //添加Actions创建菜单项
    menuList->addAction(ui->actListIni);
    menuList->addAction(ui->actListClear);
    menuList->addAction(ui->actListInsert);
    menuList->addAction(ui->actListAppend);
    menuList->addAction(ui->actListDelete);
    menuList->addSeparator();
    menuList->addAction(ui->actSelALL);
    menuList->addAction(ui->actSelNone);
    menuList->addAction(ui->actSelInvs);

    menuList->exec(QCursor::pos()); //在鼠标光标位置显示右键快捷菜单

    delete menuList; //手工创建的指针必须手工删除
}
