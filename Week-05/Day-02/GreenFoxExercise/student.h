#ifndef GREENFOXEXERCISE_STUDENT_H
#define GREENFOXEXERCISE_STUDENT_H

#include <iostream>
#include "person.h"

class Student : public Person {

public:

    Student (std::string name, int age, Gender gender, std::string previousOrganization);

    Student();

    void getGoal() override;

    void introduce() override;

    void skipDays(int numberOfDays);

protected:

    std::string _previousOrganization;

    int _skippedDays;

};


#endif
