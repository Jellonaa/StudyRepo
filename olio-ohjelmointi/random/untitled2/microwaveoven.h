#ifndef MICROWAVEOVEN_H
#define MICROWAVEOVEN_H
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

class MicrowaveOven
{
public:
    MicrowaveOven();
    ~MicrowaveOven();
    void setHeatingPower(int);
    void setHeatingTime(int);
    void showOvenStatus();
    bool startHeating();
private:
    int heatingPower;
    int heatingTime;
    int getHeatingPower();
    int getHeatingTime();
protected:
    time_t currentTime;
};

#endif // MICROWAVEOVEN_H
