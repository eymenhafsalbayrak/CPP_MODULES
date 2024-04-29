#include "easyfind.hpp"

int main(){


    std::vector<int> container;
    
    container.push_back(11);
    container.push_back(3);
    container.push_back(12);
    container.push_back(29);
    container.push_back(21);

    try
    {
    
        int res = easyfind(container, 29);

        std::cout << res << " " << container[res] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
    try
    {
    
        int res = easyfind(container, 1);

        std::cout << res << " " << container[res] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }



}