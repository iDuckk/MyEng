#include <QCoreApplication>
#include "server.h"
#include "update.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Update up;
    //up.checkForUpdates();

    Server mServer;
    mServer.startServer();

    return a.exec();
}
