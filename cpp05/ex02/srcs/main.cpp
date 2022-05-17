#include "../incs/Bureaucrat.hpp"
#include "../incs/Form.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat	tom(50, "tom");
	Form * one = new ShrubberyCreationForm("pincopallino");
	ShrubberyCreationForm two("Passport");
	RobotomyRequestForm three("arduino");
//	PresidentialPardonForm four("grazia");
//	tom.executeForm(three);
	three.execute(tom);


//	std::cout << tom.getGrade() << two.getGradeExec() << std::endl;
	two.execute(tom);
	delete one;
}