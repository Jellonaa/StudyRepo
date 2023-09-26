#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , kurssi(0.084)
{
    ui->setupUi(this);


    // lähettäjän osoite, lähettäjän signaali, vastaanottajan slot funktio
    connect(ui->Euro2Kruunu,SIGNAL(clicked()),
            this,SLOT(handleEuro2Kruunu()));

    connect(ui->Kruunu2Euro,SIGNAL(clicked()),
            this,SLOT(handleKruunu2Euro()));



    pkoe = new koe;
    pkoe->a = 1;
    pkoe->b = 2.5;
    (*pkoe).a = 2;
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;

    delete pkoe;
    pkoe = nullptr;
}

void MainWindow::handleKruunu2Euro()
{
    QString luku = ui->tulosLaatikko->text();
    float tulos = luku.toFloat();
    tulos = tulos * kurssi;
    qDebug()<<"Luettiin laatikosta teksti = "<< tulos;
    ui->muunnosTulos->setText(QString::number(tulos));
}

void MainWindow::handleEuro2Kruunu()
{
    qDebug()<<"Ollaan handleEuro2Kruunu funktiossa";
}

