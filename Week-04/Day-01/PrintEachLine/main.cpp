#include <iostream>
#include <fstream>

int main() {

    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ofstream FileWrite ("myFile.txt");

    FileWrite << "Apple" << std::endl << "Samsung" << std::endl;

    if(FileWrite.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }

    FileWrite.close();


    std::ifstream FileRead ("myFile.txt");

    if(FileRead.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }

    std::string line;
    int numberOfLines = 0;

    while (std::getline(FileRead, line)) {
        numberOfLines++;
        std::cout << numberOfLines << ". Line: " << line << std::endl;
    }

    FileRead.close();

    return 0;
}