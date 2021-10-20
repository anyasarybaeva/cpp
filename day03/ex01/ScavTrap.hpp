#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include<iostream>
#include"ClapTrap.hpp"
class ScavTrap:public ClapTrap
{
public:
	ScavTrap(std::string);
	~ScavTrap();
	void guardGate();
	void attack(std::string const & target);

};

#endif
