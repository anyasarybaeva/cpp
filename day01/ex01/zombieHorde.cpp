#include "Zombie.h"
Zombie* zombieHorde(int N, std::string name)
{
	Zombie* new_zombie = new Zombie[N];
	for (int i; i < N; i++)
	{
		new_zombie[i].set_name(name);
	}
	return(new_zombie);
}