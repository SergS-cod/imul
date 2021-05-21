#include "tcp_server.h"

Tcp_server::Tcp_server()
{
    m_ptcpServer = new QTcpServer();
    if (!m_ptcpServer->listen(QHostAddress::Any, 2323)) {

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


        MainWindow* instance= MainWindow::GetInstance();

      connect (this,SIGNAL (command_s(parameter)),instance,SLOT(razbor(parameter)));
        connect (this,SIGNAL (adres(QTcpSocket *)),instance,SLOT(adres_slot(QTcpSocket*)));
        //Layout setup
        //QVBoxLayout* pvbxLayout = new QVBoxLayout;
       // pvbxLayout->addWidget(new QLabel("<H1>Server</H1>"));
//        pvbxLayout->addWidget(m_ptxt);
        //        setLayout(pvbxLayout);
}


Tcp_server::~Tcp_server()
{

}

void Tcp_server::sendToClient(QTcpSocket *pSocket, const QString &str)
{

    QByteArray  arrBlock;


       pSocket->write(arrBlock);
}

void Tcp_server::slotNewConnection()
{

    qDebug()<<"gggggggggggg";
   pClientSocket = m_ptcpServer->nextPendingConnection();

   emit adres(pClientSocket);

    connect (pClientSocket, SIGNAL(disconnected()),  pClientSocket, SLOT(deleteLater())) ;

    connect (pClientSocket, SIGNAL(readyRead() ),this, SLOT(slotReadClient())) ;

    sendToClient(pClientSocket, "Server Response: Connected!");
}

void Tcp_server::slotReadClient()
{


    QByteArray ba;

     QTcpSocket* pClientSocket = (QTcpSocket*)sender();
   ba= pClientSocket->readAll();
    //qDebug()<<ba;
    packet B(ba);
    QVector<parameter> vec_par = B.getParameters();
    for(int i=0;i<vec_par.count();i++){
        emit command_s(vec_par[i]);
    }



      qDebug()<<"aaaaaaaaaaaa";

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

void Tcp_server::send_to(QByteArray TO, QTcpSocket *AS)
{
    qDebug()<<"SEND";
    // pClientSocket = m_ptcpServer->nextPendingConnection();

   // qDebug()<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<AS;
    if(AS!=NULL)
    {

        AS->write(TO);

    }
//     QTcpSocket * pClientSocket = m_ptcpServer->nextPendingConnection();
//     qDebug()<<"*************************"<<pClientSocket;
//     if(pClientSocket!=NULL)
//     pClientSocket->write(TO);
}

