#include "Fixed.hpp"
 
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl; 
 	_fixed_point = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& og) : _fixed_point(og._fixed_point)
{
	std::cout << "Copy constructor called" << std::endl; 
}

Fixed &Fixed::operator=(const Fixed& og)
{
	std::cout << "Copy assignment operator called" << std::endl; 
	_fixed_point = og._fixed_point;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl; 
	return (_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl; 
	_fixed_point = raw;
}
	
	