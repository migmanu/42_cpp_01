#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
	Zombie::name = new_name;

	Zombie::announce();

	return;
}

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << Zombie::name << " dies!" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::name <<": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
