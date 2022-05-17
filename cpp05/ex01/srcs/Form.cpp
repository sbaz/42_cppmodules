#include "../incs/Form.hpp"

Form::Form(std::string name, int gfs, int gfe) : gradeForSign(gfs), gradeForExec(gfe),formName(name) {}	 

Form::~Form(){}

Form::Form(Form const & src)
{
	sign = false;
	formName = src.getFormName();
	gradeForSign = src.getGradeSign();
	gradeForExec = src.getGradeExec();
}


Form& Form::operator=(const Form& src)
{
	sign = src.sign;
	return *this;
}

// --------------------------
bool		Form::getSign() const {
	return this->sign;
}
int			Form::getGradeSign() const {
	return this->gradeForSign;
}
int			Form::getGradeExec() const {
	return this->gradeForExec;
}
std::string Form::getFormName() const {
	return this->formName;
}
//    ---------------

void 		Form::beSigned(Bureaucrat &bur){
	try{
		if(this->gradeForSign <= bur.getGrade())
			throw GradeTooLowExeption();
		this->sign = true;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
}

const char *Form::GradeTooHighExeption::what() const throw(){
	return (" grade too high ");
}

const char *Form::GradeTooLowExeption::what() const throw(){
	return (" grade too low ");
}

std::ostream &operator<<(std::ostream & os, const Form &src){
	os << "Sign: " << src.getSign() << std::endl;
	os << "Grade to Exec: " << src.getGradeExec() << std::endl;
	os << "Grade to Sign: " << src.getGradeSign() << std::endl;
	os << "Form Name: " << src.getFormName() << std::endl;
	return os;
}
