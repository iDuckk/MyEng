#include "mytask.h"

MyTask::MyTask()
{

}

void MyTask::run()
{
    if(!SocketDescriptor) return;   //If socket descriptor did not get

    QTcpSocket *socket; //new Socket
    socket = new QTcpSocket();

    socket->setSocketDescriptor(SocketDescriptor);  //Set descriptor
    socket->waitForReadyRead();

    Data = socket->readAll(); //Got Data from Client
    emit sentData(Data);    //Send Data to Server.cpp, that if you need to use it without Socket connection

    qDebug()<<"Server my task - recieved Client's data: "<<Data;

    //if(Data == "Play")  //Send audio file
    //{
        QString path = (Data); //"D:/Qt Project/Untitled.wav"
        qDebug()<<"server path"<<path;

        QFile f;
        f.setFileName(path);    //opent Audio File as a Text

        if(f.open(QIODevice::ReadOnly | QIODevice::Truncate))
        {
            qDebug()<<"Server my task - send audio ";

            itogAudio.clear();  //For reason, that if you use it again
            itogAudio.append(f.readAll());  //add text audio
            itogAudio.remove(0, 140);       //delete title of .WAV audioFile
            itogAudio.chop(140);            //delete the end of file
            f.close();

             socket->write(itogAudio);   //sending
            //socket->write(QByteArray::number(itogAudio.size()));       //Send Size Auto
        }
   // }
        /*else if(Data == "Ok")  //Send audio file
    {
        qDebug()<<"Server my task - send audio ";

        socket->write(itogAudio);   //sending
    }*/

    socket->waitForBytesWritten();

    //socket->disconnectFromHost();
    //socket->close();
    socket->deleteLater();
}
