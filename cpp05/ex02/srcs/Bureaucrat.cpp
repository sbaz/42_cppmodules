#include "../incs/Bureaucrat.hpp"


std::ostream &operator<<(std::ostream & os, Bureaucrat &src){
	// os << "Sign: " << src.getSign() << std::endl;
	// os << "Grade to Exec: " << src.getGradeExec() << std::endl;
	// os << "Grade to Sign: " << src.getGradeSign() << std::endl;
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return os;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
	this->grade = src.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	this->grade = src.grade;
	return (*this);
}

void		Bureaucrat::decrGrade()
{
	try{
		if(this->grade == 150)
			throw GradeTooLowExeption();
		this->grade++; 
	}
	catch(const std::exception & e)
	{
		std::cout << "invalid grade: " << e.what() << std::endl;
	}
}

void		Bureaucrat::incrGrade()
{
	try{
		if(this->grade == 1)
			throw GradeTooHighExeption();
		this->grade--; 
	}
	catch(const std::exception & e)
	{
		std::cout << "invalid grade: " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighExeption::what() const throw(){
	return (" grade too high ");
}

const char *Bureaucrat::GradeTooLowExeption::what() const throw(){
	return (" grade too low ");
}

Bureaucrat::Bureaucrat(int grade, const std::string name) : name(name){
	try{
		if (grade < 1)
			throw GradeTooHighExeption();
		else if( grade > 150)
			throw GradeTooLowExeption();
		this->grade = grade;
		// this->name = name;
		std::cout << "bureaucrat constructed" << std::endl;
			
	}
	catch (std::exception & e)
	{
		std::cout << "invalid grade: " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(){
	std::cout << "bureaucrat destructed" << std::endl;
}

int	Bureaucrat::getGrade(){
	return (this->grade);
}

std::string Bureaucrat::getName(){
	return (this->name);
}

