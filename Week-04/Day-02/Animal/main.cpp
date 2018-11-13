#include <iostream>

/* Create an Animal class
Every animal has a hunger value, which is a whole number
Every animal has a thirst value, which is a whole number
when creating a new animal object these values are created with the default 50 value

Every animal can eat() which decreases their hunger by one
Every animal can drink() which decreases their thirst by one
Every animal can play() which increases both by one
*/

#include "animal.h"


int main() {

    Animal Lion("Lion");
    std::cout << "Hunger: " << Lion.getHunger() << " | Thirst: " << Lion.getThirst() << std::endl << std::endl;

    Lion.eat();
    std::cout << "Hunger: " << Lion.getHunger() << " | Thirst: " << Lion.getThirst() << std::endl;
    Lion.drink();
    std::cout << "Hunger: " << Lion.getHunger() << " | Thirst: " << Lion.getThirst() << std::endl;
    for (int i = 0; i < 5; i++) {
        Lion.play();
    }
    std::cout << "Hunger: " << Lion.getHunger() << " | Thirst: " << Lion.getThirst() << std::endl;




    return 0;
}