#include "../incs/PresidentialPardonForm.hpp"
// #include <stdio.h>



PresidentialPardonForm::PresidentialPardonForm(std::string tg) : Form("PresidentialPardonForm", 25, 5), target(tg) {}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PPform destructed" << std::endl;
}

std::string PresidentialPardonForm::getTarget()
{
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat & executor) 
{
	Form::beExecuted(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	this->target = src.target;
	return *this;
}
