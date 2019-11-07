#include "challenges.h"
#include "ui_challenges.h"

Challenges::Challenges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Challenges)
{
    ui->setupUi(this);

    if(!ui->radioButton_OneW->isChecked() || !ui->radioButton_Variation->isChecked())
    ui->pushButton_Ok->setEnabled(false);
}

Challenges::~Challenges()
{
    delete ui;
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
