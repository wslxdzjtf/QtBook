#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include    <QLabel>
#include    <QString>

#include    <QtSql>
#include    <QDataWidgetMapper>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QSqlDatabase DB;
    QSqlRelationalTableModel *tabModel;
    QItemSelectionModel *theSelection;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actOpenDB_triggered();

    void on_actFields_triggered();

    void on_actRecAppend_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
