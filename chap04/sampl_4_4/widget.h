#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_SliderRed_2_valueChanged(int value);

    
    void on_SliderGreen_2_valueChanged(int value);

    void on_SliderBlue_2_valueChanged(int value);

    void on_SliderH_2_valueChanged(int value);

    void on_SliderV_2_valueChanged(int value);

    void on_dial_2_valueChanged(int value);

    void on_radioBtnHex_2_clicked();

    void on_radioBtnOct_2_clicked();

    void on_radioBtnBin_2_clicked();

    void on_radioBtnDec_2_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
