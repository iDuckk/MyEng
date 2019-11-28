#include "challenges.h"
#include "ui_challenges.h"

Challenges::Challenges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Challenges)
{
    ui->setupUi(this);

    /* Choose lvl */
    lvl = ui->comboBox_lvl;

    /* Fill Levle comboBox*/
   for(int i = 1; i < 17; i++)
    {
        lvl->addItem(QString::number(i));
    }
    /* chosose paert of lvl */
    part = ui->comboBox_part;
    /* set first Lvl like a default */
    level(0);

    /* Connecting lvl combo and part combo, that the content of part combo depends of lvl combo */
    connect(this, SIGNAL(numberLVL(int)), this, SLOT(choosePart(int)));

    //Button accept( 'Ok' ) available only if you chose the challenge
    if(!ui->radioButton_OneW->isChecked() || !ui->radioButton_Variation->isChecked())
    ui->pushButton_Ok->setEnabled(false);
}

Challenges::~Challenges()
{
    delete ui;
}

void Challenges::level(int ind) // Fill "the Part comboBox" according to choice of "level combo"
{
    switch (ind) {
    case 0:
        part->clear();
        part->addItem("A");
        part->addItem("B");
        part->addItem("C");
        part->addItem("D");
        part->addItem("E");
        part->addItem("F");
        part->addItem("G");
        part->addItem("H");
        break;
    case 1:
        part->clear();
        part->addItem("A");
        break;

    }
}

void Challenges::on_radioButton_OneW_clicked(bool checked)
{
    ui->pushButton_Ok->setEnabled(true);
    emit RadioOneW(checked); // Send a signal that challenge OneWord is choosen
}

void Challenges::on_radioButton_Variation_clicked(bool checked)
{
    ui->pushButton_Ok->setEnabled(true);
    emit RadioVar(checked); // Send a signal that challenge Variation word is choosen

}

void Challenges::choosePart(int index)
{
    level(index);   // Fill "the Part comboBox" according to choice of "level combo" in real time
}

void Challenges::on_pushButton_Ok_clicked()
{
    if(ui->radioButton_OneW->isChecked() || ui->radioButton_Variation->isChecked()){ //if one of the challengfes is choosen
    emit StartChallenge();
    }
    else{
        QMessageBox::information(this, "Have not choosen challenge", "Please, choose a challenge"); //It need not. I  left it , because of I did not do it =)
    }
    accept(); //Accept you chioce =)
}

void Challenges::on_pushButton_Cancel_clicked()
{
    reject();   //Cancel
}

void Challenges::on_comboBox_lvl_currentIndexChanged(int index)
{
    emit numberLVL(index); //When you change Items of level comboBox, sent current index
}
