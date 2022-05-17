#pragma once
class Form;
#include <iostream>
#include <exception>
#include "Form.hpp"

class	Bureaucrat
{
	private:
		int			grade;
		const std::string	name;
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
		
		Bureaucrat(int grade, const std::string name);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat& operator=(const Bureaucrat& src);

		

		int			getGrade();
		std::string getName();
		void		incrGrade();
		void		decrGrade();
};
std::ostream &operator<<(std::ostream & os, Bureaucrat &src);


