#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

class Contact
{
	public :

	Contact();
	void print_contact() const;
	void resume_contact(int index) const;
	void print_field(const std::string str) const;
	void change_contact();

	private :

	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_phoneNumber;
	std::string m_darkestSecret;


};

#endif