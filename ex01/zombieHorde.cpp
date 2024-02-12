/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:21 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/12 13:10:42 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, const std::string &name)
{
	if (N <= 0)
	{
		return (NULL);
	}

	Zombie *zombieArr = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::string sufix = "_";
		sufix += (i + '0');
		std::string new_name = name;
		new_name.append(sufix);
		zombieArr[i].name_zombie(new_name);
	}

	return zombieArr;
}
