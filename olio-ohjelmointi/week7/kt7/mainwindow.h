#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qtimer.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void handleStart();
    void handleStop();
    void handleSetTime120sec();
    void handleSetTime5min();
    void handleSwitchPlayer1();
    void handleSwitchPlayer2();
    void timeout();

signals:


private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *pQTimer;
    void updateProgressBar();
    void setGameInfoText(QString,short);

};
#endif // MAINWINDOW_H
