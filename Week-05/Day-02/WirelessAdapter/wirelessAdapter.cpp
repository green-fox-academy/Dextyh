#include "wirelessAdapter.h"

WirelessAdapter::WirelessAdapter(int id, int usbType, int bandwidth) : UsbDevice(id, usbType), NetworkDevice(id, bandwidth), Device(id) {

}

void WirelessAdapter::info() {

    std::cout << "Wireless Adapter INFO" << std::endl
              << "ID: " << _id << " | USB Type: " << _usbType << " | Bandwidth: " << _bandwidth;
}
