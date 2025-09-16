
#include <iostream>

int main (void)
{
	std::string a = "HI THIS IS BRAIN";
	std::string *b = &a; //pointer
	std::string &c = a; //reference
	
	std::cout << "This is the string variable address: " << &a << std::endl;
	std::cout << "This is the stringPTR address: " << &b << std::endl;
	std::cout << "This is the stringREF address: " << &c << std::endl << std::endl;
	
	std::cout << "This is the value of string variable: " << a << std::endl;
	std::cout << "This is the value of stringPTR variable: " << *b << std::endl;
	std::cout << "This is the value of stringREF variablle: " << c << std::endl;
	
	return (0);
}