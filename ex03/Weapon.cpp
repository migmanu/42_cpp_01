/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:59 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:22:00 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &new_type)
{
	Weapon::setType(new_type);
	return;
}

Weapon::Weapon(void)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

const std::string Weapon::getType(void)
{
	return Weapon::type;
}

void Weapon::setType(const std::string &new_type)
{
	Weapon::type = new_type;
	return;
}
