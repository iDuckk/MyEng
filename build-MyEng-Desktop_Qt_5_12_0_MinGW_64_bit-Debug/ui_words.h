/********************************************************************************
** Form generated from reading UI file 'words.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDS_H
#define UI_WORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Words
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Words)
    {
        if (Words->objectName().isEmpty())
            Words->setObjectName(QString::fromUtf8("Words"));
        Words->resize(400, 300);
        gridLayout = new QGridLayout(Words);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(Words);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        tableWidget = new QTableWidget(Words);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);


        retranslateUi(Words);

        QMetaObject::connectSlotsByName(Words);
    } // setupUi

    void retranslateUi(QDialog *Words)
    {
        Words->setWindowTitle(QApplication::translate("Words", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Words", "&Ok", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Words", "English", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Words", "Russian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Words: public Ui_Words {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDS_H
