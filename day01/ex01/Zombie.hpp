#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
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
Zombie* zombieHorde(int N, std::string name);
#endif