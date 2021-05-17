#ifndef PORT_H
#define PORT_H

#include <QObject>
#include <QThread>
#include "parameter.h"
#include "packet.h"

#include "mainwindow.h"


#include <QSerialPort>
#include  <QDebug>


class port :  public QThread
{
     Q_OBJECT
public:

     port();
     QSerialPort *serialPort;
     ~port();
protected:
      void run();

signals:
void  command_s(parameter);


public slots:
   void serialRecieve();

   void send_to(QByteArray TO);
  // void  otvet(QByteArray TO);

};

#endif // PORT_H
