#include "server.h"

Server::Server()
{
    pool = new QThreadPool(this);
    pool->setMaxThreadCount(5000);
}


void Server::startServer()
{
if (this->listen(QHostAddress::Any,5000))
    {
        //if(db.open())
        //{
        qDebug()<<"Listening and open DB";
      //  }
   // }
    //else
   //{
      //  qDebug()<<"Not listening";
    }else
    {
         qDebug()<<"Not listening";
}
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    /*
    socket = new QTcpSocket(new QObject());

    socket->setSocketDescriptor(socketDescriptor);

        connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
        connect(socket,SIGNAL(disconnected()),this,SLOT(sockDisconect()));

    qDebug()<<socketDescriptor<<" Client connected";

    //"key":"value" or value
    //{"type":"connect","status":"yes"}

    //socket->write("{\"type\":\"connect\",\"status\":\"yes\"}");
    socket->write("you are connect");
    //qDebug()<<"Send client connect status - YES";
    */
   // socket = new QTcpSocket(new QObject());

   // socket->setSocketDescriptor(socketDescriptor);
    // connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));

    MyTask *task = new MyTask();

    task->setAutoDelete(true);

    connect(task,SIGNAL(sentData(QByteArray)),this,SLOT(getData(QByteArray)));

    task->SocketDescriptor = socketDescriptor;

    pool->start(task);
}

void Server::getData(QByteArray data)
{
    qDebug()<<"get Data: "<<data;
}

void Server::sockReady()
{

    Data = socket->readAll();
    qDebug()<<"Data: "<<Data;
}

void Server::sockDisconect()
{
    qDebug()<<"Disconnect";
    socket->deleteLater();
}
