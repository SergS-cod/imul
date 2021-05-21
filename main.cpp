#include "mainwindow.h"

#include <QApplication>
#include <port.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Tcp_server g;
    port q;
    w.show();

    return a.exec();
}
