#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
    	void makeSound()const;
};

Dog::Dog()
{
	type = "Dog";
	std::cout<<"The dog came"<<std::endl;
}

Dog::~Dog()
{
	std::cout<<"Dog dest"<<std::endl;
}

void Dog::makeSound()const 
{
	std::cout<<"woof-woof"<<std::endl; 
}

#endif
