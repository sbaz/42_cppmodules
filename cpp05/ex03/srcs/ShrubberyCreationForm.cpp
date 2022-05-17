#include "../incs/ShrubberyCreationForm.hpp"
// #include <stdio.h>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string tg) : Form("ShrubberyCreationForm", 145, 137), target(tg) {}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void	ShrubberyCreationForm::execute(Bureaucrat & executor)
{
	(void)executor;
	Form::beExecuted(executor);
	std::string output = this->target;
	output += "_shrubbery";
	std::ofstream ofs(output.c_str());
	if (!ofs) {
		return ;
	}
	ofs << "                  *          " << std::endl;
	ofs << "       *         ***      *     *"  << std::endl;
	ofs << "      ***       *****    ***   ***   "  << std::endl;
	ofs << "     *****     *******  ***** *****    "  << std::endl;
	ofs << "    *******   *********   *  *******      "  << std::endl;
	ofs << "       *          *             *   "  << std::endl;
}

// 	void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

// 	std::cout << "da creare file "<< target << "_shrubbery e piantare un albero in ascii" << std::endl;

// }