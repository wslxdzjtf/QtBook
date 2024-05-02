#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QString>

#include <QtSql>
#include <QDataWidgetMapper>

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
    QDataWidgetMapper *dataMapper;

    void refreshTableView();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actOpenDB_triggered();
    void on_currentRowChanged(const QModelIndex &current,const QModelIndex &previous);

    void on_actRecFirst_triggered();

    void on_actRecPrevious_triggered();

    void on_actRecNext_triggered();

    void on_actRecLast_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
