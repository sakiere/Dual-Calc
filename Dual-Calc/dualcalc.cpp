#include <windows.h>
#include <sstream>
#include <string>
#include <math.h>

#include "dualcalc.h"
#include "./ui_dualcalc.h"

dualcalc::dualcalc(QWidget *parent) : QDialog(parent), ui(new Ui::dualcalc) { ui->setupUi(this); }
dualcalc::~dualcalc() { delete ui; }


void dualcalc::on_num1_textChanged()
{
    QString num1text = ui->num1->toPlainText();
    std::string num1textstr = num1text.toStdString();
    QTextCursor cursor = ui->num1->textCursor();

    for(int i = 0; i < num1text.size(); i++)
    {
        if (num1text[i].toLower() == 'a' || num1text[i].toLower() == 'b' ||
            num1text[i].toLower() == 'c' || num1text[i].toLower() == 'd' ||
            num1text[i].toLower() == 'e' || num1text[i].toLower() == 'f' ||
            num1text[i].toLower() == 'g' || num1text[i].toLower() == 'h' ||
            num1text[i].toLower() == 'i' || num1text[i].toLower() == 'j' ||
            num1text[i].toLower() == 'k' || num1text[i].toLower() == 'l' ||
            num1text[i].toLower() == 'm' || num1text[i].toLower() == 'n' ||
            num1text[i].toLower() == 'o' || num1text[i].toLower() == 'p' ||
            num1text[i].toLower() == 'q' || num1text[i].toLower() == 'r' ||
            num1text[i].toLower() == 's' || num1text[i].toLower() == 't' ||
            num1text[i].toLower() == 'u' || num1text[i].toLower() == 'v' ||
            num1text[i].toLower() == 'w' || num1text[i].toLower() == 'x' ||
            num1text[i].toLower() == 'y' || num1text[i].toLower() == 'z' )
        {
            num1textstr.pop_back();
            ui->num1->setText(QString::fromLocal8Bit(num1textstr.c_str()));
            ui->num1->setTextCursor(cursor);
        }
    }
}


void dualcalc::on_num2_textChanged()
{
    QString num2text = ui->num2->toPlainText();
    std::string num2textstr = num2text.toStdString();
    QTextCursor cursor = ui->num2->textCursor();

    for(int i = 0; i < num2text.size(); i++)
    {
        if (num2text[i].toLower() == 'a' || num2text[i].toLower() == 'b' ||
            num2text[i].toLower() == 'c' || num2text[i].toLower() == 'd' ||
            num2text[i].toLower() == 'e' || num2text[i].toLower() == 'f' ||
            num2text[i].toLower() == 'g' || num2text[i].toLower() == 'h' ||
            num2text[i].toLower() == 'i' || num2text[i].toLower() == 'j' ||
            num2text[i].toLower() == 'k' || num2text[i].toLower() == 'l' ||
            num2text[i].toLower() == 'm' || num2text[i].toLower() == 'n' ||
            num2text[i].toLower() == 'o' || num2text[i].toLower() == 'p' ||
            num2text[i].toLower() == 'q' || num2text[i].toLower() == 'r' ||
            num2text[i].toLower() == 's' || num2text[i].toLower() == 't' ||
            num2text[i].toLower() == 'u' || num2text[i].toLower() == 'v' ||
            num2text[i].toLower() == 'w' || num2text[i].toLower() == 'x' ||
            num2text[i].toLower() == 'y' || num2text[i].toLower() == 'z' )
        {
            num2textstr.pop_back();
            ui->num2->setText(QString::fromLocal8Bit(num2textstr.c_str()));
            ui->num2->setTextCursor(cursor);
        }
    }
}


