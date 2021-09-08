#include <iostream>
#include "Zombie.h"
int main()
{
	Zombie* first;
	Zombie* second;
	std::cout << "________________zombieHorde_________________" << std::endl;
	first = zombieHorde(3,"Linda");
	first->announce();
	second = zombieHorde(7,"Max");
	second->announce();
	delete first;
	delete second;
	return(0);
}
