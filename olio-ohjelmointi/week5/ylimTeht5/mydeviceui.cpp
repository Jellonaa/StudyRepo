#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
    objectDeviceDisplay = new DeviceDisplay;
    objectDeviceTouchPad = new DeviceTouchPad;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    objectDeviceMouse = nullptr;
    delete objectDeviceDisplay;
    objectDeviceDisplay = nullptr;
    delete objectDeviceTouchPad;
    objectDeviceTouchPad = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    cout << "DEVICE MENU" << endl;
    cout << "===========" << endl;
    cout << "1: Set Mouse Information" << endl;
    cout << "2: Set Touch Pad Information" << endl;
    cout << "3: Set Display Information" << endl;
    cout << "4: Show Devices Information" << endl;
    cout << "5: Finish" << endl;


    cout << "choose: ";
    short valinta;
    cin >> valinta;
    bool loop = true;
    while(loop == true) {
        switch (valinta)
        {
            case 1:
                uiSetMouseInformation();
                valinta = 0;
                break;

            case 2:
                uiSetTouchPadInformation();
                valinta = 0;
                break;

            case 3:
                uiSetDisplayInformation();
                valinta = 0;
                break;

            case 4:
                uiShowDeviceInformation();
                valinta = 0;
                break;

            case 5:
                loop = false;
                break;

            default:
                cout << "choose: ";
                cin >> valinta;
            break;
        }
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout << endl;
    cout << "SET MOUSE INFORMATION" << endl;
    cout << "=====================" << endl;
    cout << "Set Mouse Device ID: ";
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << endl;
    cout << "SET TOUCH PAD INFORMATION" << endl;
    cout << "=========================" << endl;
    cout << "Set Touch Pad Device ID: ";
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << endl;
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "=======================" << endl;
    cout << "Set Display Device ID: ";
    objectDeviceDisplay->setDeviceID();
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "Mouse Device ID: " << objectDeviceMouse->getDeviceID() << endl;
    cout << "Mouse Primary Button: " << objectDeviceMouse->getPrimaryButton()<< endl;

    cout << "Touch Pad Device ID: " << objectDeviceTouchPad->getDeviceID() << endl;
    cout << "Touch Pad Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity() << endl;

    cout << "Display Device ID: " << objectDeviceDisplay->getDeviceID() << endl;
    cout << "Display Resolution: " << objectDeviceDisplay->getDisplayResolution() << endl;
}
