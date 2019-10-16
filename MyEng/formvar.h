#ifndef FORMVAR_H
#define FORMVAR_H

#include <QWidget>

namespace Ui {
class FormVar;
}

class FormVar : public QWidget
{
    Q_OBJECT

public:
    explicit FormVar(QWidget *parent = nullptr);
    ~FormVar();

private:
    Ui::FormVar *ui;
};

#endif // FORMVAR_H
