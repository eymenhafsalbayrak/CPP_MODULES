#include <iostream>
#include <map>

int main() 
{ 
    // initialize container 
    std::map<int, int> mp; 

    // insert elements in random order 
    mp.insert(std::make_pair(2, 30)); 
    mp.insert(std::make_pair(1, 40)); 
    mp.insert(std::make_pair(3, 60)); 

    // does not insert key 2 with element 20 
    mp.insert(std::make_pair(2, 20)); 
    mp.insert(std::make_pair(5, 50)); 

    // prints the elements 
    std::cout << "KEY\tELEMENT\n"; 
    for (std::map<int, int>::iterator itr = mp.begin(); itr != mp.end(); ++itr) { 
        std::cout << itr->first 
                  << '\t' << itr->second << '\n'; 
    } 
    return 0; 
}
