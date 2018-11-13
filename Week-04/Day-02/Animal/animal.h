#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <iostream>

class Animal {

public:

    Animal (std::string name);

    void eat ();
    void drink ();
    void play ();

    int getHunger ();
    int getThirst ();

private:

    int _hunger;
    int _thirst;

};

#endif
