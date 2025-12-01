/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:50:14 by scavalli          #+#    #+#             */
/*   Updated: 2025/11/19 14:04:01 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook phoneBook;
	std::string cmd;
	while(1)
	{
		cmd = "";
		while(cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
		{
			std::cout << "Commande : ADD / SEARCH / EXIT\n";
			std::cin >> cmd;
			std::cin.ignore();
		}
		if(cmd == "ADD")
			phoneBook.add_contact();
		else if(cmd == "SEARCH")
			phoneBook.search_contact();
		else if(cmd == "EXIT")
			break;
	}
	return 0;
}