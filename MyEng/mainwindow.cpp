#include "mainwindow.h"
#include "ui_mainwindow.h"

static const QString DEFS_URL = "file:///D:/Repository/MyEng/QSimpleUpdater/definitions/updates.json"; //Address of file, safes information about where and what app need to download.

/********** TASK TASK TASK TASK TASK ****************************

    Создать базу данных

*****************************************************************/
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
    /* Change style of Button Click */
    setStyleClick(ui->pushButton_Click);
    setStyleButton(ui->pushButton_Write);
    setStyleButton(ui->pushButton_lvl);
    setStyleButton(ui->pushButton_About);
    setStyleButton(ui->pushButton_Settings);

    /* Create Widget of chalange OneWord */
    FormO = new FormOne(ui->widget_one);
    FormO->setVisible(false);
    FormO->setEnabled(false);

    connect(FormO, SIGNAL(clickedPlay()), this, SLOT(playWord()));
    connect(FormO, SIGNAL(CorrectWord(QString)), this, SLOT(CorrectAnswer(QString))); //*** if CORRECT word *** recieved word from FormOne`s lineEdit
    connect(FormO, SIGNAL(WrongWord(QString)), this, SLOT(WrongAnswer(QString))); //*** if WRONG word *** recived word from FormOne`s lineEdit
    connect(this, SIGNAL(sendWordline(QString, QString)), FormO, SLOT(getLineWords(QString, QString))); //send word from MaindWindow(db) to FORMONE`s lable
    connect(this, SIGNAL(CapacityWords(int)),FormO, SLOT(MainCount(int)));
    connect(this, SIGNAL(CurrentWord(int)),FormO, SLOT(CurrentCount(int)));

    /* Create Widget of chalange VarWord */
    formVar = new FormVar(ui->widget_one);
    formVar->setVisible(false);
    formVar->setEnabled(false);

    /* challenge Window */
    chellange = new Challenges(this);
    //chellange->lvl->addItem("WORDS");

    connect(chellange,SIGNAL(RadioOneW(bool)),this,SLOT(RadioCheckOne(bool))); //if challenge OneWOrd
    connect(chellange,SIGNAL(RadioVar(bool)),this,SLOT(RadioCheckVar(bool))); //If challenge Var
    connect(chellange, SIGNAL(StartChallenge()), this, SLOT(StartChallengeMain())); //start challenge

    /* Open Database */
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("MyEng.db");
    if(!db.open()){
        qDebug()<<db.lastError().text();
    }else{
        qDebug()<<"Database opened";
    }

//*************************************************************************************************************************************





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
//****************************************************************************************************************************************
}

MainWindow::~MainWindow()
{
    db.close();
    qDebug()<<"Close Database";

    delete audio;
    delete wrds;
    delete FormO;
    delete formVar;
    delete chellange;
    delete ui;
}

void MainWindow::RadioCheckOne(bool check)
{
    //choosen challenge OneWord
    challengeOneW = check;
    challengeVar = false;
}

void MainWindow::RadioCheckVar(bool check)
{
    //choosen challenge Var
    challengeVar = check;
    challengeOneW = false;
}

