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
    QPushButton *n1;
    QPushButton *n4;
    QLabel *number1Label;
    QLabel *number2Label;
    QLabel *resultLabel;
    QPushButton *n7;
    QPushButton *n0;
    QPushButton *n2;
    QPushButton *n3;
    QPushButton *clear;
    QPushButton *n8;
    QPushButton *n5;
    QPushButton *n6;
    QPushButton *n9;
    QPushButton *enter;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *times;
    QPushButton *divide;
    QLabel *operand;
    QLabel *equals;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        n1 = new QPushButton(centralwidget);
        n1->setObjectName(QString::fromUtf8("n1"));
        n1->setGeometry(QRect(60, 210, 81, 24));
        n4 = new QPushButton(centralwidget);
        n4->setObjectName(QString::fromUtf8("n4"));
        n4->setGeometry(QRect(60, 240, 81, 24));
        number1Label = new QLabel(centralwidget);
        number1Label->setObjectName(QString::fromUtf8("number1Label"));
        number1Label->setGeometry(QRect(60, 180, 81, 16));
        number2Label = new QLabel(centralwidget);
        number2Label->setObjectName(QString::fromUtf8("number2Label"));
        number2Label->setGeometry(QRect(190, 180, 81, 16));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(320, 180, 141, 16));
        n7 = new QPushButton(centralwidget);
        n7->setObjectName(QString::fromUtf8("n7"));
        n7->setGeometry(QRect(60, 270, 80, 24));
        n0 = new QPushButton(centralwidget);
        n0->setObjectName(QString::fromUtf8("n0"));
        n0->setGeometry(QRect(60, 300, 80, 24));
        n2 = new QPushButton(centralwidget);
        n2->setObjectName(QString::fromUtf8("n2"));
        n2->setGeometry(QRect(150, 210, 80, 24));
        n3 = new QPushButton(centralwidget);
        n3->setObjectName(QString::fromUtf8("n3"));
        n3->setGeometry(QRect(240, 210, 80, 24));
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(150, 300, 80, 24));
        n8 = new QPushButton(centralwidget);
        n8->setObjectName(QString::fromUtf8("n8"));
        n8->setGeometry(QRect(150, 270, 80, 24));
        n5 = new QPushButton(centralwidget);
        n5->setObjectName(QString::fromUtf8("n5"));
        n5->setGeometry(QRect(150, 240, 80, 24));
        n6 = new QPushButton(centralwidget);
        n6->setObjectName(QString::fromUtf8("n6"));
        n6->setGeometry(QRect(240, 240, 80, 24));
        n9 = new QPushButton(centralwidget);
        n9->setObjectName(QString::fromUtf8("n9"));
        n9->setGeometry(QRect(240, 270, 80, 24));
        enter = new QPushButton(centralwidget);
        enter->setObjectName(QString::fromUtf8("enter"));
        enter->setGeometry(QRect(240, 300, 80, 24));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(330, 210, 80, 24));
        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(330, 240, 80, 24));
        times = new QPushButton(centralwidget);
        times->setObjectName(QString::fromUtf8("times"));
        times->setGeometry(QRect(330, 270, 80, 24));
        divide = new QPushButton(centralwidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(330, 300, 80, 24));
        operand = new QLabel(centralwidget);
        operand->setObjectName(QString::fromUtf8("operand"));
        operand->setGeometry(QRect(150, 180, 16, 16));
        equals = new QLabel(centralwidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setGeometry(QRect(280, 180, 16, 16));
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
        n1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        n4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        number1Label->setText(QCoreApplication::translate("MainWindow", "_ _ _", nullptr));
        number2Label->setText(QCoreApplication::translate("MainWindow", "_ _ _", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        n7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        n0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        n2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        n3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        n8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        n5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        n6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        n9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        times->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        operand->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
