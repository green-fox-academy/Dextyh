#ifndef CAR_CAR_H
#define CAR_CAR_H

#include <iostream>


class Car {

public:

    Car(int id, std::string licensePlate, int year, bool hasTicket);

    int getId();
    std::string getLicensePlate();
    int getYear();
    bool getHasTicket();

    void modifyTicket();

private:

    int _id;
    std::string _licensePlate;
    int _year;
    bool _hasTicket;

};


#endif
