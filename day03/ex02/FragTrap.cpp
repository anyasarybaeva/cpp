#include"FragTrap.hpp"
FragTrap::FragTrap(std::string _Name)
{
	Name=_Name;
	Hitpoint=100;
	EnergyPoints=100;
	AttackDamage=30;
	std::cout<<"FragTrap "<<Name<<" created"<<std::endl;
}
FragTrap::~FragTrap()
{
	std::cout<<"FragTrap "<<Name<<" leaves"<<std::endl;
}
void FragTrap::highFivesGuys()
{         
	std::cout<<"HIGHT FIVE!!!!!"<<std::endl;
}
void FragTrap::attack(std::string const & target)
{
	std::cout<<"FragTrap "<<Name;
	if(EnergyPoints>0)
	{	
		std::cout<<" attack "<<target<<", causing "<<AttackDamage<<" points of demage!"<<std::endl;
		EnergyPoints-=1;
	}
	else
		std::cout<<" has 0 energy points"<<std::endl;
}
