#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType){
    this->type = weaponType;
}

void Weapon::setType(std::string newType){
    this->type = newType;
}

const std::string& Weapon::getType() const{
    return this->type;
}

Weapon::~Weapon(){
    std::cout << "Weapon is dead" << std::endl;
}