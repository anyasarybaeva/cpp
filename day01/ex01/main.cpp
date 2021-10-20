#include <iostream>
#include "Zombie.hpp"
int main()
{
	Zombie* first;
	Zombie* second;
	int i;

	i = 0;
	std::cout << "________________zombieHorde_________________" << std::endl;
	first = zombieHorde(3,"Linda");
	first[1].announce();
	first[2].announce();
	second = zombieHorde(7,"Max");
	second[6].announce();
	delete [] first;
	delete [] second;
	return(0);
}
