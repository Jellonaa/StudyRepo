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
#include <QtWidgets/QLineEdit>
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
    QPushButton *Kruunu2Euro;
    QLineEdit *tulosLaatikko;
    QPushButton *Euro2Kruunu;
    QLineEdit *muunnosTulos;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Kruunu2Euro = new QPushButton(centralwidget);
        Kruunu2Euro->setObjectName(QString::fromUtf8("Kruunu2Euro"));
        Kruunu2Euro->setGeometry(QRect(170, 250, 81, 51));
        tulosLaatikko = new QLineEdit(centralwidget);
        tulosLaatikko->setObjectName(QString::fromUtf8("tulosLaatikko"));
        tulosLaatikko->setGeometry(QRect(280, 210, 311, 24));
        Euro2Kruunu = new QPushButton(centralwidget);
        Euro2Kruunu->setObjectName(QString::fromUtf8("Euro2Kruunu"));
        Euro2Kruunu->setGeometry(QRect(170, 190, 81, 51));
        muunnosTulos = new QLineEdit(centralwidget);
        muunnosTulos->setObjectName(QString::fromUtf8("muunnosTulos"));
        muunnosTulos->setGeometry(QRect(280, 250, 311, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 180, 71, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 290, 111, 16));
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
        Kruunu2Euro->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Euro2Kruunu->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Muunnettava", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Muunnoksen Tulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
