#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QThread>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setGameInfoText("Select playtime and press start game!", 11);

    connect(ui->startGame,SIGNAL(clicked()),this,SLOT(handleStart()));
    connect(ui->button2min,SIGNAL(clicked()),this,SLOT(handleSetTime120sec()));
    connect(ui->button5min,SIGNAL(clicked()),this,SLOT(handleSetTime5min()));
    connect(ui->switchPlayer1,SIGNAL(clicked()),this,SLOT(handleSwitchPlayer1()));
    connect(ui->switchPlayer2,SIGNAL(clicked()),this,SLOT(handleSwitchPlayer2()));
    connect(ui->stopGame,SIGNAL(clicked()),this,SLOT(handleStop()));

    pQTimer = new QTimer(this);
    pQTimer->setSingleShot(false);
    connect(pQTimer, SIGNAL(timeout()),this,SLOT(timeout()));
    pQTimer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    updateProgressBar();
    pQTimer->start(1000);
}

void MainWindow::handleStart()
{
    if (ui->infoBox->text() != "Game ongoing") {
        if (ui->infoBox->text() == "Ready to play") {
            setGameInfoText("Game ongoing",11);
            currentPlayer = 1;
        }
    }
}

void MainWindow::handleStop()
{
    currentPlayer = 3;
    ui->p2ProgBar->setValue(100);
    ui->p1ProgBar->setValue(100);
    ui->p2ProgBar->setMaximum(100);
    ui->p1ProgBar->setMaximum(100);
    setGameInfoText("Select playtime and press start game!", 11);
}

void MainWindow::handleSetTime120sec()
{
    if (ui->infoBox->text() != "Game ongoing") {
        setGameInfoText("Ready to play",11);
        gameTime = 120;
        player1Time = 120;
        player2Time = 120;
        ui->p1ProgBar->setMaximum(gameTime);
        ui->p1ProgBar->setValue(player1Time);
        ui->p2ProgBar->setMaximum(gameTime);
        ui->p2ProgBar->setValue(player2Time);
    }
}

void MainWindow::handleSetTime5min()
{
    if (ui->infoBox->text() != "Game ongoing") {
        setGameInfoText("Ready to play",11);
        gameTime = 300;
        player1Time = 300;
        player2Time = 300;
        ui->p1ProgBar->setMaximum(gameTime);
        ui->p1ProgBar->setValue(player1Time);
        ui->p2ProgBar->setMaximum(gameTime);
        ui->p2ProgBar->setValue(player2Time);
    }
}

void MainWindow::handleSwitchPlayer1()
{
    if (currentPlayer == 1) {
        currentPlayer = 2;
    } else {

    }
}

void MainWindow::handleSwitchPlayer2()
{
    if (currentPlayer == 2) {
        currentPlayer = 1;
    } else {

    }
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1) {
        int player1Time = ui->p1ProgBar->value();
        ui->p1ProgBar->setValue(player1Time-1);
        qDebug() << "P1 time: " << player1Time;
        if (player1Time == 0) {
            currentPlayer = 3;
            setGameInfoText("Player 2 won!", 15);
        }
    } else if (currentPlayer == 2) {
        int player2Time = ui->p2ProgBar->value();
        ui->p2ProgBar->setValue(player2Time-1);
        qDebug() << "P1 time: " << player2Time;
        if (player2Time == 0) {
            currentPlayer = 3;
            setGameInfoText("Player 1 won!", 15);
        }
    }
}

void MainWindow::setGameInfoText(QString string, short num)
{
    ui->infoBox->setText(string);
    ui->infoBox->setFont(QFont("Segoe UI",num));
}
