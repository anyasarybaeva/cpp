#include"Intern.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
Intern::Intern()
{

}

Intern::Intern(Intern& copy)
{
	(void)copy;
}

Intern& Intern::operator=(Intern& copy)
{
	return(copy);
}

Intern::~Intern()
{

}

Form* Intern::makeForm(std::string name, std::string target)
{
	if (name=="robotomy request")
	{
		std::cout<<"Intern creates "<<name<<std::endl;
		return new RobotomyRequestForm(target);
	}
	else if(name=="president pardon")
	{

		std::cout<<"Intern creates "<<name<<std::endl;
		return new PresidentialPardonForm(target);
	}
	else if(name=="shrubbery creation")
	{
		std::cout<<"Intern creates "<<name<<std::endl;
		return new ShrubberyCreationForm(target);
	}
	else
	{
		throw Intern::WrongFormNameException();
	}
	return(0);
}
const char* Intern::WrongFormNameException::what() const throw()
{
	return( "Wrong form name");
}
