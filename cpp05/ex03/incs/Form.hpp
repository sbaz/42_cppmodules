#pragma once
class Bureaucrat;
#include "Bureaucrat.hpp"

class	Form
{
	protected:
		bool		sign;
		int			gradeForSign;
		int			gradeForExec;
		std::string	formName;
	public:
		Form();
		Form(Form const & src);
		Form(std::string name, int gfd, int gfe);
		virtual ~Form();
//	------ GETTERS
		bool	getSign() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		std::string getFormName() const;
		
		void	beSigned(Bureaucrat &bur);
		void 	beExecuted(Bureaucrat &bur);


// -------- EXEPTIONS

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

		// virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream & os, const Form &src);
