#include "PhoneBook.hpp"
#include <codecvt>
#include <iostream>
#include <string>

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
	if(m_index == 0 && m_full_index == 0)
	{
		std::cout << "You dont have any contact for now\n";
		return ;
	}
	int contact_size = m_index;
	if(m_full_index == 8)
		contact_size = 8;

	for(int i = 0; i < contact_size ; i++)
	{
		m_contact[i].resume_contact(i);
	}
	std::cout << "\nChoose an index\n";
	int m_index;
	std::cin >> m_index;
	m_contact[m_index].print_contact();
}