/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:50:14 by scavalli          #+#    #+#             */
/*   Updated: 2025/05/12 17:59:01 by scavalli         ###   ########.fr       */
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
		std::cout << "Commande : ADD / SEARCH / EXIT\n";
		std::cin >> cmd;
		std::cin.ignore();
		while(cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
		{
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