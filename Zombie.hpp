#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

class	Zombie
{
	public:
		Zombie(std::string new_name);
		~Zombie(void);

	private:
		std::string	name;

		Zombie(void);
};

#endif
