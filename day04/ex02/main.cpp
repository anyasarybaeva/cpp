#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
	std::cout<<"--------------------------Animal-------------------------"<<std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	//const Animal *k = new Animal();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
//	k->makeSound();
	delete j;
	delete i;
	//delete k;
	return 0;	
}
