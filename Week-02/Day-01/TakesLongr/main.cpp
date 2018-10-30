#include <iostream>

int main() {


    std::string quote = "Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.";




    std::string from = "It you";

    int start = quote.find(from);

    if (start == std::string::npos)
        std::cout << "Cannot replace" << std::endl;
    else
        quote.replace(start, from.length(), "It always takes longer than you");




    std::cout << quote << std::endl;

    return 0;
}