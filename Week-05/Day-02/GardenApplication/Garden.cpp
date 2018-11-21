#include "Garden.h"



Garden::Garden() {

    _plants.clear();
}

void Garden::watering(int wateringAmount) {

    std::cout << "Watering plants with " << wateringAmount << std::endl << std::endl;

    int numberOfPlantsNeedWater = 0;

    for (int i = 0; i < _plants.size(); ++i) {
        if (_plants[i]->needWater()) {

            numberOfPlantsNeedWater++;
        }
    }
    for (int j = 0; j < _plants.size(); ++j) {
        if (_plants[j]->needWater()) {

            _plants[j]->absorb(wateringAmount / numberOfPlantsNeedWater);
        }
    }
}

void Garden::coutNeedWater() {

    for (int i = 0; i < _plants.size(); ++i) {

        if (_plants[i]->needWater()) {
            std::cout << "The " << _plants[i]->getColor() << ' ' << _plants[i]->getName() << " needs water" << std::endl;

        } else {
            std::cout << "The " << _plants[i]->getColor() << ' ' << _plants[i]->getName() << " doesn't needs water" << std::endl;
        }
    }
}

void Garden::addPlants(Flower *plants) {

    _plants.push_back(plants);
}
