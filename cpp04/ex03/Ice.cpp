#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout << "Ice Deafult Constructor" << std::endl;
}

Ice::Ice(const Ice& copy){
	std::cout << "Ice Copy Constructor" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(const Ice& copy){
	std::cout << "Ice Copy Assignment Operator" << std::endl;
	this->type = copy.getType();
	return *this;
}

std::string const &Ice::getType() const{
	return (this->type);
}

Ice::~Ice(){
	std::cout << "Ice Destructor" << std::endl;
}

Ice *Ice::clone() const{
	Ice *ret = new Ice;
	return ret;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}