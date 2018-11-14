#include <iostream>

#include "Car.h"
#include "Station.h"



int main() {

    Car Car1 ("Car1", 30, 50);

    std::cout << Car1.getGasAmountCar() << std::endl;

    Station Station1 (450);

    Station1.fill(Car1);

    std::cout << Car1.getGasAmountCar() << std::endl;


    return 0;
}