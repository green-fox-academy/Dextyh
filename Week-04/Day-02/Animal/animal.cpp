#include "animal.h"


Animal::Animal(std::string name) {
    _hunger = 50;
    _thirst = 50;

    std::cout << "You have a " << name << " you badass bitch!" << std::endl << std::endl;
}

void Animal::eat() {
    _hunger = _hunger - 1;
}

void Animal::drink() {
    _thirst = _thirst - 1;
}

void Animal::play() {
    _hunger = _hunger + 1;
    _thirst = _thirst + 1;
}


int Animal::getHunger() {
    return _hunger;
}

int Animal::getThirst() {
    return _thirst;
}
