#include "Car.h"


Car::Car(std::string name, int gasAmountCar, int capacity) {

    _gasAmountCar = gasAmountCar;
    _capacity = capacity;

    std::cout << name << ": " << "Current Gas Amount =  " << gasAmountCar << " | Gas Capacity: " << capacity << std::endl;

}

bool Car::isFull() {

    if (_capacity = _gasAmountCar) {

        return true;
    } else {
        return false;
    }
}

int Car::getGasAmountCar() {
    return _gasAmountCar;
}

void Car::fill() {

    _gasAmountCar = _gasAmountCar + 1;

}
