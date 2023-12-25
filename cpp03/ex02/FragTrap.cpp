#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);

    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy){
    *this = copy;
}

FragTrap &FragTrap::operator=(const ClapTrap& copy){
    this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->getName() << " wants to high five!" << std::endl; 
}