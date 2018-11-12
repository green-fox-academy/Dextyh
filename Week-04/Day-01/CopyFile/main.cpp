#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


bool create(std::string path, std::string word1, std::string word2, std::string name);

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

int main() {

    std::cout << "Type a word here: ";
    std::string word1;
    std::cin >> word1;

    std::cout << "Type another word here: ";
    std::string word2;
    std::cin >> word2;

    create("MyFile.txt", word1, word2, "CopyOfMyFile.txt");


    return 0;
}


bool create(std::string path, std::string word1, std::string word2, std::string name) {

    std::ofstream FileWrite(path);

    if (FileWrite.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }
    FileWrite << word1 << std::endl << word2 << std::endl;

    FileWrite.close();

    std::ifstream FileRead(path);
    std::ofstream CopyFile(name);

    if (FileRead.is_open() && CopyFile.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }

    std::string line;
    if (FileRead.is_open()) {

        while (getline(FileRead, line)) {

            if (CopyFile.is_open()) {
                std::cout << line << std::endl;
                CopyFile << line << std::endl;

            } else {
                std::cout << "Can't open the new file" << std::endl;
                return false;
            }
        }
    } else {
        std::cout << "Can't open the original file" << std::endl;
        return false;
    }

    FileRead.close();
    CopyFile.close();

    }







