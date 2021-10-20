#include"FragTrap.hpp"
#include"ClapTrap.hpp"
int main()
{
	std::string const  target="target";

	FragTrap First("Name1");
	ClapTrap Second("Name2");
	First.attack(target);
	Second.attack(target);
	First.takeDamage(1);
	Second.takeDamage(7);
	First.beRepaired(3);
	Second.beRepaired(4);
	First.highFivesGuys();
	return(0);
}