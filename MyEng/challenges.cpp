#include "challenges.h"
#include "ui_challenges.h"

Challenges::Challenges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Challenges)
{
    ui->setupUi(this);
    /* Choose lvl */
    lvl = ui->comboBox_lvl;

   for(int i = 1; i < 17; i++)
    {
        lvl->addItem(QString::number(i));
    }
    /* chosose paert of lvl */
    part = ui->comboBox_part;
    part->addItem("A");

    connect(this, SIGNAL(numberLVL(int)), this, SLOT(choosePart(int)));

    if(!ui->radioButton_OneW->isChecked() || !ui->radioButton_Variation->isChecked())
    ui->pushButton_Ok->setEnabled(false);
}

Challenges::~Challenges()
{
    delete ui;
}

void Challenges::level(int ind)
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
    emit RadioOneW(checked);
}

void Challenges::on_radioButton_Variation_clicked(bool checked)
{
    ui->pushButton_Ok->setEnabled(true);
    emit RadioVar(checked);

}

void Challenges::choosePart(int index)
{
    level(index);
}

void Challenges::on_pushButton_Ok_clicked()
{
    if(ui->radioButton_OneW->isChecked() || ui->radioButton_Variation->isChecked()){
    StartChallenge();
    }
    else{
        QMessageBox::information(this, "Have not choosen challenge", "Please, choose a challenge");
    }
    accept();
}

void Challenges::on_pushButton_Cancel_clicked()
{
    reject();
}

void Challenges::on_comboBox_lvl_currentIndexChanged(int index)
{
    emit numberLVL(index);
}
