#pragma once

#include <iostream>
#include <ostream>

class Fixed
{
	private:
	int _fixed_point;
	static const int _frac_bits = 8;
	
	public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& original);
	Fixed& operator=(const Fixed& original);
	Fixed& operator<<(std::ostream &o);
	~Fixed(void);
	
	float toFloat( void ) const;
	int toInt( void ) const;
	
};