#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"
#include"Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(Cat& copy);
		Cat& operator=(Cat& copy);
		~Cat();
		void makeSound()const;
};

Cat::Cat()
{
	type = "Cat";
	_brain = new Brain();
	std::cout<<"The cat came"<<std::endl;
}

Cat::Cat(Cat& copy)
{
	type = copy.type;
	delete _brain;
	_brain = new Brain(*copy._brain);
}

Cat&	Cat::operator=(Cat& copy)
{
	type=copy.type;
	delete _brain; 
	_brain=new Brain(*copy._brain);
	return(*this);
}

Cat::~Cat()
{
	std::cout<<"Cat dest"<<std::endl;
	delete _brain;
}

void Cat::makeSound()const
{
	std::cout<<"meow-meow"<<std::endl;
}
#endif