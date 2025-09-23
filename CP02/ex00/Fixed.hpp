#pragma once

#include <iostream>

class Fixed
{
	private:
	int _fixed_point;
	static const int _frac_bits = 8;
	
	public:
	Fixed(void);
	Fixed(const Fixed& original);
	Fixed& operator=(const Fixed& original);
	~Fixed(void);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
};