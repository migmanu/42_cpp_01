/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:16 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:21:17 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 9;

	Zombie *zombieArr = zombieHorde(N, "Manu");

	std::cout << std::endl << "Zombie horde created. Now kill them!" << std::endl;

	delete[] zombieArr;

	return (0);
}
