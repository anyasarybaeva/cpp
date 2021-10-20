#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat& copy);
		Bureaucrat& operator=(Bureaucrat& copy);
		void IncrementGrade();
		void DecrementGrade();
		const std::string GetName();
		int GetGrade();
		void CheckValue(int _grade);
		class 	GradeTooHighException:public std::exception
		{
			virtual const char* what() const throw();
		};
		class 	GradeTooLowException:public std::exception
		{
			virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream& out, Bureaucrat& origin);
#endif
