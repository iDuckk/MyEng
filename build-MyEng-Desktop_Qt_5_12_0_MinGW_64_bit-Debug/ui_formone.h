/********************************************************************************
** Form generated from reading UI file 'formone.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMONE_H
#define UI_FORMONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormOne
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_count;
    QLabel *label_salsh;
    QLineEdit *lineEdit_count_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_play;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *FormOne)
    {
        if (FormOne->objectName().isEmpty())
            FormOne->setObjectName(QString::fromUtf8("FormOne"));
        FormOne->setEnabled(true);
        FormOne->resize(800, 200);
        FormOne->setMinimumSize(QSize(800, 200));
        FormOne->setMaximumSize(QSize(800, 200));
        gridLayout = new QGridLayout(FormOne);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(FormOne);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_count = new QLineEdit(FormOne);
        lineEdit_count->setObjectName(QString::fromUtf8("lineEdit_count"));
        lineEdit_count->setEnabled(false);
        lineEdit_count->setMinimumSize(QSize(30, 20));
        lineEdit_count->setMaximumSize(QSize(30, 20));
        QFont font;
        font.setPointSize(16);
        lineEdit_count->setFont(font);
        lineEdit_count->setAutoFillBackground(true);
        lineEdit_count->setFrame(false);

        horizontalLayout->addWidget(lineEdit_count);

        label_salsh = new QLabel(FormOne);
        label_salsh->setObjectName(QString::fromUtf8("label_salsh"));
        label_salsh->setMinimumSize(QSize(10, 40));
        label_salsh->setMaximumSize(QSize(10, 40));

        horizontalLayout->addWidget(label_salsh);

        lineEdit_count_2 = new QLineEdit(FormOne);
        lineEdit_count_2->setObjectName(QString::fromUtf8("lineEdit_count_2"));
        lineEdit_count_2->setEnabled(false);
        lineEdit_count_2->setMinimumSize(QSize(30, 20));
        lineEdit_count_2->setMaximumSize(QSize(30, 20));
        lineEdit_count_2->setFont(font);
        lineEdit_count_2->setAutoFillBackground(true);
        lineEdit_count_2->setFrame(false);

        horizontalLayout->addWidget(lineEdit_count_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(FormOne);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(FormOne);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 52));
        lineEdit->setMaximumSize(QSize(16777215, 52));
        lineEdit->setSizeIncrement(QSize(0, 52));
        lineEdit->setBaseSize(QSize(0, 52));
        QFont font2;
        font2.setPointSize(22);
        lineEdit->setFont(font2);

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_play = new QPushButton(FormOne);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));

        horizontalLayout_2->addWidget(pushButton_play);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 2, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);


        retranslateUi(FormOne);

        QMetaObject::connectSlotsByName(FormOne);
    } // setupUi

    void retranslateUi(QWidget *FormOne)
    {
        FormOne->setWindowTitle(QApplication::translate("FormOne", "Form", nullptr));
        label_2->setText(QApplication::translate("FormOne", "<html><head/><body><p><span style=\" font-size:16pt;\">Words:</span></p></body></html>", nullptr));
        lineEdit_count->setInputMask(QString());
        lineEdit_count->setText(QApplication::translate("FormOne", "0", nullptr));
        label_salsh->setText(QApplication::translate("FormOne", "<html><head/><body><p><span style=\" font-size:20pt;\">/</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("FormOne", "<html><head/><body><p align=\"center\">Word</p></body></html>", nullptr));
        pushButton_play->setText(QApplication::translate("FormOne", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormOne: public Ui_FormOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMONE_H
