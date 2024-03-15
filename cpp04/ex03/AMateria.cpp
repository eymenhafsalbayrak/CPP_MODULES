#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(){
	std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "AMateria Destructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type){
	std::cout << "AMateria Parameterized Constructor" << std::endl;
}

AMateria::AMateria(const AMateria& copy) : type(copy.getType()){
	std::cout << "AMateria Copy Constructor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria& copy){
	std::cout << "AMateria Copy Assignment Operator" << std::endl;
	(void)copy;//we don't use copy ass. oper. why??
	return (*this);
}

std::string const & AMateria::getType() const{
	return (this->type);
}

void AMateria::use(ICharacter& target){
	std::cout << "AMateria used on " << target.getName() << std::endl;
}
