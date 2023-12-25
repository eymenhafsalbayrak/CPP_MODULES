#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);

    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy){
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ClapTrap& copy){
    this->setName(copy.getName());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void ScavTrap::attack(const std::string& target){
    if(this->getHitPoints() <= 0)
        return ;
    if(this->getEnergyPoints() <= 0){
        std::cout << "ScavTrap" << this->getName() << " have no energy points to attack!" << std::endl;
        return ;    
    }
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " 
        << this->getAttackDamage() << " point of damage" << std::endl;
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl; 
}