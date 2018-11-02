#include <iostream>
#include <string>
#include <vector>

void appendA(std::vector<std::string> x);

int main(int argc, char* args[])
{


    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    appendA(animals);

    return 0;
}



void appendA(std::vector<std::string> x) {


    for(int i=0; i < x.size(); i++){

        std::cout << x[i] << "a" << std::endl;

    }


}
