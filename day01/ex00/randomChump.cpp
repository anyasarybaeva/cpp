#include "Zombie.h"
int randomChump(std::string name)
{
	Zombie new_zombie(name);
	new_zombie.announce();
	return(0);
}