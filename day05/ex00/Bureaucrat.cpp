#include"Bureaucrat.hpp"

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
	this->CheckValue(grade+1);
}

void Bureaucrat::IncrementGrade()
{
	this->CheckValue(grade-1);
}

int Bureaucrat::GetGrade()
{
	return(grade);
}

const std::string Bureaucrat::GetName()
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
	out<<origin.GetName()<<", bureaucrat grade "<<origin.GetGrade();
	return out;
}
