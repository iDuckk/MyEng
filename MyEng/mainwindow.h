#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QSimpleUpdater.h>
#include "formone.h"
#include "formvar.h"
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
    QString wordMain;

    QSqlDatabase db;
    QSqlQuery query;
    QStringList listEng;
    QStringList listRus;
    int count = 0;
    int finish =0;
    int LastWord;
    int *arNum;

    bool start = true;
    bool equal = false;

    void setStyleClick(QPushButton* b);
    void setStyleButton(QPushButton* b);
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

signals:
        void sendWordline(QString, QString);
};
#endif // MAINWINDOW_H
