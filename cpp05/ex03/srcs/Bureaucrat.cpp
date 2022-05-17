#include "../incs/Bureaucrat.hpp"


void		Bureaucrat::executeForm(Form const & form)
{
	try{
		if(this->getGrade() >= form.getGradeExec())
			throw GradeTooLowExeption();
		std::cout << this->getName() << " executed " << form.getFormName() << std::endl;
	}
	catch ( std::exception const &e)
	{
		std::cout << "Grade too low to exec that form" << std::endl;
	}
}

void		Bureaucrat::signForm(Form &src){
	try{
		src.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void		Bureaucrat::incrGrade()
{
	try{
		if(this->grade == 150)
			throw GradeTooHighExeption();
		this->grade--; 
	}
	catch(const std::exception & e)
	{
		std::cout << "invalid grade: " << e.what() << std::cout;
	}
}

void		Bureaucrat::decrGrade()
{
	try{
		if(this->grade == 1)
			throw GradeTooLowExeption();
		this->grade++; 
	}
	catch(const std::exception & e)
	{
		std::cout << "invalid grade: " << e.what() << std::cout;
	}
}

const char *Bureaucrat::GradeTooHighExeption::what() const throw(){
	return (" grade too high ");
}

const char *Bureaucrat::GradeTooLowExeption::what() const throw(){
	return (" grade too low ");
}

Bureaucrat::Bureaucrat(int grade, std::string name){
	try{
		if (grade < 1)
			throw GradeTooLowExeption();
		else if( grade > 150)
			throw GradeTooHighExeption();
		this->grade = grade;
		this->name = name;
		std::cout << "bureaucrat constructed" << std::endl;
			
	}
	catch (std::exception & e)
	{
		std::cout << "invalid grade: " << e.what() << std::cout;
	}
}

Bureaucrat::~Bureaucrat(){
	std::cout << "bureaucrat destructed" << std::endl;
}

int			Bureaucrat::getGrade() const{
	return (this->grade);
}	

std::string Bureaucrat::getName(){
	return (this->name);
}
