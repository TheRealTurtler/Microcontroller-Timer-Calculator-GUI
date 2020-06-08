#include "MTC.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MTC w;
    w.show();
    return a.exec();
}
