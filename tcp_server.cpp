#include "tcp_server.h"

Tcp_server::Tcp_server(QObject *parent): QObject(parent)

{
    m_ptcpServer = new QTcpServer();
    if (!m_ptcpServer->listen(QHostAddress::Any, 4444)) {

  qDebug()<<"error";


    m_ptcpServer->close();
    return;
    }
    connect(m_ptcpServer,SIGNAL(newConnection()),this,SLOT(slotNewConnection()) );

        m_ptxt = new QTextEdit;
        m_ptxt->setReadOnly(true);
     Tcp_server* pClientSocket_1= (Tcp_server*)sender();

   //  qDebug()<<"_____________________________________________ : "<<pClientSocket_1;

     //qDebug()<<"+++++++++++++++++++++++++++++++++++++++++++++ : "<<m_ptcpServer;


        //MainWindow* instance= MainWindow::GetInstance();

//
//        connect (this,SIGNAL (adres(QTcpSocket* )),instance,SLOT(adres_slot(QTcpSocket*)));
        //Layout setup
        //QVBoxLayout* pvbxLayout = new QVBoxLayout;
       // pvbxLayout->addWidget(new QLabel("<H1>Server</H1>"));
//        pvbxLayout->addWidget(m_ptxt);
        //        setLayout(pvbxLayout);



}
Tcp_server::Tcp_server(int port)

{
    qDebug()<<"Port  "<<port;
    m_ptcpServer = new QTcpServer();
       portt=port;
    if (!m_ptcpServer->listen(QHostAddress::Any, port))
    {

  qDebug()<<"error";


    m_ptcpServer->close();
    return;
    }
    connect(m_ptcpServer,SIGNAL(newConnection()),this,SLOT(slotNewConnection()) );

        m_ptxt = new QTextEdit;
        m_ptxt->setReadOnly(true);
     Tcp_server* pClientSocket_1= (Tcp_server*)sender();

     qDebug()<<"_____________________________________________ : "<<pClientSocket_1;

     qDebug()<<"+++++++++++++++++++++++++++++++++++++++++++++ : "<<m_ptcpServer;


        //MainWindow* instance= MainWindow::GetInstance();

//
//        connect (this,SIGNAL (adres(QTcpSocket* )),instance,SLOT(adres_slot(QTcpSocket*)));
        //Layout setup
        //QVBoxLayout* pvbxLayout = new QVBoxLayout;
       // pvbxLayout->addWidget(new QLabel("<H1>Server</H1>"));
//        pvbxLayout->addWidget(m_ptxt);
        //        setLayout(pvbxLayout);



}

Tcp_server::~Tcp_server()
{

    m_ptcpServer->close();
    if(pClientSocket!=NULL)
    pClientSocket->close();
}

void Tcp_server::sendToClient(QTcpSocket *pSocket, const QString &str)
{

    QByteArray  arrBlock;


       pSocket->write(arrBlock);
}

void Tcp_server::slotNewConnection()
{

    qDebug()<<"Connected ";
   pClientSocket = m_ptcpServer->nextPendingConnection();




   emit adres(pClientSocket);

    connect (pClientSocket, SIGNAL(disconnected()),  pClientSocket, SLOT(deleteLater())) ;

    connect (pClientSocket, SIGNAL(readyRead() ),this, SLOT(slotReadClient())) ;

  //  sendToClient(pClientSocket, "Server Response: Connected!");
}

void Tcp_server::slotReadClient()
{


    QByteArray ba;

     QTcpSocket* pClientSocket = (QTcpSocket*)sender();
   ba= pClientSocket->readAll();
   qDebug()<<"DDDDDDDDDDD"<<portt;

   if(portt==4352)
   {

       qDebug()<<"DDDDDDDDDDD";
       emit command_s_ether_PJ(ba);
       return;
   }

   QByteArray data = ba.toHex().toUpper();
   this->send_to(ba);
    //qDebug()<<ba;
    packet B(data);
    QVector<parameter> vec_par = B.getParameters();
    for(int i=0;i<vec_par.count();i++){
        emit command_s_ether(vec_par[i]);
    }



      qDebug()<<"Reading";

//    QDataStream in(pClientSocket);
//   // in.setVersion(QDataStream::Qt 5 3);
//    for (;;)
//    {
//    if ( !m_nNextBlockSize) {
//    if (pClientSocket->bytesAvailable()  < sizeof (quint16)) {
//    break;
//    in >> m_nNextBlockSize;
//    if (pClientSocket->bytesAvailable() < m_nNextBlockSize)
//    break;
//    QTime time;
//    QString str;
//    in >> time >> str;
//    QString strMessage ;
//    time.toString() + " " + "Client has sent - " + str;
//    m_ptxt->append(strMessage);
//   m_nNextBlockSize = 0;

      //      QByteArray a;
      //      a.append("sdfsdf");


      //       sendToClient(pClientSocket,a.data());

//    "Server Response: Received \"" + str + "\""
//    ) ;

}

void Tcp_server::send_to(QByteArray TO)
{




   // pClientSocket = m_ptcpServer->nextPendingConnection();


    if(pClientSocket!=NULL)
    {
        qDebug()<<"SEND  to socket ";
        pClientSocket->write(TO);

    }

}

void Tcp_server::Answer_tcp()
{



}

