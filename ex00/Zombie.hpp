#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <ostream>
# include <iostream>

class	Zombie
{
	public:

		Zombie(std::string new_name);
		~Zombie(void);

		void announce(void);

	private:
		std::string	name;

		Zombie(void);
};

#endif
