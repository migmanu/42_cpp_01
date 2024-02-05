#include "Weapon.hpp"

Weapon::Weapon(const std::string& new_type)
{
	Weapon::setType(new_type);
	return;
}

Weapon::Weapon(void)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

const std::string	Weapon::getType(void)
{
	return Weapon::type;
}

void	Weapon::setType(const std::string& new_type)
{
	Weapon::type = new_type;
	return;
}
