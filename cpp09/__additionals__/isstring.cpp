#include <iostream>
#include <string>
#include <sstream>

int main(){
    std::string input = "2024-11-04 | 10";
    std::istringstream iss(input);
    std::string firstPart;
    int secondPart;
    char separator;

    std::getline(iss, firstPart, '|');

    iss >> secondPart;

    std::cout << "first part: " << firstPart << std::endl;
    std::cout << "second part: " << secondPart << std::endl;

    return 0;
}