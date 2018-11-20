#ifndef GREENFOXEXERCISE_SPONSOR_H
#define GREENFOXEXERCISE_SPONSOR_H

#include <iostream>
#include "person.h"

class Sponsor : public Person {

public:

    Sponsor(std::string name, int age, Gender gender, std::string company);

    Sponsor();

    void introduce() override;

    void hire();

    void getGoal() override;

protected:

    std::string _company;
    int _hiredStudents;

};


#endif
