#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	public:

		~HumanA(void);

		HumanA(const std::string& new_name, Weapon& new_weapon);

		void	attack(void);

	private:

		std::string name;
		Weapon& weapon;
};

#endif
