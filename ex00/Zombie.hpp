/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:21:03 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/08 16:21:04 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>
#include <iostream>
#include <ostream>

class Zombie
{
  public:
	Zombie(std::string new_name);
	~Zombie(void);

	void announce(void);

  private:
	std::string name;

	Zombie(void);
};

Zombie *newZombie(const std::string &new_name);
void randomChump(const std::string &new_name);

#endif
