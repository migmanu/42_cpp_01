#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	public:

		HumanB(const std::string& new_name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon& new_weapon);

	private:

		HumanB(void);

		std::string	name;
		Weapon* weapon;
};

#endif
