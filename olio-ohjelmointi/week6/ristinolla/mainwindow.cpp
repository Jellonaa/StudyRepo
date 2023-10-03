#include "mainwindow.h"
#include "qobjectdefs.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->startButton,SIGNAL(clicked()),this,SLOT(handleStartClicked()));
    connect(ui->resetButton,SIGNAL(clicked()),this,SLOT(handleResetClicked()));
    connect(ui->XO_1,SIGNAL(clicked()),this,SLOT(handleXObutton()));
    connect(ui->XO_2,SIGNAL(clicked()),this,SLOT(handleXObutton()));
    connect(ui->XO_3,SIGNAL(clicked()),this,SLOT(handleXObutton()));
    connect(ui->XO_4,SIGNAL(clicked()),this,SLOT(handleXObutton()));
    connect(ui->XO_5,SIGNAL(clicked()),this,SLOT(handleXObutton()));
    connect(ui->XO_6,SIGNAL(clicked()),this,SLOT(handleXObutton()));
    connect(ui->XO_7,SIGNAL(clicked()),this,SLOT(handleXObutton()));
    connect(ui->XO_8,SIGNAL(clicked()),this,SLOT(handleXObutton()));
    connect(ui->XO_9,SIGNAL(clicked()),this,SLOT(handleXObutton()));

    gameOn = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleStartClicked()
{
    if (gameOn == false) {
        ui->XO_1->setText("");
        ui->XO_2->setText("");
        ui->XO_3->setText("");
        ui->XO_4->setText("");
        ui->XO_5->setText("");
        ui->XO_6->setText("");
        ui->XO_7->setText("");
        ui->XO_8->setText("");
        ui->XO_9->setText("");
        ui->infoBox->setText("X:n vuoro");
        gameOn = true;
        Xturn = true;
    } else {

    }
}

void MainWindow::handleResetClicked()
{
    ui->XO_1->setText("");
    ui->XO_2->setText("");
    ui->XO_3->setText("");
    ui->XO_4->setText("");
    ui->XO_5->setText("");
    ui->XO_6->setText("");
    ui->XO_7->setText("");
    ui->XO_8->setText("");
    ui->XO_9->setText("");
    gameOn = false;
    ui->infoBox->setText("Paina starttia aloittaaksesi pelin");
}

void MainWindow::handleXObutton()
{
    if(gameOn == true) {
        if (Xturn == true) {
            QPushButton * button = qobject_cast<QPushButton*>(sender());
            if (button->text() == "") {
                button->setText("X");
                Xturn = false;
                ui->infoBox->setText("O:n vuoro");
                checkWinner();
            } else {

            }
        }
        if (Xturn == false) {
            QPushButton * button = qobject_cast<QPushButton*>(sender());
            if (button->text() == "") {
                button->setText("O");
                Xturn = true;
                ui->infoBox->setText("X:n vuoro");
                checkWinner();
            } else {

            }
        }
    }
}

void MainWindow::checkWinner()
{
    if (ui->XO_1->text() == ui->XO_2->text() && ui->XO_1->text() == ui->XO_3->text()) {
        if (ui->XO_1->text() == "X") {
            ui->infoBox->setText("X on voittaja!");
            gameOn = false;
        }
        if (ui->XO_1->text() == "O") {
            ui->infoBox->setText("O on voittaja!");
            gameOn = false;
        }
    }
    if (ui->XO_4->text() == ui->XO_5->text() && ui->XO_4->text() == ui->XO_6->text()) {
        if (ui->XO_4->text() == "X") {
            ui->infoBox->setText("X on voittaja!");
            gameOn = false;
        }
        if (ui->XO_4->text() == "O") {
            ui->infoBox->setText("O on voittaja!");
            gameOn = false;
        }
    }
    if (ui->XO_7->text() == ui->XO_8->text() && ui->XO_7->text() == ui->XO_9->text()) {
        if (ui->XO_7->text() == "X") {
            ui->infoBox->setText("X on voittaja!");
            gameOn = false;
        }
        if (ui->XO_7->text() == "O") {
            ui->infoBox->setText("O on voittaja!");
            gameOn = false;
        }
    }
    if (ui->XO_1->text() == ui->XO_4->text() && ui->XO_1->text() == ui->XO_7->text()) {
        if (ui->XO_1->text() == "X") {
            ui->infoBox->setText("X on voittaja!");
            gameOn = false;
        }
        if (ui->XO_1->text() == "O") {
            ui->infoBox->setText("O on voittaja!");
            gameOn = false;
        }
    }
    if (ui->XO_2->text() == ui->XO_5->text() && ui->XO_2->text() == ui->XO_8->text()) {
        if (ui->XO_2->text() == "X") {
            ui->infoBox->setText("X on voittaja!");
            gameOn = false;
        }
        if (ui->XO_2->text() == "O") {
            ui->infoBox->setText("O on voittaja!");
            gameOn = false;
        }
    }
    if (ui->XO_3->text() == ui->XO_6->text() && ui->XO_3->text() == ui->XO_9->text()) {
        if (ui->XO_3->text() == "X") {
            ui->infoBox->setText("X on voittaja!");
            gameOn = false;
        }
        if (ui->XO_3->text() == "O") {
            ui->infoBox->setText("O on voittaja!");
            gameOn = false;
        }
    }
    if (ui->XO_1->text() == ui->XO_5->text() && ui->XO_1->text() == ui->XO_9->text()) {
        if (ui->XO_1->text() == "X") {
            ui->infoBox->setText("X on voittaja!");
            gameOn = false;
        }
        if (ui->XO_1->text() == "O") {
            ui->infoBox->setText("O on voittaja!");
            gameOn = false;
        }
    }
    if (ui->XO_3->text() == ui->XO_5->text() && ui->XO_3->text() == ui->XO_7->text()) {
        if (ui->XO_3->text() == "X") {
            ui->infoBox->setText("X on voittaja!");
            gameOn = false;
        }
        if (ui->XO_3->text() == "O") {
            ui->infoBox->setText("O on voittaja!");
            gameOn = false;
        }
    }
    if (ui->XO_1->text() != "" && ui->XO_2->text() != "" && ui->XO_3->text() != "" && ui->XO_4->text() != "" && ui->XO_5->text() != "" && ui->XO_6->text() != "" && ui->XO_7->text() != "" && ui->XO_8->text() != "" && ui->XO_9->text() != "" && gameOn == true)
    {
        ui->infoBox->setText("Ei voittajaa");
        gameOn = false;
    }
}
