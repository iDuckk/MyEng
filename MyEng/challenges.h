#ifndef CHALLENGES_H
#define CHALLENGES_H

#include <QDialog>
#include <QMessageBox>
#include <QPushButton>
#include <QDebug>
#include <QComboBox>

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

    void level(int ind);

    QComboBox *lvl;
    QComboBox *part;

private slots:

    void on_radioButton_OneW_clicked(bool checked);
    void on_radioButton_Variation_clicked(bool checked);
    void choosePart(int index);

    void on_pushButton_Ok_clicked();

    void on_pushButton_Cancel_clicked();

    void on_comboBox_lvl_currentIndexChanged(int index);

signals:
    void RadioOneW(bool trueOne);
    void RadioVar(bool trueVar);
    void StartChallenge();
    void numberLVL(int index);
private:
    Ui::Challenges *ui;

signals:

};

#endif // CHALLENGES_H
