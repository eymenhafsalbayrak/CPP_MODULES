#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(){
	std::cout << "Character Default Constructor" << std::endl;
}

Character::Character(std::string name): name(name){
	std::cout << "Character Parameterized Constructor" << std::endl;
	std::cout << "Character " << name << " created." << std::endl;
	for(int i = 0; i < 4; i++){
		this->inventory[i] = 0;
	} 
}

Character::~Character(){
	std::cout << "Character Destructor" << std::endl;
	for(int i = 0;i < 4;i++){
		if(this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Character " << name << "deleted." << std::endl;
}

Character::Character(const Character& copy){
	std::cout << "Character Copy Constructor" << std::endl;
	*this = copy;
}

Character &Character::operator=(const Character& copy){
	std::cout << "Character Copy Assignment Operator" << std::endl;
	this->name = copy.getName();
	for(int i = 0; i < 4;i++){
		if(copy.inventory[i] == 0)
			this->inventory[i] = copy.inventory[i];
		else
			this->inventory[i] = copy.inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName()const{
	return (this->name);
}

void Character::equip(AMateria* m){
	if(!m)
		return ;
	
}

void Character::unequip(int idx){

}

void Character::use(int idx, ICharacter& target){

}
