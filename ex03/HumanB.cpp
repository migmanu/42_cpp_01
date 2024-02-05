#include "HumanB.hpp"
#include <iostream>
#include <ostream>

HumanB::HumanB(const std::string& new_name)
{
	HumanB::name = new_name;
	return;
}

HumanB::HumanB(void)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::attack(void)
{
	std::cout
		<< "HumanB attacked with: "
		<< std::endl
		<< HumanB::weapon->getType()
		<< std::endl;

	return;
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	HumanB::weapon = &new_weapon;

	return;
}
