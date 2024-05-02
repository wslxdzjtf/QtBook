#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QLabel>
#include <QString>

#include <QtSql>
#include <QDataWidgetMapper>

#include "qwcomboboxdelegate.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QSqlDatabase DB;
    QSqlTableModel *tabModel;
    QItemSelectionModel *theSeletion;
    QDataWidgetMapper *dataMapper;
    QWComboBoxDelegate delegateSex;
    QWComboBoxDelegate delegateDepart;

    void openTable();   //打开数据库
    void getFiledNames();   //获取字段名称


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void on_currentChanged(const QModelIndex &current,const QModelIndex &previous);
    void on_currentRowChanged(const QModelIndex &current,const QModelIndex &previous);
    void on_actOpenDB_triggered();
    void on_actRecAppend_triggered();
    void on_actRecInsert_triggered();
    void on_actRecDelete_triggered();
    void on_actSubmit_triggered();
    void on_actRevert_triggered();
    void on_actPhotoClear_triggered();
    void on_actPhoto_triggered();
    void on_actScan_triggered();
    void on_comboFields_currentIndexChanged(int index);
    void on_radioBtnAscend_clicked();
    void on_radioBtnDescend_clicked();
    void on_radioBtnMan_clicked();
    void on_radioBtnWoman_clicked();
    void on_radioBtnBoth_clicked();
};

#endif // MAINWINDOW_H
