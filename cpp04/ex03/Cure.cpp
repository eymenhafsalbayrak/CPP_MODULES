#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure"){
	std::cout << "Cure Default Constructor" << std::endl;
}

Cure::~Cure(){
	std::cout << "Cure Destructor" << std::endl;
}
Cure::Cure(const Cure& copy){
	std::cout << "Cure Copy Constructor" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(const Cure& copy){
	std::cout << "Cure Copy Assignment Operator" << std::endl;
	this->type = copy.getType();
	return *this;
}

std::string const & Cure::getType() const{
	return (this->type);
}

Cure *Cure::clone() const{
	Cure *ret = new Cure;
	return ret;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " <<  target.getName() << "\'s wounds *" << std::endl;
}