#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(Dog& copy);
		~Dog();
		Dog& operator=(Dog& copy);
    	void makeSound()const;
};

Dog::Dog()
{
	type = "Dog";
	_brain = new Brain();
	std::cout<<"The dog came"<<std::endl;
}

Dog::Dog(Dog& copy)
{
	type=copy.type;
	delete _brain;
	_brain=new Brain(*copy._brain);
}

Dog::~Dog()
{
	std::cout<<"Dog dest"<<std::endl;
	delete _brain;
}

Dog& Dog::operator=(Dog& copy)
{
	type=copy.type;
	delete _brain;
	_brain = new Brain(*copy._brain);
	return(*this);
}

void Dog::makeSound()const 
{
	std::cout<<"woof-woof"<<std::endl; 
}
#endif
