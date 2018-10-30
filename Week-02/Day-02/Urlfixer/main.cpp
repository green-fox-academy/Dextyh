#include <iostream>

int main() {


    std::string url("https//www.reddit.com/r/nevertellmethebots");

    std::string from = "bots";

    int start = url.find(from);
    if(start == std::string::npos)
        std::cout << "Can't replace" << std::endl;

    else
        url.replace(start, from.length(), "odds");


    std::string put = ":";

    url.insert(5, put);




    std::cout << url << std::endl;





    return 0;
}