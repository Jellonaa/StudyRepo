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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *infoBox;
    QProgressBar *p1ProgBar;
    QProgressBar *p2ProgBar;
    QPushButton *switchPlayer1;
    QPushButton *switchPlayer2;
    QPushButton *button2min;
    QPushButton *button5min;
    QPushButton *startGame;
    QPushButton *stopGame;
    QLabel *label_p1;
    QLabel *label_p2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        infoBox = new QLabel(centralwidget);
        infoBox->setObjectName(QString::fromUtf8("infoBox"));
        infoBox->setGeometry(QRect(70, 170, 261, 31));
        QFont font;
        font.setPointSize(9);
        infoBox->setFont(font);
        infoBox->setLineWidth(1);
        infoBox->setScaledContents(false);
        infoBox->setAlignment(Qt::AlignCenter);
        infoBox->setWordWrap(false);
        infoBox->setMargin(0);
        infoBox->setIndent(-1);
        p1ProgBar = new QProgressBar(centralwidget);
        p1ProgBar->setObjectName(QString::fromUtf8("p1ProgBar"));
        p1ProgBar->setGeometry(QRect(50, 80, 118, 23));
        p1ProgBar->setValue(100);
        p2ProgBar = new QProgressBar(centralwidget);
        p2ProgBar->setObjectName(QString::fromUtf8("p2ProgBar"));
        p2ProgBar->setGeometry(QRect(240, 80, 118, 23));
        p2ProgBar->setValue(100);
        switchPlayer1 = new QPushButton(centralwidget);
        switchPlayer1->setObjectName(QString::fromUtf8("switchPlayer1"));
        switchPlayer1->setGeometry(QRect(70, 110, 80, 24));
        switchPlayer2 = new QPushButton(centralwidget);
        switchPlayer2->setObjectName(QString::fromUtf8("switchPlayer2"));
        switchPlayer2->setGeometry(QRect(260, 110, 80, 24));
        button2min = new QPushButton(centralwidget);
        button2min->setObjectName(QString::fromUtf8("button2min"));
        button2min->setGeometry(QRect(110, 230, 80, 24));
        button5min = new QPushButton(centralwidget);
        button5min->setObjectName(QString::fromUtf8("button5min"));
        button5min->setGeometry(QRect(200, 230, 80, 24));
        startGame = new QPushButton(centralwidget);
        startGame->setObjectName(QString::fromUtf8("startGame"));
        startGame->setGeometry(QRect(70, 280, 80, 24));
        stopGame = new QPushButton(centralwidget);
        stopGame->setObjectName(QString::fromUtf8("stopGame"));
        stopGame->setGeometry(QRect(230, 280, 80, 24));
        label_p1 = new QLabel(centralwidget);
        label_p1->setObjectName(QString::fromUtf8("label_p1"));
        label_p1->setGeometry(QRect(90, 60, 49, 16));
        label_p2 = new QLabel(centralwidget);
        label_p2->setObjectName(QString::fromUtf8("label_p2"));
        label_p2->setGeometry(QRect(280, 60, 49, 16));
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
        infoBox->setText(QCoreApplication::translate("MainWindow", "asd", nullptr));
        p1ProgBar->setFormat(QCoreApplication::translate("MainWindow", "%v", nullptr));
        p2ProgBar->setFormat(QCoreApplication::translate("MainWindow", "%v", nullptr));
        switchPlayer1->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        switchPlayer2->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        button2min->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        button5min->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startGame->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopGame->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        label_p1->setText(QCoreApplication::translate("MainWindow", "Player 1", nullptr));
        label_p2->setText(QCoreApplication::translate("MainWindow", "Player 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
