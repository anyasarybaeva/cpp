#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
	int i;
	Animal *array[10];

	i = -1;
	while(++i <= 9)
	{
		if(i < 5)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	while(--i >= 0)
		array[i]->makeSound();
	while(++ i<= 9)
		delete array[i];	;
}
