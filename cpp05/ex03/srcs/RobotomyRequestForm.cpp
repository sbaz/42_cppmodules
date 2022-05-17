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

void RobotomyRequestForm::execute(Bureaucrat & executor) {
	Form::beExecuted(executor);
	std::cout << "SKUUSKUUU" << std::endl;
	if(std::rand() % 2)
	{
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	}
	else{
		std::cout << "Robotomization failed" << std::endl;
	}
}