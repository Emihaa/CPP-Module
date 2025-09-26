#include "Fixed.hpp"

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl; 
 	_fixed_point = 0;	
}

Fixed::Fixed(const Fixed& og) : _fixed_point(og._fixed_point)
{
	//std::cout << "Copy constructor called" << std::endl; 
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
 
bool Fixed::operator>(const Fixed &b) const
{
	return (_fixed_point > b._fixed_point);
}

bool Fixed::operator<(const Fixed &b) const
{
	return (_fixed_point < b._fixed_point);
}

bool Fixed::operator>=(const Fixed &b) const
{
	return (_fixed_point >= b._fixed_point);
}
 
bool Fixed::operator<=(const Fixed &b) const
{
	return (_fixed_point <= b._fixed_point);
}

bool Fixed::operator==(const Fixed &b) const
{
	return (_fixed_point == b._fixed_point);
}

bool Fixed::operator!=(const Fixed &b) const
{
	return (_fixed_point != b._fixed_point);
}

Fixed Fixed::operator+(const Fixed &b) const 
{
	Fixed c;
	c.setRawBits(_fixed_point + b._fixed_point);
	return (c);
}

Fixed Fixed::operator-(const Fixed &b) const
{
	Fixed c;
	c.setRawBits(_fixed_point - b._fixed_point);
	return (c);
}

Fixed Fixed::operator*(const Fixed &b) const
{
	Fixed c;
	c.setRawBits(toFloat() * b._fixed_point);
	return (c);
}

//TODO: check if this is correct with somebody
Fixed Fixed::operator/(const Fixed &b) const
{
	Fixed c;
	c.setRawBits(_fixed_point / b.toFloat());
	return (c);
}

Fixed &Fixed::operator++()
{
	this->setRawBits(_fixed_point + (1 << _frac_bits));
	return (*this);
}

Fixed &Fixed::operator--()
{
	_fixed_point--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	_fixed_point++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	_fixed_point--;
	return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{ 
	return ((a < b) ? a : b); 
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return ((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return ((a > b) ? a : b);
}

float Fixed::toFloat (void) const
{
	return ((float)_fixed_point / (1 << _frac_bits));
}

int Fixed::toInt(void) const
{
	return (_fixed_point >> 8);
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl; 
	return (_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl; 
	_fixed_point = raw;
}