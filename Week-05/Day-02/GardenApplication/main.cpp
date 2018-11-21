#include <iostream>
#include <vector>
#include "Garden.h"
#include "Flower.h"
#include "Tree.h"

int main() {

    Garden garden;

    Flower flower1 (Color::YELLOW);
    Flower flower2 (Color::BLUE);
    Tree tree1 (Color::PURPLE);
    Tree tree2 (Color::ORANGE);

    garden.addPlants(&flower1);
    garden.addPlants(&flower2);
    garden.addPlants(&tree1);
    garden.addPlants(&tree2);

    std::cout << flower1.getWaterAmount() << std::endl;
    std::cout << flower2.getWaterAmount() << std::endl;
    std::cout << tree1.getWaterAmount() << std::endl;
    std::cout << tree2.getWaterAmount() << std::endl << std::endl;

    garden.coutNeedWater();
    std::cout << std::endl;

    garden.watering(40);

    std::cout << flower1.getWaterAmount() << std::endl;
    std::cout << flower2.getWaterAmount() << std::endl;
    std::cout << tree1.getWaterAmount() << std::endl;
    std::cout << tree2.getWaterAmount() << std::endl << std::endl;

    garden.coutNeedWater();
    std::cout << std::endl;

    garden.watering(70);

    std::cout << flower1.getWaterAmount() << std::endl;
    std::cout << flower2.getWaterAmount() << std::endl;
    std::cout << tree1.getWaterAmount() << std::endl;
    std::cout << tree2.getWaterAmount() << std::endl << std::endl;

    garden.coutNeedWater();


    return 0;
}