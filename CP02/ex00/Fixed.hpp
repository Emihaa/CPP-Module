#pragma once

#include <iostream>

class Fixed
{
	private:
	int _fixed_point;
	static const int _frac_bits = 8;
	
	public:
	Fixed(void);
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	~Fixed(void);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
};