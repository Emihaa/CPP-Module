#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact PhoneBook::GetContact(int i)
{
	return (_contacts[i]);
}

void PhoneBook::SetId(int i)
{
	_id = i;
}

int PhoneBook::GetId(void)
{
	return (_id);
}


void PhoneBook::Printer(std::string print)
{
	int len = print.length();
	if (len > 10) {
		for (int i = 0; i < 9; i++)
			std::cout << print[i];
		std::cout << "." << "|";
	}
	else 
	{
		int k = 10 - len;
		for (int i = 0; i < k; i++)
		{
			std::cout << " ";
		}	
		std::cout << print << "|";
	}	
}

void PhoneBook::PrintContact(PhoneBook myBook, Contact myContact, int id)
{
	std::cout << "          " << id << "|";
	
	myBook.Printer(myContact.GetFirstName());
	myBook.Printer(myContact.GetLastName());
	myBook.Printer(myContact.GetNickName());
	
	std::cout << std::endl;	
}