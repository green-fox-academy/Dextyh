#include "bird.h"

Bird::Bird(std::string name) {

    _name = name;

    std::cout << "You created a Bird. His / Her name is " << _name << '.' << std::endl;
}

std::string Bird::getName() {
    return _name;
}

std::string Bird::breed() {
    return "laying eggs";
}

void Bird::land() {
    std::cout << "Land at South Africa" << std::endl;
}

void Bird::fly() {
    std::cout << "Flying above Algeria" << std::endl;
}

void Bird::takeOff() {
    std::cout << "Take Off from Hungary" << std::endl;
}
