#include "formdoc.h"
#include "ui_formdoc.h"
#include <QVBoxLayout>
#include <QToolBar>

FormDoc::FormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDoc)
{
    ui->setupUi(this);  //创建菜单
    QToolBar *locToolBar = new QToolBar("文档",this);
    locToolBar->addAction(ui->actOpen);
    locToolBar->addAction(ui->actFont);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actCut);
    locToolBar->addAction(ui->actCopy);
    locToolBar->addAction(ui->actPaste);
    locToolBar->addAction(ui->actUndo);
    locToolBar->addAction(ui->actRedo);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actClose);

    locToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(locToolBar);
    layout->addWidget(ui->plainTextEdit);
    layout->setContentsMargins(2,2,2,2);
    layout->setSpacing(2);
    setLayout(layout);
}

FormDoc::~FormDoc()
{
    delete ui;
}
