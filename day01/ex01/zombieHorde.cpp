#include "Zombie.hpp"
Zombie* zombieHorde(int N, std::string name)
{
	int i;

	i = 0;
	Zombie* new_zombie = new Zombie[N];
	while(i<N)
	{	
		new_zombie[i++].set_name(name);
	}
	return(new_zombie);
}