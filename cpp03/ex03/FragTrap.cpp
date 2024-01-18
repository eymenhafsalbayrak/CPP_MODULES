#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);

    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy){
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap& copy){
     std::cout << "FragTrap Copy Assignment operator called" << std::endl;
    this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->getName() << " wants to high five!" << std::endl; 
}
