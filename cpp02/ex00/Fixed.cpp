#include "Fixed.hpp"

int _fb = 8;

Fixed::Fixed(): _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed & rhs): _nbr(rhs._nbr)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_nbr = rhs._nbr;
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}


void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nbr = raw;
	return ;
}

