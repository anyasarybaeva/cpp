
#include"ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):Form("ShrubberyCreationForm", 145, 137),target(_target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if(this->GetSign() && executor.GetGrade() <= this->GetGradeE())
		{
			std::ofstream out(this->target.c_str());
			if(out.fail())
			{
				std::cout<<"wrong output filename"<<std::endl;
				return (0);
			}
			out<<"      / _-_\\ \n"
				"     /~~   ~~\\ \n"
				"  /~~         ~~\\ \n"
				" {               }\n"
				"  \\  _-     -_  /\n"
   				"	  ~  \\ //  ~ \n"
				"_- -   | | _- _\n"
  				"  _ -  | |   -_\n";
			out.close();
			return(1);
		}
		else if(executor.GetGrade() > this->GetGradeE())
		{
			std::cout<<executor.GetName()<<" cannot execute form "<<this->GetName();
			throw Form::GradeTooLowException();
		}
		else
		{
			std::cout<<executor.GetName()<<" cannot execute form "<<this->GetName()<<" is not signed"<<std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}