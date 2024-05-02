#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "dialogsetheaders.h"
#include "qdialoglocate.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QStandardItemModel *theModel;
    QItemSelectionModel *theSelection;
    DialogSetHeaders *dialogHeader=NULL;
    QDialogLocate *dialogLocate=NULL;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setActLocateEnable(bool enable);
    void setDlgLocateNull();

private slots:
    void on_actTab_SetSize_triggered();

    void on_actTab_SetHeader_triggered();

    void on_actTab_Locate_triggered();

    void on_tableView_clicked(const QModelIndex &index);

    void setAcellText(int row,int col,QString txt);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
