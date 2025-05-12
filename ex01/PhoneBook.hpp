#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public :

	PhoneBook();
	void	add_contact();
	void	search_contact();




	private :

	Contact m_contact[8];
	int m_index;
	int m_full_index;

};

#endif