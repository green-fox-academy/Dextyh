#include "mentor.h"

Mentor::Mentor(std::string name, int age, Gender gender, Level level) {

    _name = name;
    _age = age;
    _gender = gender;
    _level = level;
}

Mentor::Mentor() {

    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _level = Level::INTERMEDIATE;
}

std::string Mentor::getLevel() {

    if (_level == Level::JUNIOR) {
        return "Junior";

    } else if (_level == Level::INTERMEDIATE) {
        return "Intermediate";

    } else {
        return "Senior";
    }
}

void Mentor::getGoal() {

    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {

    std::cout << "Hi, I'm " << _name << ", a " << _age << " years old " << getGender()
              << ' ' << getLevel() << "mentor." << std::endl;
}
