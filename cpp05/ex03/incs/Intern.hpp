#pragma once
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:

		Intern(void);
		Intern(const Intern& src);
		~Intern(void);
		Intern &operator= (const Intern& rhs);
		
		Form *makeForm(std::string name, std::string target);
		Form*	 	(*ptrtoForm[3])(std::string target);


	private:

		static Form* makePresPardForm(std::string tg);
		static Form* makeRobotReqForm(std::string tg);
		static Form* makeShrubCreatForm(std::string tg);
		

};




		// Form*                        _newPresidentialPardonForm(std::string target);
		// Form*                        _newRobotomyRequestForm(std::string target);
		// Form*                        _newShrubberyCreationForm(std::string target);
    // Form*                        _searchForm(std::string n, std::string t);

    // Form* (Intern::*InternFPointer)(std::string);
    

