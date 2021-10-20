#include"ScavTrap.hpp"
ScavTrap::ScavTrap(std::string _Name)
{
	Name=_Name;
	Hitpoint=100;
	EnergyPoints=50;
	AttackDamage=20;
	std::cout<<"ScavTrap "<<Name<<" created"<<std::endl;

}
ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap "<<Name<<" leaves"<<std::endl;
}
void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap have enterred in Gate keeper mode"<<std::endl;	
}
void ScavTrap::attack(std::string const & target)
{
	std::cout<<"ScavTrap "<<Name;
	if(EnergyPoints>0)
	{	
		std::cout<<" attack "<<target<<", causing "<<AttackDamage<<" points of demage!"<<std::endl;
		EnergyPoints-=1;
	}
	else
		std::cout<<" has 0 energy points"<<std::endl;
}