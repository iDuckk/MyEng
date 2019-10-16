#ifndef FORMONE_H
#define FORMONE_H

#include <QWidget>
#include <QString>
#include <QtSql>

namespace Ui {
class FormOne;
}

class FormOne : public QWidget
{
    Q_OBJECT

public:
    explicit FormOne(QWidget *parent = nullptr);
    ~FormOne();

    QString *s;

private slots:
    void on_pushButton_play_clicked();
    void getLineWords(QString);
private:
    Ui::FormOne *ui;
    QSqlDatabase db;
signals:
        void sentWord(QString);
};

#endif // FORMONE_H
