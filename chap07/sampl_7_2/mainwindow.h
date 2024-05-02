#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QStandardItemModel *theModel;
    QItemSelectionModel *theSelection;

    void resetTable(int rows);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actTabReset_triggered();

    void on_actOpen_triggered();

    void on_actSave_triggered();

    void on_actOpenBin_triggered();

    void on_actSaveBin_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
