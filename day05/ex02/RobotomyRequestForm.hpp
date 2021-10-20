#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include"Form.hpp"

class RobotomyRequestForm:public Form
{
	private:
		const std::string target;
	public:
		RobotomyRequestForm(std::string _target);
		virtual ~RobotomyRequestForm();
		virtual int execute(Bureaucrat const & executor) const;

};

#endif