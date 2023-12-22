#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default Constructor called" << std::endl;
    this->fixedValue = 0;
}

Fixed::Fixed(const Fixed& copy){
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

/*
    Bu operatörün içinde, self-assignment'ı önlemek için bir kontrol yapılır (if (this != &other)), 
    ardından değerler kopyalanır ve son olarak *this ile kendi nesnesinin referansı döndürülür.
*/
Fixed &Fixed::operator=(const Fixed& fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fixed){// kendi kendine atamayi onlemek icin kontrol
        this->fixedValue = fixed.getRawBits();
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
