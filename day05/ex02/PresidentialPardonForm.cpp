#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target):Form("PresidentialPardonForm",25,5),target(_target)
{

}
		
PresidentialPardonForm::~PresidentialPardonForm()
{

}

int PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if(this->GetSign() && executor.GetGrade() <= this->GetGradeE())
		{
			std::cout<<this->target<<" has been pardoned by Zafod Beeblebrox"<<std::endl;
			return(1);
		}
		else if(executor.GetGrade() >this->GetGradeE())
		{
			std::cout<<executor.GetName()<<" cannot execute form "<<this->GetName();
			throw Form::GradeTooLowException();
		}
		std::cout<<executor.GetName()<<" cannot execute form "<<this->GetName()<<" is not signed"<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}