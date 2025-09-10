#include <iostream>
#include "PhoneBook.hpp"

//if any of contacts are empthy, we dont add the contact
void add_contact(PhoneBook myBook, int id)
{
	Contact myContact;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
	{
		std::cout << "Incorrect input, can't have empthy slots." << std::endl;
	}
	else
	{				
		myContact = myBook.GetContact(id);
		myContact.SetContact(first_name, last_name, nickname, phone_number, darkest_secret);
	}
}

//search for contact:
//|       id|     firstname|     lastname|       nickname|
void search_contact(PhoneBook myBook)
{
	std::string number;
	std::cout << "Contact index: ";
	std::getline(std::cin, number);
	int id = std::stoi(number);
	
	if (id < 1 || id > 8)
	{
		std::cout << "Invalid index, try input between 1-8" << std::endl;
		id = 0;
	}
	else
	{
		//id--;
		myBook.PrintContact(myBook, myBook.GetContact(id), id);
	}
}

int main(void)
{
	PhoneBook myBook;
	Contact	myContact;
	std::string add ("ADD");
	std::string search ("SEARCH");
	std::string exit ("EXIT");
	std::string input;
	myBook.SetId(0);

	std::cout << "Input 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
	while (1)
	{
		std::getline(std::cin, input);
		if (add.compare(input) == 0)
		{
			add_contact(myBook, myBook.GetId());
			
			myBook.SetId(myBook.GetId() + 1);
			if (myBook.GetId() > 8)
				myBook.SetId(0);
		}
		else if (search.compare(input) == 0)
		{
			search_contact(myBook);
		}
		else if (exit.compare(input) == 0)
		{
			// contacts are discarded
			std::cout << "Exiting phonebook" << std::endl;
			return (0);
		}
		else 
		{
			std::cout  << "Unknown input, try again 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
		}
	}
}