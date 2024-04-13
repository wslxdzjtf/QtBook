#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPushButton>
#include <QPlainTextEdit>

class Dialog : public QDialog
{
    Q_OBJECT


private:
    QCheckBox *checkBoxUnderline;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;

    QRadioButton *rBtnBlue;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnGreen;

    QPlainTextEdit *plainTextEdit;

    QPushButton *btnOK;
    QPushButton *btnCancel;
    QPushButton *btnClose;

    void iniUI();

    void iniSignalSlots();
private slots:
    void on_checkUnderline(bool checked);
    void on_checkItalic(bool checked);
    void on_checkBold(bool checked);

    void setTextFontColor();
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
};

#endif // DIALOG_H
