#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default Constructor called" << std::endl;
    this->fixedValue = 0;
}

Fixed::Fixed(const Fixed& copy){
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int intValue){
    std::cout << "Int constructor called" << std::endl;
    this->fixedValue = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue){
    std::cout << "Float constructor called" << std::endl;
    this->fixedValue = (int)(roundf(floatValue * (1 << fractionalBits)));
}

Fixed &Fixed::operator=(const Fixed& fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fixed){
        this->fixedValue = fixed.fixedValue;
    }
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    this->fixedValue = 0;
}

int Fixed::getRawBits()const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixedValue);
}

void Fixed::setRawBits(int const raw){
    this->fixedValue = raw;
}

float Fixed::toFloat(void) const{
    return ((float)this->fixedValue / (float)(1 << fractionalBits));
}

int Fixed::toInt(void) const{
    return this->fixedValue >> this->fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}