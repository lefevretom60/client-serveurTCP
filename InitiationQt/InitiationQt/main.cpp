#include <iostream>
#define NOMINMAX
#include <Windows.h>
#include "InitiationQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(CP_UTF8);
    QApplication a(argc, argv);
    InitiationQt w;
    w.show();
    return a.exec();
}
