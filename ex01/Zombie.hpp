/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:27 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:21:28 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <ostream>
#include <string>

class Zombie
{
  public:
	Zombie(void);
	Zombie(std::string new_name);
	~Zombie(void);

	void name_zombie(const std::string &new_name);
	void announce(void);

  private:
	std::string name;
};

Zombie *zombieHorde(int N, const std::string &name);

#endif
