/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:22:17 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/12 15:51:04 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
  public:
	HumanB(const std::string &new_name);
	~HumanB(void);

	void attack(void);
	void setWeapon(Weapon *new_weapon);

  private:
	HumanB(void);

	std::string name;
	Weapon *weapon;
};

#endif
