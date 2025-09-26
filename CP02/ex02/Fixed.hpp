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
	// Constructors
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& og);
	Fixed& operator=(const Fixed& og);
	// Deconstructor
	~Fixed(void);
	
	// Comparison operators
	bool operator>(const Fixed &b) const;
	bool operator<(const Fixed &b) const;
	bool operator>=(const Fixed &b) const;
	bool operator<=(const Fixed &b) const;
	bool operator==(const Fixed &b) const;
	bool operator!=(const Fixed &b) const;
	
	// Arithmetic operators
	Fixed operator+(const Fixed &b) const;
	Fixed operator-(const Fixed &b) const;
	Fixed operator*(const Fixed &b) const;
	Fixed operator/(const Fixed &b) const;
	
	// pre-increment Operators ++a, --a
	Fixed& operator++();
	Fixed& operator--();
	// post-increment Operators a++, a--
	Fixed operator++(int);
	Fixed operator--(int);
	
	// min & max functions
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	
	// rest of public functions
	float toFloat( void ) const;
	int toInt( void ) const;
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream &o, const Fixed &og);

