#ifndef CHALLENGES_H
#define CHALLENGES_H

#include <QDialog>
#include <QMessageBox>
#include <QPushButton>
#include <QDebug>

namespace Ui {
class Challenges;
}

class Challenges : public QDialog
{
    Q_OBJECT

public:
    explicit Challenges(QWidget *parent = nullptr);
    ~Challenges();


    bool OneW = false;
    bool var = false;

private slots:

    void on_radioButton_OneW_clicked(bool checked);
    void on_radioButton_Variation_clicked(bool checked);

    void on_pushButton_Ok_clicked();

    void on_pushButton_Cancel_clicked();

signals:
    void RadioOneW(bool trueOne);
    void RadioVar(bool trueVar);
    void StartChallenge();
private:
    Ui::Challenges *ui;

signals:

};

#endif // CHALLENGES_H
