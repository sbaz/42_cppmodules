#include "../incs/Intern.hpp"
#include "../incs/Form.hpp"

Intern::Intern(){

	ptrtoForm[0] = &Intern::makeRobotReqForm;
	ptrtoForm[1] = &Intern::makeShrubCreatForm;
	ptrtoForm[2] = &Intern::makePresPardForm;
		
	
		// this->ptrtoForm = {			
		// 	&Intern::makePresPardForm,
		// 	&Intern::makeRobotReqForm,	
 		// 	&Intern::makeShrubCreatForm};}
}

Intern::Intern(const Intern &src)
{
    *this = src;
    return;
}

Intern::~Intern(void){}

Intern &Intern::operator= (const Intern &src)
{
	ptrtoForm[0] = &Intern::makeRobotReqForm;
	ptrtoForm[1] = &Intern::makeShrubCreatForm;
	ptrtoForm[2] = &Intern::makePresPardForm;
	(void)src;
    return (*this);
}

Form* Intern::makePresPardForm(std::string tg)
{
	return (new PresidentialPardonForm(tg));
}
Form* Intern::makeRobotReqForm(std::string tg)
{
	return (new RobotomyRequestForm(tg));
}
Form* Intern::makeShrubCreatForm(std::string tg)
{
	return (new ShrubberyCreationForm(tg));
}

Form* Intern::makeForm(std::string name, std::string target)
{

	std::string formsPtr[3] = { "robotomy request",  "shrubbery creation", "presidential pardon"};
	for(int i = 0; i < 3; i++)
	{
		if(!name.compare(formsPtr[i]))
		{
			return(this->ptrtoForm[i](target) );
		}
	}
	return nullptr;
	//		Form *tmp = this->ptrtoForm[i];
}