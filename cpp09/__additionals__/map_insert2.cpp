#include <iostream>
#include <map>
#include <string>

int main(){


    std::map<std::string, double> map;

    map["one"] = 23;
    map["two"] = 12;
    map["three"] = 11;

    std::cout << map["one"] << " "<< map.size() << std::endl;
}