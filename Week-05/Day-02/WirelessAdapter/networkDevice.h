#ifndef WIRELESSADAPTER_NETWORKDEVICE_H
#define WIRELESSADAPTER_NETWORKDEVICE_H

#include <iostream>
#include "device.h"

class NetworkDevice : virtual public Device {

public:

    NetworkDevice(int id, int bandwidth);

protected:

    int _bandwidth;

};


#endif
