#include <QtCore/QCoreApplication>
#include "QTserv.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTserver srv(&a);
    return a.exec();
}