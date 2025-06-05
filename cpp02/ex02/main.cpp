#include "Fixed.hpp"


int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "\nInitial state:" << std::endl;
    std::cout << "a = " << a << " | _nb = " << a.getRawBits() << std::endl;
    std::cout << "b = " << b << " | _nb = " << b.getRawBits() << std::endl;

    std::cout << "\n++a:" << std::endl;
    std::cout << ++a << " | _nb = " << a.getRawBits() << std::endl;

    std::cout << "\na after ++a:" << std::endl;
    std::cout << a << " | _nb = " << a.getRawBits() << std::endl;

    std::cout << "\na++:" << std::endl;
    std::cout << a++ << " | _nb = " << a.getRawBits() << std::endl;

    std::cout << "\na after a++:" << std::endl;
    std::cout << a << " | _nb = " << a.getRawBits() << std::endl;

    std::cout << "\nb:" << std::endl;
    std::cout << b << " | _nb = " << b.getRawBits() << std::endl;

    std::cout << "\nmax(a, b):" << std::endl;
    std::cout << Fixed::max( a, b ) << " | _nb = " << Fixed::max(a, b).getRawBits() << std::endl;

    return 0;
}
