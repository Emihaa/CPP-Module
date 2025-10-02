#include "Fixed.hpp"

//do arg take in two values and then showcase all functions below where it runs out
// all the tests
int main(void) {	
	Fixed a = 4;
	Fixed b(6.234f);
	
	std::cout << "a: " << a << " b: " << b << std::endl << std::endl;
	
	//pre- and post-increment operators
	std::cout << "pre- and post-increment operators:" << std::endl;
	std::cout << "pre-increment: " << "a: " << a << " ++a: " << ++a << std::endl;
	std::cout << "pre-increment: " << "b: " << b << " ++b: " << ++b << std::endl;
	std::cout << "post-increment: " << "a: " << a << " a++: " << a++ << std::endl;
	std::cout << "post-increment: " << "b: " << b << " b++: " << b++ << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl << std::endl;
	
	std::cout << "pre- and post-decrement operators:" << std::endl;
	std::cout << "pre-decrement: " << "a: " << a << " --a: " << --a << std::endl;
	std::cout << "pre-decrement: " << "b: " << b << " --b: " << --b << std::endl;
	std::cout << "post-decrement: " << "a: " << a << " a--: " << a-- << std::endl;
	std::cout << "post-decrement: " << "b: " << b << " b--: " << b-- << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl << std::endl;
	
	//Comparison operators
	std::cout << "Comparison operators:" << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "Operator >: " << "a > b: " << (a>b) << std::endl;
	std::cout << "Operator <: " << "a < b: " << (a<b) << std::endl;
	std::cout << "Operator >=: " << "a >= b: " << (a>=b) << std::endl;
	std::cout << "Operator <=: " << "a <= b: " << (a<=b) << std::endl;
	std::cout << "Operator ==: " << "a == b: " << (a==b) << std::endl;
	std::cout << "Operator !=: " << "a != b: " << (a!=b) << std::endl << std::endl;
	
	//Arithmetic operators
	std::cout << "Arithmetic operators:" << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "Operator +: " << "a + b: " << (a+b) << std::endl;
	std::cout << "Operator -: " << "a - b: " << (a-b) << std::endl;
	std::cout << "Operator *: " << "a * b: " << (a*b) << std::endl;
	std::cout << "Operator /: " << "a / b: " << (a/b) << std::endl << std::endl;
	
	//Min & Max operators
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "min? a ? b: " << Fixed::min(a, b) << std::endl;
	std::cout << "max? a ? b: " << Fixed::max(a, b) << std::endl << std::endl;
	
	//rest of operators
	std::cout << "toFloat: a: " << a.toFloat() << std::endl;
	std::cout << "toInt: a: " << a.toInt() << std::endl;
	std::cout << "toFloat: b: " << b.toFloat() << std::endl;
	std::cout << "toInt: b: " << b.toInt() << std::endl;
	
	return (0);
}