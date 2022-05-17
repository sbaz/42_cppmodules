#include "../incs/Bureaucrat.hpp"
#include "../incs/Form.hpp"

int main()
{
	Bureaucrat	tom(50, "tom");
	Form		pass("passport", 100, 120);
	std::cout << pass << std::endl;
}