#include <iostream>
#include "Fixed.hpp"

int main() {
    {
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
    }
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "b + c = " << b + c << std::endl;
    std::cout << "b - c = " << b - c << std::endl;
    std::cout << "b * c = " << b * c << std::endl;
    std::cout << "b / c = " << b / c << std::endl;

    if (a > b)
        std::cout << "a is greater than b" << std::endl;
    else
        std::cout << "a is not greater than b" << std::endl;

    return 0;
}