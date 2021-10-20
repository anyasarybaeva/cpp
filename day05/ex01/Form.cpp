#include"Form.hpp"

Form::Form():name("none"),grade(150),grade_to_execute(150),sign(false)
{

}

Form::Form(std::string _name, int _grade, int _grade_e):
name(_name),grade(_grade),grade_to_execute(_grade_e)
{
	sign=false;
	CheckValue(_grade_e);
	CheckValue(_grade);
}

Form::Form(Form& copy):name(copy.GetName()),grade(copy.GetGrade()),
grade_to_execute(copy.GetGradeE()),sign(copy.GetSign())
{
}

Form& Form::operator=(Form& copy)
{
	sign=copy.GetSign();
	return(*this);
}

Form::~Form()
{

}

int Form::CheckValue(int _grade)
{
	if (_grade > 150)
	{
		throw Form::GradeTooLowException();
	}
	else if (_grade < 1)
	{
		throw Form::GradeTooHighException();
	}
		return(1);
}

int Form::GetGrade()
{
	return(this->grade);
}

int Form::GetGradeE()
{
	return(this->grade_to_execute);
}
std::string Form::GetName()
{
	return(this->name);
}

bool Form::GetSign()
{
	return(sign);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return( "Grade too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return( "Grade too hight");
}

std::ostream& operator<<(std::ostream& out, Form& origin)
{

	out<<origin.GetName()<<", form grade "<<origin.GetGrade();	
	if(origin.GetSign())
		out<<" is signed";
	else
		out<<" is not signed";
	return out;
}

void Form::beSigned(const Bureaucrat &member)
{
	try
	{
		if(this->grade < member.GetGrade())
		{
			std::cout<<member.GetName()<<" ";
			throw Form::GradeTooLowException();
		}
		else
		{
			sign=true;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
