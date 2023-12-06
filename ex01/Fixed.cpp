#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int number) {
    this->fixedPointValue = number << this->fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number){
    this->fixedPointValue = roundf(number * (1 << this->fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &fixed) {
        this->fixedPointValue = fixed.getRawBits();
    }
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
    return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

float  Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << fractionalBits );
}

int Fixed::toInt(void) const {
    return this->fixedPointValue >> this->fractionalBits;
}