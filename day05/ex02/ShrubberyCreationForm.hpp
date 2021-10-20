#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include<iostream>
#include"Form.hpp"

class ShrubberyCreationForm:public Form
{
	private:
		const std::string target;
	public:
		ShrubberyCreationForm(std::string _target);
		virtual ~ShrubberyCreationForm();
		virtual int execute(Bureaucrat const & executor) const;
};

#endif