#include "Zombie.hpp"

Zombie*	newZombie(const std::string& new_name)
{
	return new Zombie(new_name);
}

