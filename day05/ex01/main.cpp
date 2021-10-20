#include"Bureaucrat.hpp"
#include"Form.hpp"
int main()
{
	try
	{
		Bureaucrat a("Alex",1);
		Bureaucrat b("Max",23);
		std::cout<<a<<std::endl;
		Form a1("form1",1,2);
		Form a2("form2",12,2);
		std::cout<<a1<<std::endl;
		a1.beSigned(b);
		std::cout<<a1<<std::endl;
		a.signForm(a1);
		b.signForm(a2);
		a.signForm(a2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
