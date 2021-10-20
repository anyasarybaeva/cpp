#include"Bureaucrat.hpp"
#include"Form.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
int main()
{
	try
	{
		Bureaucrat a("Jack",1);
		Bureaucrat b("Bod",150);
		RobotomyRequestForm a1("Robo");
		ShrubberyCreationForm a2("Tree");
		PresidentialPardonForm a3("Pardon");
		std::cout<<"--------------------RobotomyRequestForm-----------------"<<std::endl;
		b.signForm(a1);
		a1.beSigned(a);
		a1.execute(a);
		std::cout<<"--------------------ShrubberyCreationForm-----------------"<<std::endl;
		a2.beSigned(a);
		b.signForm(a2);
		b.executeForm(a2);
		a.executeForm(a2);
		a.executeForm(a2);
		std::cout<<"--------------------PresidentialPardonForm-----------------"<<std::endl;
		a3.beSigned(b);
		b.signForm(a3);
		a.signForm(a3);
		a3.execute(a);
		a.executeForm(a3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}