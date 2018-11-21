#include "usbDevice.h"

UsbDevice::UsbDevice(int id, int usbType) : Device(id) {

    _usbType = usbType;
}
