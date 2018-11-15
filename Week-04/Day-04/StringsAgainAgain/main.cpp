#include <iostream>
#include <string>
#include <algorithm>

std::string text (std::string text, int i);

int main() {

    std::string input;

    std::cout << "Type something here: ";
    std::cin >> input;
    std::cout << text(input, 0);

    return 0;
}


std::string text (std::string input, int i) {

    if (i > input.length() - 1) {
        return input;
    } else if (i == 0) {
        return text(input, i + 1);
    } else {
        input.insert(i, "*");
        return text(input, i + 2);
    }


}
