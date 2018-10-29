#include <iostream>

void printParams(std::string text1);
void printParams(std::string text2, std::string text3);
void printParams(std::string text3, std::string text4, std::string text5);


int main() {

    std::string something1 = "asd ";
    std::string something2 = "qwe";

    printParams(something1, something2);


    return 0;
}

void printParams(std::string text1) {
    std::cout << text1 << std::endl;

}

void printParams(std::string text2, std::string text3) {
    std::cout << text2 << text3 << std::endl;


}

void printParams(std::string text3, std::string text4, std::string text5) {
    std::cout << text3 << text4 <<  text5 << std::endl;


}