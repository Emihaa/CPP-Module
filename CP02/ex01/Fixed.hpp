#pragma once

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	private:
	int _fixed_point;
	static const int _frac_bits = 8;
	
	public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& og);
	Fixed& operator=(const Fixed& og);
	~Fixed(void);
	
	float toFloat( void ) const;
	int toInt( void ) const;
	
};

std::ostream& operator<<(std::ostream &o, const Fixed &og);