#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    AAnimal::type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& copy){
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& copy){
    std::cout << "Cat copy assignment operator called" << std::endl;
    AAnimal::type = copy.type;
    this->brain = new Brain(*copy.brain); // Deep copy Brain
    return(*this);
}

void Cat::makeSound() const {
    std::cout << this->getType() << ": MEOW MEOW" << std::endl;
}

Brain *Cat::getBrain() const {
    return this->brain;
}