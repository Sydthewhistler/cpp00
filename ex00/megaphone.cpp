/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:27:03 by scavalli          #+#    #+#             */
/*   Updated: 2025/11/19 12:17:02 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if(ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for(int i = 1; i < ac ; i++)
	{
		for(int j = 0; av[i][j] ; j++)
		{
			std::cout << (char)std::toupper(av[i][j]);
		}
	}
	std::cout << '\n';
	return (0);
}