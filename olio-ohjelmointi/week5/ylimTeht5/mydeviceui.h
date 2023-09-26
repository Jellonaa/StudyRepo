#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicedisplay.h"

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();
private:
    DeviceMouse * objectDeviceMouse;
    DeviceDisplay * objectDeviceDisplay;
    DeviceTouchPad * objectDeviceTouchPad;
};

#endif // MYDEVICEUI_H
