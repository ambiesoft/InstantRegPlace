#include <QApplication>

#include "mainwindowreal.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowReal w;
    w.show();

    return a.exec();
}
