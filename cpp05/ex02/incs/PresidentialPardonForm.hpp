#pragma once
class Form;
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	std::string	target;

	public:
		PresidentialPardonForm() {};
		PresidentialPardonForm(PresidentialPardonForm const &src)
		{
			this->target =  src.target;
		};
		PresidentialPardonForm & operator=(PresidentialPardonForm const &src);
		~PresidentialPardonForm();
		PresidentialPardonForm(std::string tg);
		std::string	getTarget();
		void execute(Bureaucrat & executor);
};