#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
    this->name = name;
    this->ClapTrap::setName(name + "_clap_name");
    this->FragTrap::setHitPoints(100);
    this->ScavTrap::setEnergyPoints(50);
    this->FragTrap::setAttackDamage(20);
    std::cout << "asd" << std::endl;
     std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
     std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy){
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& copy){
    std::cout << "DiamondTrap Copy Assignment operator called" << std::endl;
    this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap " << this->name << " also known as " << ClapTrap::getName() << std::endl;
}