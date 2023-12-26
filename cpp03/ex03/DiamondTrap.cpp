#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
    this->name = name;
    this->ClapTrap::setName(name + "_clap_name");
    this->FragTrap::setHitPoints(100);
    this->ScavTrap::setEnergyPoints(50);
    this->FragTrap::setAttackDamage(20);
}

DiamondTrap::~DiamondTrap(){}

DiamondTrap::DiamondTrap(const DiamondTrap& copy){
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const ClapTrap& copy){
    this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap " << this->name << " also known as " << ClapTrap::getName() << std::endl;
}