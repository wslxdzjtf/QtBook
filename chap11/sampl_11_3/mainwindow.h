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
    QSqlQueryModel *qryModel;
    QItemSelectionModel *theSelection;

    void openTable();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actOpenDB_triggered();

    void on_actRecInsert_triggered();

    void on_actRecEdit_triggered();

    void on_TableViewDoubleClicked(QModelIndex index);

    void on_actScan_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
