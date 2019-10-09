#include "mainwindow.h"
#include "ui_mainwindow.h"

static const QString DEFS_URL = "file:///D:/Repository/MyEng/QSimpleUpdater/definitions/updates.json";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_updater = QSimpleUpdater::getInstance(); /* Client ask server about VERSION, if new, it will download. And chang lod with version. TXT or JSON */
                                /*
     QString version = ui->lineEdit->text();
    m_updater->setModuleVersion (DEFS_URL, version);
    // Check for updates
    m_updater->checkForUpdates (DEFS_URL);
                                 */

    socket = new QTcpSocket(new QObject());
    connect(socket,SIGNAL(readyRead()),this,SLOT(sockReady()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(sockDisconnected()));

   // socket->connectToHost("127.0.0.1", 5000);
   // socket->write("I am not here");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sockReady()
{
    if(socket->readAll() == "Yes")
    {
    socket->write("I am not here");
    ui->lineEdit->setText("sadfasdf");
    }
}

void MainWindow::sockDisconnected()
{
    socket->deleteLater();
}


void MainWindow::on_pushButton_clicked()
{
    if(!socket->isOpen())
    {
        socket->connectToHost("127.0.0.1", 5000);
        socket->write("Push Button");
    }else{
        socket->disconnectFromHost();
        socket->close();
        socket->deleteLater();

        socket = new QTcpSocket(new QObject());
        socket->connectToHost("127.0.0.1", 5000);
        socket->write("Again");
    }
}
