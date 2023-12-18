#include "Fixed.hpp"

Fixed::Fixed(){
    // std::cout << "Default Constructor called" << std::endl;
    this->fixedValue = 0;
}

Fixed::Fixed(const Fixed& copy){
    // std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int intValue){
    // std::cout << "Int constructor called" << std::endl;
    this->fixedValue = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue){
    // std::cout << "Float constructor called" << std::endl;
    this->fixedValue = (int)(roundf(floatValue * (1 << fractionalBits)));
}

Fixed &Fixed::operator=(const Fixed& fixed){
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fixed){
        this->fixedValue = fixed.fixedValue;
    }
    return *this;
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
    this->fixedValue = 0;
}

int Fixed::getRawBits()const{
    // std::cout << "getRawBits member function called" << std::endl;
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

bool Fixed::operator>(const Fixed& fixed) const {
    return (this->fixedValue > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed) const {
    return (this->fixedValue < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed) const {
    return (this->fixedValue >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed) const {
    return (this->fixedValue <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed& fixed) const {
    return (this->fixedValue == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed& fixed) const {
    return (this->fixedValue != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixed) const{
    return(Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed& fixed) const{
    return(Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed& fixed) const{
    return(Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed& fixed) const{
    return(Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed &Fixed::operator++(){
    this->fixedValue++;
    return(*this);
}

Fixed &Fixed::operator--(){
    this->fixedValue--;
    return(*this);
}

Fixed Fixed::operator++(int){
    Fixed ret(this->toFloat());
    this->fixedValue++;
    return ret;
}

Fixed Fixed::operator--(int){
    Fixed ret(this->toFloat());
    this->fixedValue--;
    return ret;
}

Fixed	&Fixed::max(Fixed& a, Fixed& b) {
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed& a, Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed&a, const Fixed& b) {
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed&a, const Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}
