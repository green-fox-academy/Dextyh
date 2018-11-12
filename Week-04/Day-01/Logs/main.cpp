#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>


std::vector<std::string> IP(std::string fileName);
float ratio (std::string fileName);



int main() {

    int count = 1;
    for(auto ip : IP("logs.txt")) {
        std::cout << count << ". Line: " << ip << std::endl;
        count++;
    }

    std::cout << std::endl;

    std::cout << ratio("logs.txt") << std::endl;

    return 0;
}

std::vector<std::string> IP(std::string fileName){

    std::ifstream File (fileName);
    if (File.is_open()) {
    } else {
        std::cout << "Something went wrong! Couldn't open " << fileName << std::endl;
    }

    std::string day;
    std::string month;
    std::string date;
    std::string time;
    std::string year;
    std::string ip;
    std::string GP;
    std::string symbol;

    std::vector<std::string> ipFull;
    std::vector<std::string> ipUnique;

    while(File >> day >> month >> day >> time >> year >> ip >> GP >> symbol) {
        ipFull.push_back(ip);
    }
    for (int i = 0; i < ipFull.size(); ++i) {
        if((std::find(ipUnique.begin(),ipUnique.end(), ipFull[i])) == ipUnique.end())
        {
            ipUnique.push_back(ipFull[i]);

        }

    }
    return ipUnique;
}





float ratio (std::string fileName) {

    std::ifstream File (fileName);
    if (File.is_open()) {
    } else {
        std::cout << "Something went wrong! Couldn't open " << fileName << std::endl;
    }

    std::string day;
    std::string month;
    std::string date;
    std::string time;
    std::string year;
    std::string ip;
    std::string GP;
    std::string symbol;

    float getCounter = 0;
    float postCounter = 0;

    while(File >> day >> month >> day >> time >> year >> ip >> GP >> symbol) {
        if(GP == "GET") {
            getCounter++;
        } else if (GP == "POST") {
            postCounter++;
        }
    }

    return getCounter / postCounter;
}
