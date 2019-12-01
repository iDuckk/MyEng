#ifndef MYTASK_H
#define MYTASK_H

#include <QObject>
//#include <QWidget>
#include <QRunnable>
#include <QTcpSocket>
#include <QDebug>
#include <QByteArray>
#include <QFile>

class MyTask :public QObject, public QRunnable
{
    Q_OBJECT
public:
    MyTask();

    int SocketDescriptor;

    QByteArray Data;
    QByteArray itogAudio;

    QTcpSocket* socket;
protected:
    void run();

signals:
    void sentData(QByteArray data);
};

#endif // MYTASK_H
