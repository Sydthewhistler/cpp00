#include "Contact.hpp"
#include <iomanip>
#include <ios>
#include <iostream>

Contact::Contact() : m_firstName(), m_lastName(), m_nickname(), m_phoneNumber(),
	m_darkestSecret()
{
}

void Contact::change_contact()
{
	std::cout << "Enter your first name :\n";
	getline(std::cin, m_firstName);
	std::cout << "Enter your last name :\n";
	getline(std::cin, m_lastName);
	std::cout << "Enter your  nickname :\n";
	getline(std::cin, m_nickname);
	std::cout << "Enter your phone number :\n";
	getline(std::cin, m_phoneNumber);
	std::cout << "Enter your darkest secret :\n";
	getline(std::cin, m_darkestSecret);
}

void Contact::print_contact() const
{
	std::cout << "Firstname : " << m_firstName << "\n";
	std::cout << "Lastname : " << m_lastName << "\n";
	std::cout << "Nickname : " << m_nickname << "\n";
	std::cout << "Phone number : " << m_phoneNumber << "\n";
	std::cout << "Darkest secret : " << m_darkestSecret << "\n";
}

void Contact::print_field(const std::string str) const
{
	if (str.size() > 10)
	{
		std::cout << std::setw(9) << std::setfill(' ') << str.substr(0,9) << ".";
	}
	else
	{
		std::cout << std::setw(10) << std::setfill(' ') << str;
	}
}

void Contact::resume_contact(int index) const
{
	std::cout << index << " |";
	print_field(m_firstName);
	std::cout << "|";
	print_field(m_lastName);
	std::cout << "|";
	print_field(m_nickname);
	std::cout << "\n";
}
