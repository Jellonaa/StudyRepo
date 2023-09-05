#include "microwaveoven.h"

MicrowaveOven::MicrowaveOven()
{

}

MicrowaveOven::~MicrowaveOven()
{

}

void MicrowaveOven::setHeatingPower(int p)
{
    heatingPower = p;
}

void MicrowaveOven::setHeatingTime(int t)
{
    heatingTime = t;
}

void MicrowaveOven::showOvenStatus()
{

}

bool MicrowaveOven::startHeating()
{
    return true;
}

int MicrowaveOven::getHeatingPower()
{
    return heatingPower;
}

int MicrowaveOven::getHeatingTime()
{
    return heatingTime;
}
