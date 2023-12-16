#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) : name(zombieName) {}
void Zombie::announce(void) const{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->name << ": My brain left the building" << std::endl;
}