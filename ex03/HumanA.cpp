/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:47 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:21:49 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <ostream>

HumanA::HumanA(const std::string &new_name, Weapon &new_weapon) : weapon(new_weapon)
{
	HumanA::name = new_name;

	return;
}

HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void)
{
	std::cout << "HumanA attacked with: " << std::endl << HumanA::weapon.getType() << std::endl;

	return;
}
