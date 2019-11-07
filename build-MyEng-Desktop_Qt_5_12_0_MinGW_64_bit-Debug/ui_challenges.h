/********************************************************************************
** Form generated from reading UI file 'challenges.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHALLENGES_H
#define UI_CHALLENGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Challenges
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_OneW;
    QRadioButton *radioButton_Variation;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_lvl;
    QComboBox *comboBox_lvl;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_part;
    QComboBox *comboBox_part;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Ok;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *Challenges)
    {
        if (Challenges->objectName().isEmpty())
            Challenges->setObjectName(QString::fromUtf8("Challenges"));
        Challenges->setWindowModality(Qt::WindowModal);
        Challenges->resize(400, 300);
        Challenges->setMinimumSize(QSize(400, 300));
        Challenges->setMaximumSize(QSize(400, 300));
        gridLayout = new QGridLayout(Challenges);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_OneW = new QRadioButton(Challenges);
        radioButton_OneW->setObjectName(QString::fromUtf8("radioButton_OneW"));
        QFont font;
        font.setPointSize(16);
        radioButton_OneW->setFont(font);

        verticalLayout->addWidget(radioButton_OneW);

        radioButton_Variation = new QRadioButton(Challenges);
        radioButton_Variation->setObjectName(QString::fromUtf8("radioButton_Variation"));
        radioButton_Variation->setFont(font);

        verticalLayout->addWidget(radioButton_Variation);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(77, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_lvl = new QLabel(Challenges);
        label_lvl->setObjectName(QString::fromUtf8("label_lvl"));
        label_lvl->setFont(font);

        horizontalLayout->addWidget(label_lvl);

        comboBox_lvl = new QComboBox(Challenges);
        comboBox_lvl->setObjectName(QString::fromUtf8("comboBox_lvl"));

        horizontalLayout->addWidget(comboBox_lvl);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_part = new QLabel(Challenges);
        label_part->setObjectName(QString::fromUtf8("label_part"));
        label_part->setFont(font);

        horizontalLayout_2->addWidget(label_part);

        comboBox_part = new QComboBox(Challenges);
        comboBox_part->setObjectName(QString::fromUtf8("comboBox_part"));

        horizontalLayout_2->addWidget(comboBox_part);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 83, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_Ok = new QPushButton(Challenges);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));

        horizontalLayout_3->addWidget(pushButton_Ok);

        pushButton_Cancel = new QPushButton(Challenges);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        horizontalLayout_3->addWidget(pushButton_Cancel);


        gridLayout->addLayout(horizontalLayout_3, 3, 3, 1, 1);


        retranslateUi(Challenges);

        QMetaObject::connectSlotsByName(Challenges);
    } // setupUi

    void retranslateUi(QDialog *Challenges)
    {
        Challenges->setWindowTitle(QApplication::translate("Challenges", "Dialog", nullptr));
        radioButton_OneW->setText(QApplication::translate("Challenges", "One Word", nullptr));
        radioButton_Variation->setText(QApplication::translate("Challenges", "Variation", nullptr));
        label_lvl->setText(QApplication::translate("Challenges", "Level:", nullptr));
        label_part->setText(QApplication::translate("Challenges", "Part:", nullptr));
        pushButton_Ok->setText(QApplication::translate("Challenges", "&Ok", nullptr));
        pushButton_Cancel->setText(QApplication::translate("Challenges", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Challenges: public Ui_Challenges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHALLENGES_H
