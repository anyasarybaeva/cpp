#include"Bureaucrat.hpp"
#include"Form.hpp"
Bureaucrat::Bureaucrat():name("none")
{
	grade = 150;
}

void Bureaucrat::CheckValue(int _grade)
{
	if (_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		grade=_grade;
	}
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade):name(_name)
{
	this->CheckValue(_grade);
}

Bureaucrat::Bureaucrat(Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& copy)
{
	this->grade = copy.grade;
	return(*this);
}
void Bureaucrat::DecrementGrade()
{
	this->CheckValue(grade + 1);
}

void Bureaucrat::IncrementGrade()
{
	this->CheckValue(grade - 1);
}

int Bureaucrat::GetGrade() const
{
	return(grade);
}

const std::string Bureaucrat::GetName() const
{
	return(name);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return( "Grade too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return( "Grade too hight");
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& origin)
{
	if(origin.GetGrade()>0 && origin.GetGrade()<151 )
		out<<origin.GetName()<<", bureaucrat grade "<<origin.GetGrade();
	else
		out<<"wrong object";
	return out;
}

void Bureaucrat::signForm(Form& _form)
{
	if(!_form.GetSign() && _form.GetGrade()>=grade)
	{
		std::cout<<this->GetName()<<" signs "<<_form.GetName()<<std::endl;
		_form.beSigned(*this);
	}
	else
	{
		std::cout<<this->GetName()<<" cannot sign "<<_form.GetName()<<" because";
		if(_form.GetSign())
			std::cout<<" form is alredy signed"<<std::endl;
		else
			std::cout<<" grade too low"<<std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{	
	if (form.execute(*this)==1)
		std::cout<<this->GetName()<<" executes "<<form.GetName()<<std::endl;
}