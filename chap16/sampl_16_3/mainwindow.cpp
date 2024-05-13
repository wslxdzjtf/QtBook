#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyleFactory>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString defaultStyle = QApplication::style()->metaObject()->className();
    ui->statusBar->showMessage(defaultStyle);

    ui->comboSysStyle->addItems(QStyleFactory::keys());
    QRegExp regExp("(.)(.*)Style");
    if(regExp.exactMatch(defaultStyle))
        defaultStyle=regExp.cap(2);
    ui->comboSysStyle->setCurrentIndex(ui->comboSysStyle->findText(defaultStyle,Qt::MatchContains));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_comboSysStyle_currentIndexChanged(const QString &arg1)
{
    QStyle *style = QStyleFactory::create(arg1);
    qApp->setStyle(style);
    ui->statusBar->showMessage(style->metaObject()->className());
}

void MainWindow::on_btnStyleSheet_clicked()
{
    //设置样式表
    this->setStyleSheet("QPlainTextEdit{"
                        "color: blue; "
                        "font: 13pt '宋体';}"
                        "QPushButton:hover{background-color:lime;}"
                        "QLineEdit{ border: 2px groove red;"
                        "background-color: rgb(170, 255, 127); "
                        "border-radius: 6px;}"
                        "QCheckBox:checked{color: red;}"
                        "QRadioButton:checked{color:red;}"
                        );
}

void MainWindow::on_btnNormal_clicked()
{
    setStyleSheet("");
}
