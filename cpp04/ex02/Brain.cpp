#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; ++i) {
        this->ideas[i] = "SOME IDEAS";
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain& copy) {
    std::cout << "Brain copy assignment operator called" << std::endl;
    for (size_t i = 0; i < copy.ideas->size(); i++) {
        this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}
