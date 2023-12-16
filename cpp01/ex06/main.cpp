#include "Harl.hpp"

int main(int ac, char **av){

    if(ac <= 1)
        return 0;
    Harl harlComplain;

    std::string str = av[1];
    harlComplain.complain(str);
}