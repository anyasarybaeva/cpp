#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include<iostream>
class ClapTrap
{
	protected:
		std::string Name;
		int Hitpoint;//здоровье
		int EnergyPoints;//сколько раз можешь ударить
		int AttackDamage;//сила аттаки
	public:
		ClapTrap();
		ClapTrap(std::string _Name);
		~ClapTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
