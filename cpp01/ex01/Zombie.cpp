#include "Zombie.hpp"

void Zombie::setName(std::string newName){
    this->name = newName;
}

std::string Zombie::getName() const{
    return (this->name);
}

void Zombie::announce(void) const{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){}

Zombie::~Zombie(){
    std::cout << this->name << ": My brain left the building" << std::endl;
}

