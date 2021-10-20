#include "Zombie.hpp"
Zombie* newZombie( std::string name )
{
	Zombie *pointer_new_zombie=new Zombie(name);		
	return(pointer_new_zombie);
}