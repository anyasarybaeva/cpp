#include"RobotomyRequestForm.hpp"
#include <time.h>       /* time */

RobotomyRequestForm::RobotomyRequestForm(std::string _target):Form("RobotomyRequestForm", 72, 45),target(_target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if(this->GetSign() && executor.GetGrade() < this->GetGradeE())
		{
			srand(time(NULL));
			if(rand()%2==0)
			{
				std::cout<<"<some drilling noises>"<<std::endl;
				std::cout<<this->target<<" has been robotomized successfully"<<std::endl;
			}
			else
				std::cout<<"it’s a failure"<<std::endl;
			return (1);
		}
		else if(executor.GetGrade() >this->GetGradeE())
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