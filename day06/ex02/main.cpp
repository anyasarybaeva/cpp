#include"A.hpp"
#include"B.hpp"
#include"C.hpp"
#include<time.h>
#include <iostream>

Base * generate(void)
{
	int a;
	
	srand(time(NULL));
	a = rand();
	if (a%3==0)
		return (new A());
	else if(a%3==1)
		return (new B());
	else
		return (new C());
}
void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout<<"Class A"<<std::endl;
	}
	catch(const std::exception& e)
	{

	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout<<"Class B"<<std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout<<"Class C"<<std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
	
}
void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout<<"Class A"<<std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout<<"Class B"<<std::endl;
	else 
		std::cout<<"Class C"<<std::endl;
}
int main()
{
	Base b1;
	Base* ptr = generate();
	Base& ref = *ptr;
	identify(ptr);
	identify(ref);
}