/********************************************************************************
** Form generated from reading UI file 'formvar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMVAR_H
#define UI_FORMVAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormVar
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Word1;
    QPushButton *pushButton_word3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Word2;
    QPushButton *pushButton_Word4;

    void setupUi(QWidget *FormVar)
    {
        if (FormVar->objectName().isEmpty())
            FormVar->setObjectName(QString::fromUtf8("FormVar"));
        FormVar->resize(442, 147);
        gridLayout = new QGridLayout(FormVar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(FormVar);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_Word1 = new QPushButton(FormVar);
        pushButton_Word1->setObjectName(QString::fromUtf8("pushButton_Word1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Word1->sizePolicy().hasHeightForWidth());
        pushButton_Word1->setSizePolicy(sizePolicy);
        pushButton_Word1->setMinimumSize(QSize(200, 40));

        verticalLayout->addWidget(pushButton_Word1);

        pushButton_word3 = new QPushButton(FormVar);
        pushButton_word3->setObjectName(QString::fromUtf8("pushButton_word3"));
        pushButton_word3->setMinimumSize(QSize(200, 40));

        verticalLayout->addWidget(pushButton_word3);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_Word2 = new QPushButton(FormVar);
        pushButton_Word2->setObjectName(QString::fromUtf8("pushButton_Word2"));
        pushButton_Word2->setMinimumSize(QSize(200, 40));

        verticalLayout_2->addWidget(pushButton_Word2);

        pushButton_Word4 = new QPushButton(FormVar);
        pushButton_Word4->setObjectName(QString::fromUtf8("pushButton_Word4"));
        pushButton_Word4->setMinimumSize(QSize(200, 40));

        verticalLayout_2->addWidget(pushButton_Word4);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);


        retranslateUi(FormVar);

        QMetaObject::connectSlotsByName(FormVar);
    } // setupUi

    void retranslateUi(QWidget *FormVar)
    {
        FormVar->setWindowTitle(QApplication::translate("FormVar", "Form", nullptr));
        label->setText(QApplication::translate("FormVar", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_Word1->setText(QApplication::translate("FormVar", "word1", nullptr));
        pushButton_word3->setText(QApplication::translate("FormVar", "word3", nullptr));
        pushButton_Word2->setText(QApplication::translate("FormVar", "word2", nullptr));
        pushButton_Word4->setText(QApplication::translate("FormVar", "word4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormVar: public Ui_FormVar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMVAR_H
