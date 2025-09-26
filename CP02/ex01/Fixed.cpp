#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl; 
 	_fixed_point = 0;	
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

Fixed::Fixed (const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point = value << _frac_bits;
}

Fixed::Fixed (const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_point = roundf(value * (1 << _frac_bits));
}

std::ostream &operator<<(std::ostream &o, const Fixed &og)
{
	o << og.toFloat();
	return(o);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat (void) const
{
	//this converts the fixed-point value to an floating point value
	return ((float)_fixed_point / (1 << _frac_bits));
}

int Fixed::toInt(void) const
{
	//this converst the fixed-point value to an integer value
	return (_fixed_point >> 8);
}