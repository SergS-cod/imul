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



class Tcp_server : public QObject
{
    Q_OBJECT
public:
    explicit Tcp_server(QObject *parent = 0);
    Tcp_server(int);
   ~Tcp_server();
  int portt;
    QTcpServer * m_ptcpServer;
//     * m_ptxt;
//    quintlб m_nNextBlockSize;
    quint16     m_nNextBlockSize;
    QTextEdit *  m_ptxt;


    QTcpSocket * pClientSocket=NULL;

    void sendToClient(QTcpSocket* pSocket, const QString& str);
    public slots:
     virtual void slotNewConnection();
    void slotReadClient ();
signals :
    void  command_s_ether(parameter);
    void  command_s_ether_PJ(QByteArray);

    void  adres( QTcpSocket * );
    void proverka(int);

public slots:
    void send_to(QByteArray TO);
    void Answer_tcp();

};

#endif // TCP_SERVER_H
