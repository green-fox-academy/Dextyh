#include <iostream>
#include "device.h"
#include "usbDevice.h"
#include "networkDevice.h"
#include "wirelessAdapter.h"

int main() {

    WirelessAdapter adapter(2562, 30, 1000);
    adapter.info();

    return 0;
}