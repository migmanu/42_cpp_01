/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:21 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:21:22 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, const std::string &name)
{
	if (N <= 0)
	{
		return (NULL);
	}

	Zombie *zombieArr = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombieArr[i].name_zombie(name);
	}

	return zombieArr;
}
