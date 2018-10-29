#include <iostream>

std::string greet (std::string something);

int main() {

    std::string al = "Greenfox";

    std::cout << greet(al) << std::endl;





    return 0;
}

std::string greet (std::string x) {

    std::string something = "Greetings dear, " + x + "!";


    return something;

}