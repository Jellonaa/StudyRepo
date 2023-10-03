#include "mainwindow.h"
#include "qobjectdefs.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->n1,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->n2,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->n3,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->n4,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->n5,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->n6,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->n7,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->n8,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->n9,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->n0,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));

    connect(ui->plus,SIGNAL(clicked(bool)),this,SLOT(handleOperandClicked()));
    connect(ui->minus,SIGNAL(clicked(bool)),this,SLOT(handleOperandClicked()));
    connect(ui->times,SIGNAL(clicked(bool)),this,SLOT(handleOperandClicked()));
    connect(ui->divide,SIGNAL(clicked(bool)),this,SLOT(handleOperandClicked()));

    connect(ui->enter,SIGNAL(clicked(bool)),this,SLOT(handleEnterClicked()));
    connect(ui->clear,SIGNAL(clicked(bool)),this,SLOT(handleClearClicked()));

    operandSet = false;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNumberClicked()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->text();
    qDebug() << "Button name: " << name;
    if (operandSet == false)
    {
        number1 = number1 + name;
        ui->number1Label->setText(number1);
    } else {
        number2 = number2 + name;
        ui->number2Label->setText(number2);
    }

}

void MainWindow::handleOperandClicked()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->text();
    qDebug() << "Button name: " << name;
    ui->operand->setText(name);
    operandSet = true;
}

void MainWindow::handleClearClicked()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->text();
    qDebug() << "Button name: " << name;

    ui->number1Label->setText("_ _ _");
    ui->number2Label->setText("_ _ _");
    ui->operand->setText("?");
    ui->resultLabel->setText("0");
    number1 = "";
    number2 = "";
    result = "";
    res = 0;
    operandSet = false;
}

void MainWindow::handleEnterClicked()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->text();
    qDebug() << "Button name: " << name;

    float num1 = ui->number1Label->text().toInt();
    float num2 = ui->number2Label->text().toInt();

    if (ui->operand->text() == "+")
    {
        res = num1 + num2;
    }
    if (ui->operand->text() == "-")
    {
        res = num1 - num2;
    }
    if (ui->operand->text() == "*")
    {
        res = num1 * num2;
    }
    if (ui->operand->text() == "/")
    {
        res = num1 / num2;
    }

    result.setNum(res);
    ui->resultLabel->setText(result);
    qDebug() << "result: " << res;
    number1 = "";
    number2 = "";
    operandSet = false;
}
