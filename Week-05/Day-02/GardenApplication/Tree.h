#ifndef GARDENAPPLICATION_TREE_H
#define GARDENAPPLICATION_TREE_H

#include <iostream>
#include "Flower.h"

class Tree : public Flower {

public:

    Tree(Color color);


    void absorb(int wateringAmount) override;

    bool needWater() override;

    std::string getName() override;


};


#endif
