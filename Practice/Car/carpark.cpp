#include "carpark.h"

void Carpark::addCar(Car car) {
    _cars.push_back(car);
}

void Carpark::modifyTicket(int id) {

    for (int i = 0; i < _cars.size(); ++i) {
        if (_cars[i].getId() == id) {
            _cars[i].modifyTicket();
        }
    }
}

void Carpark::removeCar(int id) {
    for (int i = 0; i < _cars.size(); ++i) {
        if (_cars[i].getId() == id) {
            _cars.erase(_cars.begin() + i);
        }
    }
}

std::string Carpark::getOldest() {

    int firstElement = _cars[0].getYear();
    std::string oldest;

    for (int i = 0; i < _cars.size(); ++i) {
        if (_cars[i].getYear() < firstElement) {
            firstElement = _cars[i].getYear();
            oldest = _cars[i].getLicensePlate();
        }
    }
    return oldest;
}

std::vector<Car> Carpark::getPenalties() {

    std::vector<Car> noTicketCars;

    for (int i = 0; i < _cars.size(); ++i) {
        if (!_cars[i].getHasTicket()) {
            noTicketCars.push_back(_cars[i]);
        }
    }
    return noTicketCars;
}

std::map<int, int> Carpark::getPenaltiesByYear() {

    std::map<int, int> yearByPenalties;

    for (int i = 0; i < _cars.size(); ++i) {
        if(!_cars[i].getHasTicket()) {
            if (yearByPenalties.find(_cars[i].getYear()) == yearByPenalties.end()) {
                yearByPenalties.insert(std::pair<int, int>(_cars[i].getYear(), 1));
            } else {
                yearByPenalties[_cars[i].getYear()]++;
            }
        }
    }
    return yearByPenalties;
}
