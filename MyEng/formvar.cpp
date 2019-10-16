#include "formvar.h"
#include "ui_formvar.h"

FormVar::FormVar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormVar)
{
    ui->setupUi(this);
}

FormVar::~FormVar()
{
    delete ui;
}
