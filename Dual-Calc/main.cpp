#include <QApplication>
#include <Windows.h>

#include "dualcalc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dualcalc w;
    w.show();

    SetWindowText(GetActiveWindow(), L"Dual-Calc by https://github.com/sakiere");

    return a.exec();
}
