#ifndef MYCLASS_H
#define MYCLASS_H

#include "qwindowdefs.h"
#include <QObject>

class myClass : public QObject
{
    Q_OBJECT
public:
    explicit myClass(QObject *parent = nullptr);
    ~myClass();

signals:
    void sendTimerUpdate();

public slots:
    void handleTimeOut();
    void handleReset();
    void handleSignal();

private:
    QTimer * pQTimer;
};

#endif // MYCLASS_H
