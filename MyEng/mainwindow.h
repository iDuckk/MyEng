#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QSimpleUpdater.h>

#include "formone.h"
#include "formvar.h"
#include "challenges.h"
#include "words.h"

#include <QPushButton>
#include <QMessageBox>
#include <QString>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlQuery>
#include <QStringList>
#include <QRandomGenerator>
#include <windows.h>
#include <QList>
#include <QAudioOutput>
#include <QBuffer>
#include <QEventLoop>
#include <QAudioFormat>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;

    QSimpleUpdater* m_updater;

    FormOne *FormO;
    FormVar *formVar;
    Challenges *chellange;
    Words *wrds;

    QString wordMain;

    QSqlDatabase db;
    QSqlQuery query;
    QStringList listEng;
    QStringList listRus;
    QAudioOutput *audio;

    int count = 0;
    int finish =0;
    int LastWord;
    int *arNum;

    bool start = true;
    bool equal = false;
    bool challengeOneW = false;
    bool challengeVar = false;
    bool AudioPlaying;

    void setStyleClick(QPushButton* b);
    void setStyleButton(QPushButton* b);

    void PlayAudioFile();
public slots:
    void sockReady();
    void sockDisconnected();
private slots:
    void on_pushButton_Click_clicked();
    void on_pushButton_Write_clicked();
    void on_pushButton_lvl_clicked();
    void on_pushButton_About_clicked();
    void on_pushButton_Settings_clicked();

    void CorrectAnswer(QString word);
    void WrongAnswer(QString word);

    void RadioCheckOne(bool check);
    void RadioCheckVar(bool check);
    void StartChallengeMain();

    void on_pushButton_words_clicked();

    void playWord();

signals:
        void sendWordline(QString, QString);
        void CapacityWords(int num);
        void CurrentWord(int num);
        void sendListToWords(QStringList, QStringList);
};
#endif // MAINWINDOW_H
