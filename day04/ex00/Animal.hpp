#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal& copy);
		virtual ~Animal();
		Animal& operator=(Animal& copy);
		std::string getType()const;
    	virtual void makeSound() const;
};

Animal::Animal()
{
	type = "none";
	std::cout<<"Animal come"<<std::endl;
}

Animal::Animal(Animal& copy)
{
	*this = copy;
}

Animal::~Animal()
{
	std::cout<<"Animal dest"<<std::endl;
}

Animal& Animal::operator=(Animal& copy)
{
   	this->type = copy.getType();
   	return (*this);
}

std::string Animal::getType()const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout<<"AAAAAAA"<<std::endl;
}

#endif

