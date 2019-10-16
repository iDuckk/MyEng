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
    bool start = true;

    void setStyleClick(QPushButton* b);
    void setStyleButton(QPushButton* b);
    void challengeOne();
public slots:
    void sockReady();
    void sockDisconnected();
private slots:
    void on_pushButton_Click_clicked();
    void on_pushButton_Write_clicked();
    void on_pushButton_lvl_clicked();
    void getWord(QString word);
    void on_pushButton_About_clicked();

signals:
        void sendWordline(QString);
};
#endif // MAINWINDOW_H
