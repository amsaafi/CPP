#include "Fixed.hpp"


Fixed::Fixed(void) : _nb(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
    std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(int const n) : _nb(n << this->_fb) {
    std::cout << "Inte constructor called" << std::endl;
}

Fixed::Fixed(float const f) {
    std::cout << "Float constructor called" << std::endl;
    this->_nb = roundf(f * (1 << this->_fb));
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(Fixed const &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {
    return (this->_nb);
}

void Fixed::setRawBits( int const raw ) {
    this->_nb = raw;
}

float Fixed::toFloat(void) const {
    return (this->_nb / 256.0f);
}

int Fixed::toInt(void) const {
    return (this->_nb >> this->_fb);
}

std::ostream& operator<<( std::ostream & out, Fixed const& fixed ) {
    out << fixed.toFloat();
    return (out);
}
