#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include"Form.hpp"

class PresidentialPardonForm:public Form
{
	private:
		const std::string target;
	public:
		PresidentialPardonForm(std::string _target);
		~PresidentialPardonForm();
		virtual int execute(Bureaucrat const & executor) const;
};

#endif
