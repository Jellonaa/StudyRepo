#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay()
{

}

DeviceDisplay::~DeviceDisplay()
{

}

void DeviceDisplay::setDisplayResolution()
{
    cout << "Set Display Resolution: ";
    cin >> displayResolution;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
