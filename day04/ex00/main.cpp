#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
	std::cout<<"--------------------------Animal-------------------------"<<std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
	std::cout<<"--------------------------WrongAnimal-------------------------"<<std::endl;
	const WrongAnimal* animal = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	animal->makeSound();
	delete cat;
	delete animal;
	return 0;
}
