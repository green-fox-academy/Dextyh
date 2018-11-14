#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H

#include <iostream>

#include "Car.h"


class Station {


public:

    Station(int gasAmountStation);

    void fill(Car fill);

private:

    int _gasAmountStation;

};


#endif