#include "Zombie.h"
Zombie* newZombie(std::string name)
{
	Zombie *pointer_new_zombie=new Zombie;		
	pointer_new_zombie->set_name(name);
	//Zombie new_zombie(name);
	//pointer_new_zombie = &new_zombie;
	return(pointer_new_zombie);
}