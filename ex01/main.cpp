#include "Zombie.hpp"

int	main(void)
{
	int N = 9;

	Zombie* zombieArr = zombieHorde(N, "Manu");
	
	std::cout
		<< std::endl
		<< "Zombie horde created. Now kill them!"
		<< std::endl;

	delete[] zombieArr;

	return (0);
}
