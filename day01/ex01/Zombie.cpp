#include "Zombie.hpp"
Zombie::Zombie(std::string new_name)
{
	this->name = new_name;
}
Zombie::Zombie()
{
	this->name = "no name";
}
void Zombie::set_name(std::string new_name)
{
	this->name = new_name;

}
Zombie::~Zombie()
{
	std::cout << name << " died..." << std::endl;
}
void Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}