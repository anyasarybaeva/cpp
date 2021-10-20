#include"Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Jack",1);
		//a.IncrementGrade();
		std::cout<<a<<std::endl;
		a.DecrementGrade();
		a.DecrementGrade();
		std::cout<<a<<std::endl;
		Bureaucrat b("Jim",8);
		std::cout<<b<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
