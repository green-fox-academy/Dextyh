#include <iostream>

std::string add(std::string x);


int main() {


    std::string animals[] = {"koal", "pand", "zebr"};


    for(int f = 0; f < sizeof(animals) / sizeof(animals[0]); ++f) {
        std::cout << add(animals[f]) << std::endl;
    }




    return 0;
}


std::string add(std::string x) {

    std::string y  = x + "a";

    return y;
}