void MainWindow::StartChallengeMain()
{
    ui->pushButton_words->setVisible(true);
    // Set data Base ****************
    QString Level;
    Level = chellange->lvl->currentText() + chellange->part->currentText();
    qDebug()<<"level: "<<Level;

    formVar->setEnabled(true);
    FormO->setEnabled(true);
    /* Create query */
    query = QSqlQuery("db");
    QString str = "SELECT *FROM `" + Level + "`;";
    //QString str = "SELECT *FROM WORDS;";
    query.exec(str);

    /* GET words */
    while (query.next()) {
        count++;
        listEng<<query.value(1).toStringList();
        listRus<<query.value(2).toStringList();
        //QMessageBox::information(this, "Check", query.value(2).toString());
    }
    emit CapacityWords(count);
    emit sendListToWords(listEng, listRus);
    //*******************************
    if(challengeOneW)
    {
        //Challenge OneWord
        FormO->setVisible(true);
        formVar->setVisible(false);

        /* send lists of Word */
        FormO->formlistRus = listRus;
        FormO->formlistEng = listEng;

        arNum = new int[count]();

        /* Start challenge */
        FormO->lEdit->returnPressed();
        FormO->lEdit->setFocus();

    }else if(challengeVar){
        //If Challenge VarWord
        FormO->setVisible(false);
        formVar->setVisible(true);
    }
    //delete chellange;
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

void MainWindow::PlayAudioFile() //Play Audio
{
    QByteArray *dataAudio = new QByteArray(); // Create Byte array for AudioText file

    QAudioFormat format;    //Set options of audio Output
    format.setChannelCount(2);
    format.setSampleRate(44100);  //44100 - 24000
    format.setSampleSize(16);      //16 - 8
    format.setCodec("audio/pcm");
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setSampleType(QAudioFormat::SignedInt);    //SignedInt - UnSignedInt

    audio = new QAudioOutput(QAudioDeviceInfo::defaultInputDevice(), format, this); //Create audio Output
    audio->setBufferSize(20240);


    while(1) //Do that until whole file will download
    {
        if(socket->waitForReadyRead(100)) //wait 1 sec
            dataAudio->append(socket->readAll());   //Add part of file
        else
            break;  // If whole file downloaded
    }

    qDebug()<<"Playing file: "<<dataAudio->size();

    QBuffer *buffer = new QBuffer(dataAudio);   //Create buffer that audioOutput can read it

    QEventLoop *loop = new QEventLoop(this); //Create Loop for playing

    buffer->open(QIODevice::ReadOnly);
    audio->start(buffer);
    loop->exec();   //Start loop

    buffer->close();
}

void MainWindow::WrongAnswer(QString word)
{
    QMessageBox::information(this, "Wrong!!", word);
}

void MainWindow::CorrectAnswer(QString word)
{
    qDebug()<<word;

    numWord = 0;
    CurrentWord(finish + 1);
    /************ Set a new word, that it do not repeat  **************/

    for (int i = 0; i < finish || finish == 0; i++) {

        /* Generation of word's number*/
        numWord = QRandomGenerator::global()->bounded(count);
        equal = false;

        /* First word */
        if(finish == 0)
        {
            arNum[finish] = numWord;
            qDebug()<<" first word = "<< arNum[finish] ;
            break;
        }

        /* Last word */
        if(finish == count)
        {
            qDebug()<<"LastWord = "<<arNum[count - 1];
            numWord = arNum[count - 1];
            FormO->CorrectWeng = "not zero";
            break;
        }else{

        /* if finish  does not equal the last word */
        for(int i = 0; i < finish ; i++)
        {
            if(arNum[i] == numWord) //Seek the word, that do not repeat.
            {
                equal = true;
            }
        }

       /* for(int i = 0; i < finish; i++)
        {
            qDebug()<< i << " = " <<arNum[i];
        }*/

        if(equal)
        {
            qDebug()<<"Equal: " <<numWord<< " = " << arNum[i];
            numWord = QRandomGenerator::global()->bounded(count);       //Generate a new word's number
            i = 0;                                                     // Start from the beginning loop  of "Set a new word"
        }else{
            qDebug()<<"Not equal"  <<numWord;                       //If word doed not the same
            arNum[finish] = numWord;
            break;
        }

        }
    }
        /******************* Checking words ***********************/

    if(FormO->CorrectWeng == "not zero") //This will do if it is the first step
    {

        /* Send words to FormO */
        emit sendWordline(listRus.at(numWord), listEng.at(numWord));
    }else{
        FormO->lEdit->clear();
        QMessageBox::information(this, "Correct!", FormO->CorrectWeng + " = " + FormO->CorrectWrus);
        /* Send words to FormO */
        emit sendWordline(listRus.at(numWord), listEng.at(numWord));
    }

    /* Exit from challange */
    if(count == finish)
    {
    FormO->lEdit->clear();
    emit sendWordline("You've done", "");
    FormO->setEnabled(false);
    }else{
    finish++;
    qDebug()<< "finish: " <<finish;
    }
}

void MainWindow::sockReady()
{
   /* if(socket->readAll() == "Yes")
    {
    socket->write("I am not here");
    }*/
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

        wrds = new Words(this); //create Words windows
        connect(this, SIGNAL(sendListToWords(QStringList, QStringList)), wrds, SLOT(setListWords(QStringList, QStringList))); //Send list words of challeng's part

        FormO->DefaultLineEdit();
        ui->pushButton_lvl->setEnabled(true);

        start = false;
        /* Set buttons are visiable*/
        ui->pushButton_About->setVisible(true);
        ui->pushButton_Write->setVisible(true);
        //ui->pushButton_words->setVisible(true);
        ui->pushButton_lvl->setVisible(true);
        ui->pushButton_Settings->setVisible(true);
        ui->pushButton_Write->setEnabled(true);
    }else{
        ui->pushButton_Click->setText("S&tart");

        delete wrds;    //delete Words window

        formVar->setEnabled(false);
        formVar->setVisible(false);
        FormO->setEnabled(false);
        FormO->setVisible(false);
        start = true;
        /* Set buttons are not visiable*/
        ui->pushButton_About->setVisible(false);
        ui->pushButton_Write->setVisible(false);
        ui->pushButton_words->setVisible(false);
        ui->pushButton_lvl->setVisible(false);
        ui->pushButton_Settings->setVisible(false);

        FormO->CorrectWeng = "not zero";
    }

}

