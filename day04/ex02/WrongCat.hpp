#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include"WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		void makeSound()const;
};

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout<<"The wrong cat came"<<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat dest"<<std::endl;
}

void WrongCat::makeSound()const
{
	std::cout<<"meow-meow"<<std::endl;
}
#endif