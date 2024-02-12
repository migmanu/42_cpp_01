/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:16 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/12 15:44:48 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 9;

	Zombie *zombieArr = zombieHorde(N, "Manu");

	std::cout << std::endl << "Zombie horde created." << std::endl;

	std::cout << "Zombie names are: " << std::endl;
	for (int i = 0; i < N; i++)
	{
		zombieArr[i].announce();
	}

	std::cout << std::endl << "Now kill them!" << std::endl;

	delete[] zombieArr;

	return (0);
}
