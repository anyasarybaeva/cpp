#include "Zombie.hpp"
int main()
{
	Zombie* first;
	Zombie* second;
	std::cout << "________________randomChum_________________" << std::endl;
	randomChump("Zack");
	randomChump("Jhone");
	std::cout << "________________newZombie_________________" << std::endl;
	first = newZombie("Linda");
	first->announce();
	second = newZombie("Max");
	second->announce();
	delete first;
	delete second;
	return(0);
}