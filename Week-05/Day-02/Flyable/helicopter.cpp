#include "helicopter.h"

Helicopter::Helicopter(int weight, int maxSpeed, Color color) {

    _weightInKg = weight;
    _maxSpeedInKmph = maxSpeed;
    _color = color;

    std::cout << "You created a Helicopter. It's " << getColor() << " and " << _weightInKg
              << " KG. Its max speed is " << _maxSpeedInKmph << " KM/H." << std::endl;
}

void Helicopter::land() {

    std::cout << "Land at New York City" << std::endl;
}

void Helicopter::fly() {

    std::cout << "Flying above Gotham City" << std::endl;
}

void Helicopter::takeOff() {

    std::cout << "Take Off from Central City " << std::endl;
}
