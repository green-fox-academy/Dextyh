#ifndef WIRELESSADAPTER_USBDEVICE_H
#define WIRELESSADAPTER_USBDEVICE_H

#include <iostream>
#include "device.h"

class UsbDevice : virtual public Device {

public:

    UsbDevice(int id, int usbType);

protected:

    int _usbType;

};


#endif
