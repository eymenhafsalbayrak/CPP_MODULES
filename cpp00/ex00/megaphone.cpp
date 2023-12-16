#include <iostream>
#include <string>

int main(int ac, char **av){
    
    if(ac <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++) {
            std::string mystring = av[i];
            for (int j = 0; mystring[j]; j++) {
                mystring[j] = std::toupper(mystring[j]);
            }
            std::cout << mystring;
        }
        std::cout << std::endl;
    }
}