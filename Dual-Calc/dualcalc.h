#ifndef DUALCALC_H
#define DUALCALC_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class dualcalc; }
QT_END_NAMESPACE

class dualcalc : public QDialog
{
    Q_OBJECT

public:
    dualcalc(QWidget *parent = nullptr);
    ~dualcalc();

private slots:
    void on_num1_textChanged();
    void on_num2_textChanged();
    void on_powButton_clicked();
    void on_divideButton_clicked();
    void on_addButton_clicked();
    void on_subtractButton_clicked();
    void on_multiplyButton_clicked();
    void on_sqrtButton_clicked();

private:
    Ui::dualcalc *ui;
};
#endif
