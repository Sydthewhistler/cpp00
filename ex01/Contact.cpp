#include "Contact.hpp"
#include <codecvt>
#include <ios>
#include <iostream>

Contact::Contact() : m_firstName(), m_lastName(), m_nickname(), m_phoneNumber(), m_darkestSecret(){}

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




void Contact::resume_contact(int index) const
{
	std::cout << index << " |";
	for(int i = 0; i < 10; i++)
	{
		if(i == 9 && m_firstName[i+1])
		{
			std::cout << ".";
			break;
		}
		if(m_firstName[i])
			std::cout << m_firstName[i];
		else
			std::cout << " ";
	}
	std::cout << "|";
	for(int i = 0; i < 10; i++)
	{
		if(i == 9 && m_lastName[i+1])
		{
			std::cout << ".";
			break;
		}
		if(m_lastName[i])
			std::cout << m_lastName[i];
		else
			std::cout << " ";
	}
	std::cout << "|";
	for(int i = 0; i < 10; i++)
	{
		if(i == 9 && m_nickname[i+1])
		{
			std::cout << ".";
			break;
		}
		if(m_nickname[i])
			std::cout << m_nickname[i];
		else
		 	std::cout << " ";
	}
	std::cout << "\n";
}
