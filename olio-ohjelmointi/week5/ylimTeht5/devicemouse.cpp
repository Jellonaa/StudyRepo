#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{

}

void DeviceMouse::setPrimaryButton()
{
    cout << "Anna PrimaryButton" << endl;
    cin >> primaryButton;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
