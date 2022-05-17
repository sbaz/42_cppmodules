#pragma once
class Form;
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	std::string	target;

	public:
		RobotomyRequestForm(){};
		RobotomyRequestForm(RobotomyRequestForm const &src)
		{
			this->target =  src.target;
		};
		RobotomyRequestForm & operator=(RobotomyRequestForm const &src);
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string tg);
		std::string	getTarget();
		void execute(Bureaucrat & executor);
};