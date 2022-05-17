#pragma once
class Form;
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	std::string	target;
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &src);

	public:
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string tg);
		void execute(Bureaucrat & executor);
};