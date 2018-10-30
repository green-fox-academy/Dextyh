#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys)
{

    std::vector<std::string> something;


    int size = boys.size();

    int x = 1;

    for (int i = 0; i < size; ++i) {

        something.push_back(girls[i]);
        something.push_back(boys[i]);

        x+=2;



    }

    return something;

}

int main(int argc, char* args[])
{
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};

    // Write a method that joins the two lists by matching one girl with one boy into a new list
    // Exepected output: "Eve", "Joe", "Ashley", "Fred"...

    for(const auto& planet : makingMatches(girls, boys))
    {
        std::cout << planet << " ";
    }

    return 0;
}