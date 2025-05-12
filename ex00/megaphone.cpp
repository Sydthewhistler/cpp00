/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:27:03 by scavalli          #+#    #+#             */
/*   Updated: 2025/05/12 15:38:10 by scavalli         ###   ########.fr       */
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
			if('a' <= av[i][j] && av[i][j] <= 'z')
				av[i][j] -= 32;
		}
		std::cout << av[i];
	}
	std::cout << '\n';
	return (0);
}