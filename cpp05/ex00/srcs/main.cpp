#include "../incs/Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat * one = new Bureaucrat(131, "Mario");
		std::cout << one->getName() << std::endl;
		std::cout << std::endl;
		Bureaucrat two(84, "luca");
		std::cout <<two.getName() << std::endl;

		two.incrGrade();
		std::cout << two.getGrade() << std::endl;
		two.decrGrade();
		std::cout << two.getGrade() << std::endl;
		std::cout << std::endl;


		Bureaucrat three(16514351, "gianni");
		std::cout << three << std::endl;
		delete one;
	}
	catch (const std::exception & e)
	{
		e.what();
	}

}