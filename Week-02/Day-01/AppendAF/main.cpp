#include <iostream>

std::string appendAFunc(std::string x);

int main() {

    std::string typo = "Chinchill";

    std::cout << appendAFunc(typo) << std::endl;




    return 0;
}

std::string appendAFunc(std::string x) {

    std::string something = x + "a";

    return something;
}