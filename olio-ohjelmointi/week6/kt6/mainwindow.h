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

public slots:
    void handleNumberClicked();
    void handleOperandClicked();
    void handleClearClicked();
    void handleEnterClicked();

private:
    Ui::MainWindow *ui;
    QString number1, number2, result;
    float res;
    bool operandSet;
};
#endif // MAINWINDOW_H
