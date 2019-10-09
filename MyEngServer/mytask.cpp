#include "mytask.h"

MyTask::MyTask()
{

}

void MyTask::run()
{
    if(!SocketDescriptor) return;

    QTcpSocket *socket;
    socket = new QTcpSocket();
    socket->setSocketDescriptor(SocketDescriptor);
    socket->waitForReadyRead();
    Data = socket->readAll();
        emit sentData(Data);

    qDebug()<<"Client: "<<Data;


    socket->waitForBytesWritten();

    //socket->disconnectFromHost();
    //socket->close();
    socket->deleteLater();
}
