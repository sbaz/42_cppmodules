#include "../incs/RobotomyRequestForm.hpp"
// #include "../incs/Form.hpp"
// #include <stdio.h>

RobotomyRequestForm::RobotomyRequestForm(std::string tg) : Form("RobotomyRequestForm", 72, 45), target(tg) {}

RobotomyRequestForm::~RobotomyRequestForm(){
}

std::string RobotomyRequestForm::getTarget()
{
	return this->target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	this->target = src.target;
	return *this;
}


void RobotomyRequestForm::execute(Bureaucrat & executor) {
	Form::beExecuted(executor);
	std::cout << "SKUUSKUUU" << std::endl;
	std::srand(std::time(0));
	int radnom = std::rand();
	if(radnom % 2)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomization failed" << std::endl;
}