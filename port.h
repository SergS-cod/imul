#ifndef PORT_H
#define PORT_H

#include <QObject>
#include <QThread>
#include "parameter.h"
#include "packet.h"


#include <QTcpServer>
#include <QTcpSocket>




#include <QSerialPort>
#include  <QDebug>


class port :  public QThread
{
     Q_OBJECT
public:

     port();
      port(QString);
     QSerialPort *serialPort;
     ~port();
protected:
      void run();

signals:
void  command_s(parameter);


public slots:
   void serialRecieve();
void Answer_port();
   void send_to(QByteArray TO);
  // void  otvet(QByteArray TO);

};

#endif // PORT_H
