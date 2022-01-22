#ifndef INTERN_HPP
#define INTERN_HPP

#include"Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern& copy);
		Intern& operator=(Intern& copy);
		~Intern();
		Form* makeForm(std::string name, std::string target);
		class WrongFormNameException:public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif