#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H

#include <iostream>

enum class Color {

    RED,
    GREEN,
    BLUE
};


class Vehicle {

public:

    std::string getColor();

protected:

    int _weightInKg;
    int _maxSpeedInKmph;
    Color _color;

};


#endif
