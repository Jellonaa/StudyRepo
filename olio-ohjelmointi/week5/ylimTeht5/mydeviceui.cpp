#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    objectDeviceMouse = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    cout << "DEVICE MENU" << endl;
    cout << "===========" << endl;
    cout << "1 = Set Mouse Information" << endl;



    cout << "choose: " << endl;
    short valinta;
    cin >> valinta;

}
