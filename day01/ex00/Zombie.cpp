#include "Zombie.hpp"
Zombie::Zombie(std::string new_name)
{
	name=new_name;
}
Zombie::~Zombie()
{
	std::cout<<name<<" died..."<<std::endl;

}
void Zombie::announce(void)
{
	std::cout<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}
