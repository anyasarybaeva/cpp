#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal& copy);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(WrongAnimal& copy);
		std::string getType()const;
    	void makeSound() const;
};

WrongAnimal::WrongAnimal()
{
	type = "none";
	std::cout<<"WrongAnimal come"<<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& copy)
{
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal dest"<<std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& copy)
{
   	this->type = copy.getType();
   	return (*this);
}

std::string WrongAnimal::getType()const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout<<"AAAAAAA"<<std::endl;
}

#endif

