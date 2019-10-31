#ifndef FORMONE_H
#define FORMONE_H

#include <QWidget>
#include <QDebug>
#include <QString>
#include <QLineEdit>
#include <QStringList>
#include <QRandomGenerator>


namespace Ui {
class FormOne;
}

class FormOne : public QWidget
{
    Q_OBJECT

public:
    explicit FormOne(QWidget *parent = nullptr);
    ~FormOne();

    QLineEdit *lEdit;
    QString CorrectWeng = "not zero";
    QString CorrectWrus;
    QStringList formlistEng;
    QStringList formlistRus;

    void DefaultLineEdit();
private slots:
    void on_pushButton_play_clicked();
    void getLineWords(QString, QString);
    void on_lineEdit_returnPressed();

private:
    Ui::FormOne *ui;
signals:
        void CorrectWord(QString);
        void WrongWord(QString);
};

#endif // FORMONE_H
