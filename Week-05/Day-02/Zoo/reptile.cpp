#include "reptile.h"

Reptile::Reptile(std::string name) {

    _name = name;
}

std::string Reptile::getName() {
    return _name;
}

std::string Reptile::breed() {
    return "laying eggs";
}
