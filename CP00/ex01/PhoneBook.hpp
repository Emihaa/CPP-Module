#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact _contacts[8];
		int _id;

	public:
		PhoneBook(void);
	 
		Contact& GetContact(int id);
		void SetId();
		int GetId(void);
		void PrintContacts(Contact *myContact, int id);
		void PrintContact(Contact *myContact);
		void Printer(std::string string);
		
};


#endif