#include "Station.h"


Station::Station(int gasAmountStation) {

    _gasAmountStation = gasAmountStation;

    std::cout << std::endl << "Gas Amount: " << gasAmountStation << std::endl;

}

void Station::fill(Car tankolas) {

    while (tankolas.isFull() == false) {

        tankolas.fill();
        _gasAmountStation--;

    }

}
