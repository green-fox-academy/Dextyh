#ifndef WIRELESSADAPTER_WIRELESSADAPTER_H
#define WIRELESSADAPTER_WIRELESSADAPTER_H

#include <iostream>
#include "device.h"
#include "usbDevice.h"
#include "networkDevice.h"


class WirelessAdapter : public UsbDevice, public NetworkDevice {

public:

    WirelessAdapter(int id, int usbType, int bandwidth);

    void info();

};


#endif
