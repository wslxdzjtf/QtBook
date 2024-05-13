#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QFile file("myStyle.css");
    file.open(QIODevice::ReadOnly);
    QString styleSheet = QString::fromLatin1(file.readAll());
    a.setStyleSheet(styleSheet);
    return a.exec();
}
