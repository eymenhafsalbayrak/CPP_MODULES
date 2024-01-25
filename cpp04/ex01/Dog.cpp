#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    Animal::type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog& copy){
    *this = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog& copy){
    std::cout << "Dog copy assignment operator called" << std::endl;
    Animal::type = copy.type;
    this->brain = new Brain(*copy.brain); // Deep copy Brain
    return(*this);
}

void Dog::makeSound() const {
    std::cout << this->getType() << ": WOOF WOOF" << std::endl;
}

Brain *Dog::getBrain() const {
    return this->brain;
}