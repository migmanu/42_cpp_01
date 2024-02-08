/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:22:10 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:22:11 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
  public:
	~HumanA(void);

	HumanA(const std::string &new_name, Weapon &new_weapon);

	void attack(void);

  private:
	std::string name;
	Weapon &weapon;
};

#endif
