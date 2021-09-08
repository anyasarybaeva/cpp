#pragma once
#include<iostream>

class Zombie
{
	public:
		Zombie(std::string);
		Zombie(void);
		~Zombie();
		void announce(void);
		void set_name(std::string new_name);
	private:
		std::string name;
};
Zombie* newZombie(std::string name);
int randomChump(std::string name);//cng type

