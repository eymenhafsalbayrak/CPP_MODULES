 #include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    std::cout << "Paramaterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy){
    this->name = copy.getName();
    this->hitPoints = copy.getHitPoints();
    this->energyPoints = copy.getEnergyPoints();
    this->attackDamage = copy.getAttackDamage();
    return (*this);
}


ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){

    if(this->hitPoints <= 0)
        return ;
    if(this->energyPoints <= 0){
        std::cout << "ClapTrap " << this->getName() << " have no energy points to attack!" << std::endl;
        return ;    
    }
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " 
        << this->getAttackDamage() << " point of damage" << std::endl;
    this->energyPoints--;

}

void ClapTrap::takeDamage(unsigned int amount){

    if(this->hitPoints <= 0)
        return ;
    if(this->hitPoints <= (int)amount){
        std::cout << "ClapTrap " << this->getName() << " is died!" << std::endl;
        this->hitPoints -= amount;
        return ;
    }
    std::cout << "ClapTrap " << this->getName() << " has take" << amount << " point of damage!" << std::endl;
    this->hitPoints -= amount;
}


void ClapTrap::beRepaired(unsigned int amount){
    
    if(this->hitPoints <= 0)
        return ;
    if(this->energyPoints <= 0){
        std::cout << "ClapTrap " << this->getName() << " have no energy points to repair itself!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->getName() << " has repaired " << amount << " point of itself" << std::endl;
    this->energyPoints--;
    this->hitPoints += amount;

}

void ClapTrap::setHitPoints(int amount){
    this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount){
    this->energyPoints = amount;
}

void ClapTrap::setAttackDamage(int amount){
    this->attackDamage = amount;
}

void ClapTrap::setName(std::string newName){
    this->name = newName;
}

std::string ClapTrap::getName() const{
    return(this->name);
}

int	ClapTrap::getHitPoints() const{
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const{
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const{
    return (this->attackDamage);
}