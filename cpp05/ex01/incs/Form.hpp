#pragma once
class Bureaucrat;
#include "Bureaucrat.hpp"

class	Form
{
	private:
		bool		sign;
		int			gradeForSign;
		int			gradeForExec;
		std::string	formName;
	public:
		Form();
		Form(Form const & src);
		Form(std::string name, int gfd, int gfe);
		Form &operator=(Form const &src);
		~Form();
//	------ GETTERS
		bool	getSign() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		std::string getFormName() const;
		
		void	beSigned(Bureaucrat &bur);

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
};

std::ostream &operator<<(std::ostream & os, const Form &src);
