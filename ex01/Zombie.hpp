#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <ostream>
# include <iostream>

class	Zombie
{
	public:

		Zombie(void);
		Zombie(std::string new_name);
		~Zombie(void);

		void	name_zombie(const std::string& new_name);
		void	announce(void);

	private:

		std::string	name;

};

Zombie*	zombieHorde(int N, const std::string& name);

#endif
