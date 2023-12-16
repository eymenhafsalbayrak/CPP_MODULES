#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon &weaponType) : weap(weaponType){
	this->name = humanName;
} 

void HumanA::attack() const{
	std::cout << this->name << " attacks with their " << weap.getType() << std::endl;
}

HumanA::~HumanA(){
	std::cout << "HumanA is dead" << std::endl;
}