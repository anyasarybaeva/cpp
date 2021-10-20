#include "ClapTrap.hpp"
ClapTrap::ClapTrap()
{
	std::cout<<"ClapTrap DEFAULT created "<<std::endl;

}
ClapTrap::ClapTrap(std::string _Name):Name(_Name)
{

	EnergyPoints=10;
	AttackDamage=0;
	Hitpoint=10;
	std::cout<<"ClapTrap "<<Name<<" created "<<std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap "<<Name<<" leaves "<<std::endl;
}
void ClapTrap:: attack(std::string const & target)
{
	std::cout<<"ClapTrap "<<Name;
	if(EnergyPoints>0)
	{	
		std::cout<<" attack "<<target<<", causing "<<AttackDamage<<" points of demage!"<<std::endl;
		EnergyPoints-=1;
	}
	else
		std::cout<<" has 0 energy points"<<std::endl;	
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<Name<<" attacked by smt, cousing "<<amount<<" points of demage!";
	if(Hitpoint>0)
		Hitpoint-=amount;
	std::cout<<" Hitpoint:"<<Hitpoint<<std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	Hitpoint+=amount;
	std::cout<<Name<<" repaired!! Hitpoints:"<<Hitpoint<<std::endl;
}