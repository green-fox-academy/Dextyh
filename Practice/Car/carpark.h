#ifndef CAR_CARPARK_H
#define CAR_CARPARK_H

#include "car.h"
#include <iostream>
#include <vector>
#include <map>

class Carpark {

public:

    void addCar(Car);
    void modifyTicket(int id);
    void removeCar(int id);
    std::string getOldest();
    std::vector <Car> getPenalties();
    std::map<int, int> getPenaltiesByYear();

private:

    std::vector<Car> _cars;

};


#endif
