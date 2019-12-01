#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QThreadPool>
#include <QFile>

#include "mytask.h"

class Server : public QTcpServer
{
    Q_OBJECT
public:
    Server();

    QTcpSocket* socket;
    QByteArray Data;
    QByteArray *Data1;
    QJsonDocument doc;

public slots:
    void startServer();
    void incomingConnection(qintptr socketDescriptor);
    void sockReady();
    void sockDisconect();
    void getData(QByteArray);
private:
    QThreadPool *pool;
};

#endif // SERVER_H
