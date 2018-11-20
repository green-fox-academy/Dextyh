#ifndef GREENFOXEXERCISE_PERSON_H
#define GREENFOXEXERCISE_PERSON_H

#include <iostream>

enum class Gender {

    MALE,
    FEMALE
};

class Person {

public:

    Person(std::string name, int age, Gender gender);

    Person();

    std::string getGender();

    virtual void introduce();

    virtual void getGoal();

protected:

    std::string _name;
    int _age;
    Gender _gender;

};


#endif
