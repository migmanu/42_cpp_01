#include "Zombie.hpp"

Zombie*	newZombie(const std::string& new_name)
{
	return new Zombie(new_name);
}

void	randomChump(const std::string& new_name)
{
	Zombie tempZombie(new_name);
}

int	main(void)
{
	std::cout
		<< "First, zombies on heap: "
		<< std::endl;

	Zombie* ptrZombie_1 = newZombie("h_Sophie");
	Zombie* ptrZombie_2 = newZombie("h_Mike");
	Zombie* ptrZombie_3 = newZombie("h_Clair");
	Zombie* ptrZombie_4 = newZombie("h_John");


	std::cout
		<< std::endl
		<< "Second, zombies on stack: "
		<< std::endl;

	randomChump("s_Pepe");
	randomChump("s_Marcelo");
	randomChump("s_Maribel");
	randomChump("s_Sonia");

	std::cout
		<< std::endl
		<< "Only now heap zombies are destroyed: "
		<< std::endl;

	delete ptrZombie_1;
	delete ptrZombie_2;
	delete ptrZombie_3;
	delete ptrZombie_4;

	return (0);
}
