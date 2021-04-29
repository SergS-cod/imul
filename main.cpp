#include "mainwindow.h"

#include <QApplication>
#include <port.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    port q;
    w.show();

    return a.exec();
}
