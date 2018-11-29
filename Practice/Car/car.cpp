#include "car.h"

Car::Car(int id, std::string licensePlate, int year, bool hasTicket) {

    _id = id;
    _licensePlate = licensePlate;
    _year = year;
    _hasTicket = hasTicket;
}

int Car::getId() {
    return _id;
}

std::string Car::getLicensePlate() {
    return _licensePlate;
}

int Car::getYear() {
    return _year;
}

bool Car::getHasTicket() {
    return _hasTicket;
}

void Car::modifyTicket() {
    if (_hasTicket) {
        _hasTicket = false;
    } else if (!_hasTicket) {
        _hasTicket = true;
    }
}