void MainWindow::on_pushButton_Write_clicked()
{
    chellange->show();

    ui->pushButton_Write->setEnabled(false);
}

void MainWindow::on_pushButton_lvl_clicked()
{/*
    ui->pushButton_Write->setEnabled(true);
    ui->pushButton_lvl->setEnabled(false);
    formVar->setEnabled(true);
    FormO->setEnabled(true);
    // Create query */
/*    query = QSqlQuery("db");
    QString str = "SELECT *FROM `" + Level + "`;";
    //QString str = "SELECT *FROM WORDS;";
    query.exec(str);
    // GET words */
/*    while (query.next()) {
        count++;
        listEng<<query.value(1).toStringList();
        listRus<<query.value(2).toStringList();
        //QMessageBox::information(this, "Check", query.value(2).toString());
    }
*/
}

void MainWindow::on_pushButton_About_clicked()
{
    //QString s = "huj";
    //emit sendWordline("rus", "eng");
  /*  QMessageBox::warning(this, "connect to server", wordMain);

    if(!socket->isOpen())
    {
        socket->connectToHost("192.168.1.148", 5000);
        socket->write("Push Button");
    }else{
        socket->disconnectFromHost();
        socket->close();
        socket->deleteLater();

        socket = new QTcpSocket(new QObject());
        socket->connectToHost("192.168.1.148", 5000);
        socket->write("Again");
    }*/
}

void MainWindow::on_pushButton_Settings_clicked()
{

}

void MainWindow::on_pushButton_words_clicked()
{
    wrds->show();
}

void MainWindow::playWord()
{
    //QMessageBox::warning(this, "connect to server", wordMain);

    QString path = "D:/Qt Project/" +chellange->lvl->currentText() + chellange->part->currentText() + "/" + listEng.at(numWord) +".wav";  //"D:/Qt Project/Untitled.wav" - Path of track

    QByteArray Data;
    Data.append(path);

    if(!socket->isOpen())   //When you connect to server first time
    {
        socket->connectToHost("192.168.1.148", 5000);
        socket->write(Data);

        PlayAudioFile();
    }else{                  //When you connect to server after first time =))))))))))))))
        socket->disconnectFromHost();
        socket->close();
        socket->deleteLater();

        socket = new QTcpSocket(new QObject());
        socket->connectToHost("192.168.1.148", 5000);
        socket->write(Data);

        audio->stop();
        audio->reset();
        PlayAudioFile();
    }
}
