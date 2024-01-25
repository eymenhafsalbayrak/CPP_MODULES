#include "Animal.hpp"

Animal::Animal(){
    type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) :type(type){
    std::cout <<"Animal parameter constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& copy){
    *this = copy;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal& copy){
    std::cout << "Animal copy assignment operator called" << std::endl;
    this->type = copy.type;
    return(*this);
}

void Animal::setType(std::string newType){
    this->type = newType;
}

std::string Animal::getType() const{
    return(this->type);
}

void Animal::makeSound() const{
    std::cout << "regular animal sound" << std::endl;
}