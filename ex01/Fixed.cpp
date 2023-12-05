#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int number) {

}

Fixed::Fixed(const float number){

}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->fixedPointValue = fixed.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat();
    return os;
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
    return (float)this->fixedPointValue;
}

int Fixed::toInt(void) const {
    return (int)this->fixedPointValue;
}