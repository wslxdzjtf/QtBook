#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProgressBar>
#include <QLabel>
#include <QSpinBox>
#include <QFontComboBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel * fLabCurFile;
    QProgressBar * progressBar;
    QSpinBox *spinFontSize;
    QFontComboBox * comboFont;

    void iniUI();
    void iniSignalSlots();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actFontBold_triggered(bool checked);

    void on_actFontItalic_triggered(bool checked);

    void on_actFontUnderline_triggered(bool checked);

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_selectionChanged();

    void on_spinBoxFontSize_valueChanged(int aFontSize);

    void on_comboFont_currentIndexChanged(const QString &arg1);



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
