#include "mainwindow.h"
#include "ui_mainwindow.h"

static const QString DEFS_URL = "file:///D:/Repository/MyEng/QSimpleUpdater/definitions/updates.json"; //Address of file, safes information about where and what app need to download.

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /* Set buttons are invisable */
    ui->pushButton_About->setVisible(false);
    ui->pushButton_Write->setVisible(false);
    ui->pushButton_words->setVisible(false);
    ui->pushButton_lvl->setVisible(false);
    ui->pushButton_Settings->setVisible(false);

    /* Create Widget of chalanges */
    FormO = new FormOne(ui->widget_one);
    FormO->setVisible(false);
    FormO->setEnabled(false);

    connect(FormO, SIGNAL(sentWord(QString)), this, SLOT(getWord(QString))); //recieve word from FORMONE`s lineEdit
    connect(this, SIGNAL(sendWordline(QString)), FormO, SLOT(getLineWords(QString))); //send word from MaindWindow(db) to FORMONE`s lable

    formVar = new FormVar(ui->widget_one);
    formVar->setVisible(false);
    formVar->setEnabled(false);

    /* Change style of Button Click */
    setStyleClick(ui->pushButton_Click);
    setStyleButton(ui->pushButton_Write);
    setStyleButton(ui->pushButton_lvl);
    setStyleButton(ui->pushButton_About);
    setStyleButton(ui->pushButton_Settings);

    /* Open Database */
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("MyEng");
    if(!db.open()){
        qDebug()<<db.lastError().text();
    }else{
        qDebug()<<"Database opened";
    }







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

void MainWindow::setStyleClick(QPushButton *b)
{
    b->setStyleSheet("QPushButton:hover {"
                                       "border-style: solid;"
                         "border-width:1px;"
                                       "border-width:1px;"
                                       "border-radius:50px;"
                                       "border-color: Red;"
                                       "max-width:100px;"
                                       "max-height:100px;"
                                       "min-width:100px;"
                                       "min-height:100px;} "
                                       "QPushButton { "
                                       "border-style: solid;"
                                       "border-width:1px;"
                                       "border-radius:50px;"
                                       "border-color: Grey;"
                                       "max-width:100px;"
                                       "max-height:100px;"
                                       "min-width:100px;"
                                       "min-height:100px;} "
                                       "QPushButton:pressed{"
                                       "border-style: solid;"
                                       "border-width:1px;"
                                       "border-radius:50px;"
                                       "border-color: Red;"
                                       "max-width:100px;"
                                       "max-height:100px;"
                                       "min-width:100px;"
                                       "min-height:100px;"
                     "color: red} ");
}

void MainWindow::setStyleButton(QPushButton *b)
{
    b->setStyleSheet("QPushButton:hover {"
                                       "border-style: solid;"
                         "border-width:1px;"
                                       "border-width:1px;"
                                       "border-radius:25px;"
                                       "border-color: Blue;"
                                       "max-width:50px;"
                                       "max-height:50px;"
                                       "min-width:50px;"
                                       "min-height:50px;} "
                                       "QPushButton { "
                                       "border-style: solid;"
                                       "border-width:1px;"
                                       "border-radius:25px;"
                                       "border-color: Grey;"
                                       "max-width:50px;"
                                       "max-height:50px;"
                                       "min-width:50px;"
                                       "min-height:50px;} "
                                       "QPushButton:pressed{"
                                       "border-style: solid;"
                                       "border-width:1px;"
                                       "border-radius:25px;"
                                       "border-color: Red;"
                                       "max-width:50px;"
                                       "max-height:50px;"
                                       "min-width:50px;"
                                       "min-height:50px;"
                     "color: red} ");
}

void MainWindow::challengeOne()
{

}

void MainWindow::getWord(QString word)
{
    /* Get word from FORMone */
    wordMain = word;
    //qDebug()<<"getWord"<<word;
}

void MainWindow::sockReady()
{
    if(socket->readAll() == "Yes")
    {
    socket->write("I am not here");
   // ui->lineEdit->setText("sadfasdf");
    }
}

void MainWindow::sockDisconnected()
{
    socket->deleteLater();
}


void MainWindow::on_pushButton_Click_clicked()
{
    //qDebug()<<"Stop";
    if(start)
    {
        ui->pushButton_Click->setText("S&top");
        start = false;
        /* Set buttons are visiable*/
        ui->pushButton_About->setVisible(true);
        ui->pushButton_Write->setVisible(true);
        ui->pushButton_words->setVisible(true);
        ui->pushButton_lvl->setVisible(true);
        ui->pushButton_Settings->setVisible(true);
    }else{
        ui->pushButton_Click->setText("S&tart");
        start = true;
        /* Set buttons are not visiable*/
        ui->pushButton_About->setVisible(false);
        ui->pushButton_Write->setVisible(false);
        ui->pushButton_words->setVisible(false);
        ui->pushButton_lvl->setVisible(false);
        ui->pushButton_Settings->setVisible(false);
    }

}

void MainWindow::on_pushButton_Write_clicked()
{
    /* Chose challenge */
    QMessageBox msgBox;
    msgBox.setText("Choose what chlange do you want.");
    QPushButton *WriteButton = msgBox.addButton(tr("Write"), QMessageBox::ActionRole);
    QPushButton *GuessButton = msgBox.addButton(tr("Guess"), QMessageBox::ActionRole);
    QPushButton *abortButton = msgBox.addButton(QMessageBox::Abort);
    msgBox.exec();

    if (msgBox.clickedButton() == WriteButton) {
        FormO->setVisible(true);
        formVar->setVisible(false);
    }else if (msgBox.clickedButton() == GuessButton){
        FormO->setVisible(false);
        formVar->setVisible(true);
    }else if (msgBox.clickedButton() == abortButton) {
        // abort
    }

}

void MainWindow::on_pushButton_lvl_clicked()
{
        formVar->setEnabled(true);
        FormO->setEnabled(true);
}

void MainWindow::on_pushButton_About_clicked()
{
    QString s = "huj";
    emit sendWordline("s");
    QMessageBox::warning(this, "poh", wordMain);

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
