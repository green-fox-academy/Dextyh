#include <iostream>
#include <fstream>
#include <string>

void function (std::string path, std::string word, int number);


  // Create a function that takes 3 parameters: a path, a word and a number,
  // than it should write to a file.
  // The path parameter should describes the location of the file.
  // The word parameter should be a string, that will be written to the file as lines
  // The number paramter should describe how many lines the file should have.
  // So if the word is "apple" and the number is 5, than it should write 5 lines
  // to the file and each line should be "apple"

int main() {

    std::cout << "Type a word here: ";
    std::string word;
    std::cin >> word;
    std::cout << "Type a number here: ";
    int number;
    std::cin >> number;


    function("MyFile.txt", word, number);


    std::ifstream FileRead ("MyFile.txt");

    if(FileRead.is_open()){
        std::cout << ":)" << std::endl;
    }else {
        std::cout << ":(" << std::endl;
    }

    std::string line;
    while(std::getline(FileRead, line)) {
        std::cout << line << std::endl;
    }

    return 0;
}



void function (std::string path, std::string word, int number) {

    std::ofstream FileWrite(path);

    if(FileWrite.is_open()){
        std::cout << ":)" << std::endl;
    }else {
        std::cout << ":(" << std::endl;
    }

    for (int i = 0; i < number; i++)
    FileWrite << word << std::endl;

    FileWrite.close();
}
