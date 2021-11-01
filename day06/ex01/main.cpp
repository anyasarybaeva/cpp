#include<iostream>

struct Data {
	int number;
};

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
int main()
{
	Data *a=new Data();
	a->number=10;
	std::cout<<a<<std::endl;
	std::cout<<a->number<<std::endl;
	uintptr_t ptr=serialize(a);
	std::cout<<ptr<<std::endl;
	std::cout<<deserialize(ptr)->number<<std::endl;
	std::cout<<deserialize(ptr)<<std::endl;
	delete a;
}