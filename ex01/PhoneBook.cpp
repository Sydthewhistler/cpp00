#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <sstream>

PhoneBook::PhoneBook() : m_index(0), m_full_index(0){}

void	PhoneBook::add_contact()
{
	if(m_index == 8)
	{
		m_index = 0;
		m_full_index = 8;
	}
	m_contact[m_index].change_contact();
	m_index++;
}

void	PhoneBook::search_contact()
{
	std::string input;

	if(m_index == 0 && m_full_index == 0)
	{
		std::cout << "You dont have any contact for now\n";
		return ;
	}
	std::cout << "i |firstname |lastname  |nickname" << std::endl;
	int contact_size = m_index;
	if(m_full_index == 8)
		contact_size = 8;

	for(int i = 0; i < contact_size ; i++)
	{
		m_contact[i].resume_contact(i);
	}
	int m_index = -1;
	while (true) {
		std::cout << "\nChoose an index\n";
		std::getline(std::cin, input);
		std::stringstream ss(input);
		if (!(ss >> m_index))
		{
			std::cout << "Index incorrect";
			continue;
		}
		if (m_index < 0 || m_index >= contact_size)
		{
			std::cout << "Index incorrect";
			continue;
		}
		break;
	}
	m_contact[m_index].print_contact();
}
