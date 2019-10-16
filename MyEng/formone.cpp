#include "formone.h"
#include "ui_formone.h"

FormOne::FormOne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormOne)
{
    ui->setupUi(this);

    s = new QString();

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
    delete ui;
}

void FormOne::on_pushButton_play_clicked()
{
    emit sentWord(ui->lineEdit->text());
}

void FormOne::getLineWords(QString w)
{
    ui->label->setText(w);
}
