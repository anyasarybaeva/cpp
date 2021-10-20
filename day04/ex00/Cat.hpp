#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat& copy);
		~Cat();
		void makeSound()const;
};

Cat::Cat()
{
	type = "Cat";
	std::cout<<"The cat came"<<std::endl;
}

Cat::~Cat()
{
	std::cout<<"Cat dest"<<std::endl;
}

void Cat::makeSound()const
{
	std::cout<<"meow-meow"<<std::endl;
}
#endif