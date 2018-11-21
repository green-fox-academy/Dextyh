#ifndef WIRELESSADAPTER_DEVICE_H
#define WIRELESSADAPTER_DEVICE_H

#include <iostream>

class Device {

public:

    Device(int id);

    int getId();

protected:

    int _id;

};


#endif
