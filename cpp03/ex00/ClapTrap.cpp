#include <ClapTrap.hpp>

ClapTrap::ClapTrap(){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name){
    std::cout << "Paramaterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy){
    this->name = copy.getName();
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){


}

void ClapTrap::takeDamage(unsigned int amount){

}


void ClapTrap::beRepaired(unsigned int amount){

}

void ClapTrap::setEnergyPoints(int amount){
    this->energyPoint = amount;
}

void ClapTrap::setAttackDamage(int amount){
    this->attackDamage = amount;
}

std::string ClapTrap::getName() const{
    return(this->name);
}

int	ClapTrap::getHitPoints() const{
    return (this->hitPoint);
}

int ClapTrap::getEnergyPoints() const{
    return (this->energyPoint);
}

int ClapTrap::getAttackDamage() const{
    return (this->attackDamage);
}