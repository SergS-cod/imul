#include "port.h"

port::port( )
{

    serialPort=new QSerialPort();
    // указали имя к какому порту будем подключаться
    serialPort->setPortName("COM3");
    // указали скорость
    serialPort->setBaudRate(QSerialPort::Baud9600);

    // пробуем подключится
    if (!serialPort->open(QIODevice::ReadWrite)) {
        // если подключится не получится, то покажем сообщение с ошибкой
        qDebug()<<" Error with COM port";           return;
    }


    MainWindow* instance= MainWindow::GetInstance();

    connect (serialPort,SIGNAL(readyRead()),this,SLOT(serialRecieve()));

    connect (this,SIGNAL (command_s(parameter)),instance,SLOT(razbor(parameter)));
 //   connect (instance,SIGNAL(s_send_to(QByteArray)),this,SLOT(send_to(QByteArray)));

    qDebug()<<"**************************************";
    start();
      connect (this,SIGNAL (command_s(parameter)),instance,SLOT(razbor(parameter)));

}

port::~port()
{

}

void port::run(){

}

void port::serialRecieve()
{
    QByteArray ba;

    ba=serialPort->readAll();
    //qDebug()<<ba;
    packet B(ba);
    QVector<parameter> vec_par = B.getParameters();
    for(int i=0;i<vec_par.count();i++){
        emit command_s(vec_par[i]);
    }
}


void port::send_to(QByteArray TO)
{

    qDebug()<<"====: "<< TO.data();

    if(serialPort->isOpen()){

        qDebug()<<serialPort->write(TO.data(),TO.size());
    }



}
