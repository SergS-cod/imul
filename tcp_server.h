#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include <QtNetwork>
#include <QTcpServer>
#include <QWidget>
#include <QObject>
#include <QtGui>
#include <QTcpSocket>
#include <QTextEdit>

#include "parameter.h"
#include "packet.h"

#include "mainwindow.h"

class Tcp_server : public QWidget
{
    Q_OBJECT
public:
    Tcp_server();
   ~Tcp_server();
    QTcpServer * m_ptcpServer;
//     * m_ptxt;
//    quintlб m_nNextBlockSize;
    quint16     m_nNextBlockSize;
    QTextEdit *  m_ptxt;


    QTcpSocket * pClientSocket;

    void sendToClient(QTcpSocket* pSocket, const QString& str);
    public slots:
     virtual void slotNewConnection();
    void slotReadClient ();
signals :
    void  command_s(parameter);


public slots:
    void send_to(QByteArray TO);

};

#endif // TCP_SERVER_H
