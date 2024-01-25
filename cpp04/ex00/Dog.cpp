#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    Animal::type = "Dog";
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& copy){
    *this = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog& copy){
    std::cout << "Dog copy assignment operator called" << std::endl;
    Animal::type = copy.type;
    return(*this);
}

void Dog::makeSound() const {
    std::cout << this->getType() << ": woof woof" << std::endl;
}