#include "formone.h"
#include "ui_formone.h"

FormOne::FormOne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormOne)
{
    ui->setupUi(this);

    lEdit = ui->lineEdit; // I did this so I could use it in mainwindow

    /* Change style of button */
    ui->pushButton_play->setStyleSheet("QPushButton:hover {"
                                       "border-style: solid;"
                                       "border-width:1px;"
                                       "border-radius:12px;"
                                       "border-color: Blue;"
                                       "max-width:50px;"
                                       "max-height:50px;"
                                       "min-width:50px;"
                                       "min-height:50px;} "
                                       "QPushButton { "
                                       "border-style: solid;"
                                       "border-width:1px;"
                                       "border-radius:12px;"
                                       "border-color: Grey;"
                                       "max-width:50px;"
                                       "max-height:50px;"
                                       "min-width:50px;"
                                       "min-height:50px;} "
                                       "QPushButton:pressed{"
                                       "border-style: solid;"
                                       "border-width:1px;"
                                       "border-radius:12px;"
                                       "border-color: Red;"
                                       "max-width:50px;"
                                       "max-height:50px;"
                                       "min-width:50px;"
                                       "min-height:50px;"
                         "color: red} ");

}

FormOne::~FormOne()
{
    delete lEdit;
    delete ui;
}

void FormOne::DefaultLineEdit()
{
    ui->lineEdit->clear();
}

void FormOne::on_pushButton_play_clicked()
{
    emit clickedPlay();
}

void FormOne::getLineWords(QString Wrus, QString wEng)
{
    /* Got words from mainwindow */
    ui->label->setText(Wrus); // Set text Lable
    CorrectWeng = wEng;
    CorrectWrus = Wrus;
}

void FormOne::on_lineEdit_returnPressed()
{
    if((ui->lineEdit->text() == CorrectWeng) || (CorrectWeng == "not zero")) // if "not zero", it means that it is first itiration
    {
            emit CorrectWord(ui->lineEdit->text());    //if WORDS are the same
    }
    else{
            emit WrongWord(ui->lineEdit->text());   //if WORDS are not the same
    }

}

void FormOne::MainCount(int num)
{
    ui->lineEdit_count_2->setText(QString::number(num)); //Set capacity of parts`s words
}

void FormOne::CurrentCount(int num)
{
    ui->lineEdit_count->setText(QString::number(num));  //Set current number of word
}
