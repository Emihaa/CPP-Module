#include "PhoneBook.hpp"
#include <exception>
#include <new>

//if any of contacts are empthy, we dont add the contact
int add_contact(PhoneBook *myBook)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
	std::cout << "First name: ";
	if (!std::getline(std::cin, first_name))
		return (1);
	std::cout << "Last name: ";
	if (!std::getline(std::cin, last_name))
		return (1);
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, nickname))
		return (1);
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, phone_number))
		return (1);
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, darkest_secret))
		return (1);
	if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
	{
		std::cout << "Incorrect input, can't have empthy slots." << std::endl;
	}
	else
	{				
		myBook->GetContact(myBook->GetId()).SetContact(first_name, last_name, nickname, phone_number, darkest_secret);
	}
	return (0);
}

//search for contact:
//|       id|     firstname|     lastname|       nickname|
int search_contact(PhoneBook *myBook)
{
	std::string number;
	
	for (int i = 0; i < 8; i++)
		myBook->PrintContacts(&myBook->GetContact(i), i+1);
	std::cout << "Contact index: ";
	if (!std::getline(std::cin, number))
		return (1);
	int id = std::strtol(number.data(), NULL, 10);
	if (id < 1 || id > 8)
	{
		std::cout << "Invalid index, try input between 1-8" << std::endl;
	}
	else
	{
		myBook->PrintContact(&myBook->GetContact(id - 1));
	}
	return (0);
}

int main(void)
{
	PhoneBook myBook;
	std::string input;

	std::cout << "Input 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
	while (1)
	{
		if (!std::getline(std::cin, input))
			return (1);
		if (input == "ADD")
		{
			if (add_contact(&myBook))
				return (1);
			myBook.SetId();
		}
		else if (input == "SEARCH")
		{
			if (search_contact(&myBook))
				return (1);
		}
		else if (input == "EXIT")
		{
			std::cout << "Exiting phonebook" << std::endl;
			return (0);
		}
		else 
		{
			std::cout  << "Unknown input, try again 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
		}
	}
}