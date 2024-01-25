#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat default constructor called" << std::endl;
    WrongAnimal::type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy){
    *this = copy;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& copy){
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    WrongAnimal::type = copy.type;
    return(*this);
}

void WrongCat::makeSound() const{
    std::cout << this->getType() << ": meow meow" << std::endl;
}