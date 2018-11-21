#include "bird.h"

Bird::Bird(std::string name) {

    _name = name;
}

std::string Bird::getName() {
    return _name;
}

std::string Bird::breed() {
    return "laying eggs";
}
