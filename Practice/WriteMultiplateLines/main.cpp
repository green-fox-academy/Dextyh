#include <iostream>
#include <fstream>
#include <string>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"


void function(std::string path, std::string word, int number);

int main() {

    std::cout << "Type a word here: ";
    std::string word;
    std::cin >> word;

    std::cout << "Type a number here: ";
    int number;
    std::cin >> number;

    function("File.txt", word, number);

    std::ifstream Read("File.txt");

    if (Read.is_open()) {

    } else {
        std::cout << "Couldn't open your file!" << std::endl;
    }

    std::string line;
    while (getline(Read, line)) {
        std::cout << line << std::endl;
    }

    return 0;
}


void function(std::string path, std::string word, int number) {

    std::ofstream Write(path);

    if (Write.is_open()) {

    } else {
        std::cout << "Couldn't open your file!" << std::endl;
    }

    for (int i = 0; i < number; ++i) {
        Write << i+1 << ".Line: " << word << std::endl;
    }

}
