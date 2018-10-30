#include <iostream>
#include <string>

std::string reverse(const std::string& text);


int main() {

    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    // reverse(reversed.begin(), reversed.end());  ==> BEST SOLUTION

    std::cout << reverse(reversed) << std::endl;


    return 0;
}

std::string reverse(const std::string& text){

    std::string something = text;

    int length = text.length();

    int x = 0;
    int y = text.length()-1;

    for (int i = 0; i < length / 2; i++) {

    std::swap(something[x], something[y]);
    x ++;
    y --;

    }

    return something;
}

