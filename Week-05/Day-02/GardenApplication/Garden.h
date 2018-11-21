#ifndef GARDENAPPLICATION_GARDEN_H
#define GARDENAPPLICATION_GARDEN_H

#include <iostream>
#include <vector>
#include "Flower.h"
#include "Tree.h"

class Garden {

public:

    Garden();

    void watering(int wateringAmount);

    void coutNeedWater();

    void addPlants(Flower* plants);

private:

    std::vector <Flower*> _plants;

};


#endif
