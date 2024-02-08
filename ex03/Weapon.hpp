/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:22:22 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:22:23 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
  public:
	Weapon(void);
	Weapon(const std::string &new_type);
	~Weapon(void);

	const std::string getType(void);

	void setType(const std::string &new_type);

  private:
	std::string type;
};

#endif
