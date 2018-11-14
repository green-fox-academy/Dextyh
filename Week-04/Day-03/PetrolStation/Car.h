#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H

#include <iostream>


class Car {


public:

    Car(std::string name, int gasAmountCar, int capacity);

    bool isFull();

    void fill();

    int getGasAmountCar();

private:

int _gasAmountCar;
int _capacity;

};


#endif
