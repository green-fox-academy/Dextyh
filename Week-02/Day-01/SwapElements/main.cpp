#include <iostream>





int main() {


    std::string abc[3] = {"first", "second", "third"};

    std::string x = abc[0];
    abc [0] = abc[2];
    abc[2] = x;

    for(int f = 0; f < sizeof(abc) / sizeof(abc[0]); ++f) {

        std::cout << abc[f] << std::endl;
    }


    return 0;
}

