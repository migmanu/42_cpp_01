#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
	public:

		Weapon(void);
		Weapon(const std::string& new_type);
		~Weapon(void);
		
		const std::string	getType(void);

		void	setType(const std::string& new_type);

	private:

		std::string	type;
};

#endif
