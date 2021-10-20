#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain& copy);
		~Brain();
		std::string get_idea(int);
		Brain& operator=(Brain& copy);
};

Brain::Brain()
{
	std::cout<<"brain"<<std::endl;
}

Brain::Brain(Brain& copy)
{
	int i;

	i = -1;
	while(++i<100)
	{
		ideas[i]=copy.get_idea(i);
	}
}

Brain::~Brain()
{
	std::cout<<"Brain dest"<<std::endl;
}

Brain& Brain::operator=(Brain& copy)
{
	int i;

	i = -1;
	while(++i < 100)
	{
		ideas[i] = copy.get_idea(i);
	}
	return(*this);
}

std::string Brain::get_idea(int number)
{
	return(ideas[number]);
}
#endif