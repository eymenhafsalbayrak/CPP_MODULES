#include "HumanB.hpp"

void HumanB::setType(Weapon& newtype){
   this->weap = &newtype;
   this->haswep = 1;
}

HumanB::HumanB(std::string humanName){
	this->name = humanName;
	this->haswep = 0;
}

HumanB::HumanB(std::string humanName, Weapon *weaponType){
	this->name = humanName;
	this->weap = weaponType;
	this->haswep = 1;
}

void HumanB::attack() const{
	if(!weap->getType().empty() && this->haswep){
		std::cout << name << " attacks with their " << weap->getType() << std::endl;
	}
	else{
		std::cout << name << " attacks with bare hands" << std::endl;
	}
}

HumanB::~HumanB(){
	std::cout << "HumanB is dead" << std::endl;
}
