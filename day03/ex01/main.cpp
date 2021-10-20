#include"ScavTrap.hpp"
#include"ClapTrap.hpp"
int main()
{
	std::string const  target="target";

	ScavTrap First("Name1");
	ClapTrap Second("Name2");
	First.attack(target);
	Second.attack(target);
	First.takeDamage(1);
	Second.takeDamage(7);
	First.beRepaired(3);
	Second.beRepaired(4);
	First.guardGate();
	return(0);
}