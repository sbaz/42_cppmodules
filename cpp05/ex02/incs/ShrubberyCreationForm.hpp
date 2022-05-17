#pragma once
class Form;
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	std::string	target;

	public:
		ShrubberyCreationForm(){};
		ShrubberyCreationForm(ShrubberyCreationForm const &src)
		{
			this->target = src.target;
		};
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string tg);
		void execute(Bureaucrat & executor);
};