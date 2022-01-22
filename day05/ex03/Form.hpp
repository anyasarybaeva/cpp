#ifndef FORM_HPP
#define FORM_HPP

#include<iostream>
#include"Bureaucrat.hpp"
class Form
{
private:
	const std::string name;
	const int grade;
	const int grade_to_execute;
	bool sign;
public:
	Form();
	Form(std::string _name, int _grade,int _grade_e);
	Form(Form& copy);
	Form& operator=(Form& copy);
	virtual ~Form();
	int GetGrade();
	int	GetGradeE()const;
	std::string GetName()const;
	bool GetSign() const;
	int CheckValue(int _grade)const;
	class 	GradeTooHighException:public std::exception
	{
		virtual const char* what() const throw();
	};
	class 	GradeTooLowException:public std::exception
	{
		virtual const char* what() const throw();
	};
	void beSigned(const Bureaucrat &member);
	virtual int execute(Bureaucrat const & executor) const=0;
};
std::ostream& operator<<(std::ostream& out, Form& origin);
#endif