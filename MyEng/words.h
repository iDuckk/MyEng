#ifndef WORDS_H
#define WORDS_H

#include <QDialog>
#include <QStringList>
#include <QTableWidgetItem>
#include <QDebug>
#include <QString>

namespace Ui {
class Words;
}

class Words : public QDialog
{
    Q_OBJECT

public:
    explicit Words(QWidget *parent = nullptr);
    ~Words();

    QStringList *listWords;

public slots:
    void setListWords(QStringList, QStringList);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Words *ui;
};

#endif // WORDS_H
