#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    Animal::type = "Cat";
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& copy){
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& copy){
    std::cout << "Cat copy assignment operator called" << std::endl;
    Animal::type = copy.type;
    return(*this);
}

void Cat::makeSound() const {
    std::cout << this->getType() << ": meow meow" << std::endl;
}