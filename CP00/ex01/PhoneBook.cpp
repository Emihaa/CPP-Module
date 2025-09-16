#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	_id = 0;
}

Contact& PhoneBook::GetContact(int id)
{
	return (_contacts[id]);
}

void PhoneBook::SetId()
{
	_id = (_id + 1) % 8;
}

int PhoneBook::GetId(void)
{
	return (_id);
}

//redo this
void PhoneBook::Printer(std::string string)
{
	int len = string.length();
	if (len > 10) {
		std::cout << string.substr(0, 9);
		std::cout << "." << "|";
	}
	else 
	{	
		std::cout << std::setw(10) << string << "|";
	}	
}

void PhoneBook::PrintContact(Contact *myContact)
{
	if (!myContact->GetFirstName().empty())
	{
		std::cout << "First name: " << myContact->GetFirstName() << std::endl;
		std::cout << "Last name: " << myContact->GetLastName() << std::endl;
		std::cout << "Nickname: " << myContact->GetNickName() << std::endl;
		std::cout << "Phonenumber: " << myContact->GetPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << myContact->GetDarkestSecret() << std::endl;
	}
	else
	{
		std::cout << "Empty contact." << std::endl;
	}
}

void PhoneBook::PrintContacts(Contact *myContact, int id)
{		
	if (!myContact->GetFirstName().empty())
	{
		std::cout << std::setw(10) << id << "|";	
		Printer(myContact->GetFirstName());
		Printer(myContact->GetLastName());
		Printer(myContact->GetNickName());		
		std::cout << std::endl;	
	}
}
