#include "server.h"

Server::Server()
{
    pool = new QThreadPool(this);   //Create new pool for multy stream
    pool->setMaxThreadCount(5000);  //User's capaciry
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
    MyTask *task = new MyTask();    //Create new task

    task->setAutoDelete(true);  //autodelete

    connect(task,SIGNAL(sentData(QByteArray)),this,SLOT(getData(QByteArray))); //Recieve ASK from Clients

    task->SocketDescriptor = socketDescriptor;  //set Decsriptor of client's socket

    pool->start(task); //Start multy stream
}

void Server::getData(QByteArray data)
{
    qDebug()<<"server.cpp - get Data: "<<data; //Receive information from clients
}

void Server::sockReady() //I did not use it, because of I get all information in TASK. And I dib not make Socket for Server.cpp
{
   // Data = socket->readAll();
   // qDebug()<<"Data sockReady: "<<Data;
}

void Server::sockDisconect()    //I did not use it, because of I get all information in TASK. And I dib not make Socket for Server.cpp
{
   // qDebug()<<"Disconnect";
   // socket->deleteLater();
}
