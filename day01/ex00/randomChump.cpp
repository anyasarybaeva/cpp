#include<iostream>
#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie new_zombie(name);
	new_zombie.announce();
}