#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void checkWinner();

public slots:
    void handleStartClicked();
    void handleResetClicked();
    void handleXObutton();

private:
    Ui::MainWindow *ui;
    bool gameOn;
    bool Xturn;
};
#endif // MAINWINDOW_H
