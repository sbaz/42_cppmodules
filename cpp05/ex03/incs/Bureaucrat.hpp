#pragma once
class Form;
#include <iostream>
#include <exception>
#include "Form.hpp"

class	Bureaucrat
{
	private:
		int			grade;
		std::string	name;
	public:

//--------- CLASSI INNESTATE
		class GradeTooHighExeption : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowExeption : public std::exception
		{
			public:
				const char* what() const throw();
		};
// --------- CONSTR & DESTR
		
		Bureaucrat(int grade, std::string name);
		~Bureaucrat();
		
		void		signForm(Form &src);
		int			getGrade() const;
		std::string getName();
		void		incrGrade();
		void		decrGrade();
		void		executeForm(Form const & form);
};
