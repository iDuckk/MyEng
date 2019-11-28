#include "words.h"
#include "ui_words.h"

Words::Words(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Words)
{
    ui->setupUi(this);

    listWords = new QStringList;

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

Words::~Words()
{
    delete listWords;
    delete ui;
}

void Words::setListWords(QStringList listEng, QStringList listRus)
{
    //qDebug()<< "From Words win: "<<listEng.at(0);

  /*  QTableWidgetItem* item = new QTableWidgetItem;

    item->setText(listEng.at(0));
    ui->tableWidget->insertRow(0);
    ui->tableWidget->setItem(0, 0, item);
*/

    for(int i = 0; i < listEng.size(); i++)
    {
        /* Add item to table */
        ui->tableWidget->insertRow(i);//create a new row
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(listEng.at(i)));//fill a cell
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(listRus.at(i)));//fill a cell
    }
}

void Words::on_pushButton_clicked()
{
    accept();
}
