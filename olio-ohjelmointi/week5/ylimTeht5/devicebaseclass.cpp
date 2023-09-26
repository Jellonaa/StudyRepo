#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass()
{

}

DeviceBaseClass::~DeviceBaseClass()
{

}

void DeviceBaseClass::setDeviceID()
{
    cin >> deviceID;
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
