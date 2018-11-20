#ifndef GREENFOXEXERCISE_COHORT_H
#define GREENFOXEXERCISE_COHORT_H

#include <iostream>
#include <vector>
#include "student.h"
#include "mentor.h"

class Cohort {

public:

    Cohort(std::string name);

    void addStudent(Student*);

    void addMentor(Mentor*);

    void info();

protected:

    std::string _name;
    std::vector <Student*> _students;
    std::vector <Mentor*> _mentors;

};


#endif