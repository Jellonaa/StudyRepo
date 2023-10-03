/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startButton;
    QPushButton *resetButton;
    QLabel *infoBox;
    QPushButton *XO_1;
    QPushButton *XO_2;
    QPushButton *XO_3;
    QPushButton *XO_4;
    QPushButton *XO_5;
    QPushButton *XO_6;
    QPushButton *XO_7;
    QPushButton *XO_8;
    QPushButton *XO_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(40, 120, 171, 24));
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(40, 150, 171, 24));
        infoBox = new QLabel(centralwidget);
        infoBox->setObjectName(QString::fromUtf8("infoBox"));
        infoBox->setGeometry(QRect(40, 180, 164, 21));
        XO_1 = new QPushButton(centralwidget);
        XO_1->setObjectName(QString::fromUtf8("XO_1"));
        XO_1->setGeometry(QRect(40, 30, 50, 24));
        XO_2 = new QPushButton(centralwidget);
        XO_2->setObjectName(QString::fromUtf8("XO_2"));
        XO_2->setGeometry(QRect(100, 30, 50, 24));
        XO_3 = new QPushButton(centralwidget);
        XO_3->setObjectName(QString::fromUtf8("XO_3"));
        XO_3->setGeometry(QRect(160, 30, 50, 24));
        XO_4 = new QPushButton(centralwidget);
        XO_4->setObjectName(QString::fromUtf8("XO_4"));
        XO_4->setGeometry(QRect(40, 60, 50, 24));
        XO_5 = new QPushButton(centralwidget);
        XO_5->setObjectName(QString::fromUtf8("XO_5"));
        XO_5->setGeometry(QRect(100, 60, 50, 24));
        XO_6 = new QPushButton(centralwidget);
        XO_6->setObjectName(QString::fromUtf8("XO_6"));
        XO_6->setGeometry(QRect(160, 60, 50, 24));
        XO_7 = new QPushButton(centralwidget);
        XO_7->setObjectName(QString::fromUtf8("XO_7"));
        XO_7->setGeometry(QRect(40, 90, 50, 24));
        XO_8 = new QPushButton(centralwidget);
        XO_8->setObjectName(QString::fromUtf8("XO_8"));
        XO_8->setGeometry(QRect(100, 90, 51, 24));
        XO_9 = new QPushButton(centralwidget);
        XO_9->setObjectName(QString::fromUtf8("XO_9"));
        XO_9->setGeometry(QRect(160, 90, 51, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        infoBox->setText(QCoreApplication::translate("MainWindow", "Paina starttia aloittaaksesi pelin", nullptr));
        XO_1->setText(QString());
        XO_2->setText(QString());
        XO_3->setText(QString());
        XO_4->setText(QString());
        XO_5->setText(QString());
        XO_6->setText(QString());
        XO_7->setText(QString());
        XO_8->setText(QString());
        XO_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
