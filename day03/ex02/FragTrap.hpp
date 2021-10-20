#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include<iostream>
#include"ClapTrap.hpp"
class FragTrap:public ClapTrap
{
public:
	FragTrap(std::string);
	~FragTrap();
	void highFivesGuys(void);
	void attack(std::string const & target);
};

#endif