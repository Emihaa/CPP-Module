#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <cstring>
#include <iostream>

class PhoneBook
{
	private:
		Contact _contacts[8];
		int _id;

	public:
		// PhoneBook(void);
		// ~PhoneBook(void);
	 
		Contact GetContact(int i);
		void SetId(int i);
		int GetId(void);
		void PrintContact(PhoneBook myBook, Contact myContact, int id);
		void Printer(std::string print);
		
};


#endif