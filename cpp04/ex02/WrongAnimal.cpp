#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) :type(type){
    std::cout <<"WrongAnimal parameter constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
    *this = copy;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& copy){
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    this->type = copy.type;
    return(*this);
}

void WrongAnimal::setType(std::string newType){
    this->type = newType;
}

std::string WrongAnimal::getType() const{
    return(this->type);
}

void WrongAnimal::makeSound() const {
    std::cout << "regular WrongAnimal sound" << std::endl;
}