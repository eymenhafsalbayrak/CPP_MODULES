#include "ClapTrap.hpp"

int main(){
    
    ClapTrap clap("Kevin");
    ClapTrap trap("Gary");

    clap.takeDamage(10);
    clap.takeDamage(10);
    clap.beRepaired(5);

    clap.attack("Mooncake");

    trap.beRepaired(3);
    for(int i = 0; i < 7; i++)
        trap.attack("Avocato");
    trap.beRepaired(3);

    return 0;

}