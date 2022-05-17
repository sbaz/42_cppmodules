#pragma once
class Form;
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	std::string	target;
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const &src);

	public:
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string tg);
		std::string	getTarget();
		void execute(Bureaucrat & executor);
};