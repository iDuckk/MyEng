/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_words;
    QWidget *widget_one;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_Write;
    QPushButton *pushButton_lvl;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_Click;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Settings;
    QPushButton *pushButton_About;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 800);
        MainWindow->setMinimumSize(QSize(900, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_words = new QPushButton(centralwidget);
        pushButton_words->setObjectName(QString::fromUtf8("pushButton_words"));
        pushButton_words->setGeometry(QRect(40, 730, 80, 21));
        widget_one = new QWidget(centralwidget);
        widget_one->setObjectName(QString::fromUtf8("widget_one"));
        widget_one->setGeometry(QRect(50, 200, 800, 400));
        widget_one->setMinimumSize(QSize(800, 400));
        widget_one->setMaximumSize(QSize(800, 400));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(700, 0, 264, 171));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_Write = new QPushButton(layoutWidget);
        pushButton_Write->setObjectName(QString::fromUtf8("pushButton_Write"));

        verticalLayout->addWidget(pushButton_Write);

        pushButton_lvl = new QPushButton(layoutWidget);
        pushButton_lvl->setObjectName(QString::fromUtf8("pushButton_lvl"));

        verticalLayout->addWidget(pushButton_lvl);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_Click = new QPushButton(layoutWidget);
        pushButton_Click->setObjectName(QString::fromUtf8("pushButton_Click"));
        pushButton_Click->setMinimumSize(QSize(80, 80));

        verticalLayout_2->addWidget(pushButton_Click);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_Settings = new QPushButton(layoutWidget);
        pushButton_Settings->setObjectName(QString::fromUtf8("pushButton_Settings"));

        horizontalLayout->addWidget(pushButton_Settings);

        pushButton_About = new QPushButton(layoutWidget);
        pushButton_About->setObjectName(QString::fromUtf8("pushButton_About"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_About->sizePolicy().hasHeightForWidth());
        pushButton_About->setSizePolicy(sizePolicy);
        pushButton_About->setMaximumSize(QSize(82, 16777215));

        horizontalLayout->addWidget(pushButton_About);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_words->setText(QApplication::translate("MainWindow", "&Words", nullptr));
        pushButton_Write->setText(QApplication::translate("MainWindow", "C&hallenge", nullptr));
        pushButton_lvl->setText(QApplication::translate("MainWindow", "&Level", nullptr));
        pushButton_Click->setText(QApplication::translate("MainWindow", "S&tart", nullptr));
        pushButton_Settings->setText(QApplication::translate("MainWindow", "&Settings", nullptr));
        pushButton_About->setText(QApplication::translate("MainWindow", "&About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
