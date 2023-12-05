#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int number) {
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = number;
}

Fixed::Fixed(const int number){
    this->fixedPointValue = number;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->fixedPointValue = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
}

int Fixed::toInt(void) const{
}