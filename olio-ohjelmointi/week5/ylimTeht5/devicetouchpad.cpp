#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{

}

DeviceTouchPad::~DeviceTouchPad()
{

}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout << "Set Touch Pad Sensitivity: ";
    cin >> touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
