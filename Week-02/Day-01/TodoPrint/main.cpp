#include <iostream>

int main() {

    std::string todoText = " - Buy milk\n";

    std::string put1 = "My todo:\n";
    todoText.insert(0, put1);

    std::string put2 = " - Download games\n";
    todoText.insert(todoText.length(), put2);

    std::string put3 = "\t - Diablo";
    todoText.insert(todoText.length(), put3);



    std::cout << todoText << std::endl;

    return 0;
}