void dualcalc::on_powButton_clicked()
{
    std::string num1str = ui->num1->toPlainText().toStdString();
    std::string num2str = ui->num2->toPlainText().toStdString();

    double num1 = ::atof(num1str.c_str());
    double num2 = ::atof(num2str.c_str());

    double result = pow(num1, num2);

    std::wstringstream wss;
    wss << result;

    if (ui->num1->toPlainText() == "" || ui->num2->toPlainText() == "") MessageBoxW(GetActiveWindow(), L"NUM1 or NUM2 is empty.", L"ERROR", MB_OK);
    else MessageBoxW(GetActiveWindow(), wss.str().c_str(), L"RESULT", MB_OK);
}


void dualcalc::on_divideButton_clicked()
{
    std::string num1str = ui->num1->toPlainText().toStdString();
    std::string num2str = ui->num2->toPlainText().toStdString();

    double num1 = ::atof(num1str.c_str());
    double num2 = ::atof(num2str.c_str());

    double result = num1 / num2;

    std::wstringstream wss;
    wss << result;

    if (ui->num1->toPlainText() == "" || ui->num2->toPlainText() == "") MessageBoxW(GetActiveWindow(), L"NUM1 or NUM2 is empty.", L"ERROR", MB_OK);
    else MessageBoxW(GetActiveWindow(), wss.str().c_str(), L"RESULT", MB_OK);
}


void dualcalc::on_addButton_clicked()
{
    std::string num1str = ui->num1->toPlainText().toStdString();
    std::string num2str = ui->num2->toPlainText().toStdString();

    double num1 = ::atof(num1str.c_str());
    double num2 = ::atof(num2str.c_str());

    double result = num1 + num2;

    std::wstringstream wss;
    wss << result;

    if (ui->num1->toPlainText() == "" || ui->num2->toPlainText() == "") MessageBoxW(GetActiveWindow(), L"NUM1 or NUM2 is empty.", L"ERROR", MB_OK);
    else MessageBoxW(GetActiveWindow(), wss.str().c_str(), L"RESULT", MB_OK);
}


void dualcalc::on_subtractButton_clicked()
{
    std::string num1str = ui->num1->toPlainText().toStdString();
    std::string num2str = ui->num2->toPlainText().toStdString();

    double num1 = ::atof(num1str.c_str());
    double num2 = ::atof(num2str.c_str());

    double result = num1 - num2;

    std::wstringstream wss;
    wss << result;

    if (ui->num1->toPlainText() == "" || ui->num2->toPlainText() == "") MessageBoxW(GetActiveWindow(), L"NUM1 or NUM2 is empty.", L"ERROR", MB_OK);
    else MessageBoxW(GetActiveWindow(), wss.str().c_str(), L"RESULT", MB_OK);
}


void dualcalc::on_multiplyButton_clicked()
{
    std::string num1str = ui->num1->toPlainText().toStdString();
    std::string num2str = ui->num2->toPlainText().toStdString();

    double num1 = ::atof(num1str.c_str());
    double num2 = ::atof(num2str.c_str());

    double result = num1 * num2;

    std::wstringstream wss;
    wss << result;

    if (ui->num1->toPlainText() == "" || ui->num2->toPlainText() == "") MessageBoxW(GetActiveWindow(), L"NUM1 or NUM2 is empty.", L"ERROR", MB_OK);
    else MessageBoxW(GetActiveWindow(), wss.str().c_str(), L"RESULT", MB_OK);
}


void dualcalc::on_sqrtButton_clicked()
{
    std::string num1str = ui->num1->toPlainText().toStdString();
    std::string num2str = ui->num2->toPlainText().toStdString();

    double num1 = ::atof(num1str.c_str());
    double num2 = ::atof(num2str.c_str());

    double result = pow(num2, 1/num1);

    std::wstringstream wss;
    wss << result;

    if (ui->num1->toPlainText() == "" || ui->num2->toPlainText() == "") MessageBoxW(GetActiveWindow(), L"NUM1 or NUM2 is empty.", L"ERROR", MB_OK);
    else MessageBoxW(GetActiveWindow(), wss.str().c_str(), L"RESULT", MB_OK);
}

