#include <iostream>

class	Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Karen();
		~Karen();
		// void	(Karen::*ptr1)() = &Karen::debug;
		// void	(Karen::*ptr2)() = &Karen::info;
		// void	(Karen::*ptr3)() = &Karen::warning;
		// void	(Karen::*ptr4)() = &Karen::error;
		void	complain( std::string level );
};	

Karen::Karen(){}

Karen::~Karen(){}

using ptr_mem = void (Karen::*)();

enum	messages
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

void Karen::complain(std::string level)
{
	ptr_mem ptr[4] = {
		{Karen::debug}, {Karen::info}, {Karen::warning}, {Karen::error}
		};
	switch (messages)
	{
	case DEBUG:
		this.
		break;
	
	default:
		break;
	}
	
}

void Karen::debug()
{
	std::cout << "lamentela inutile1" << std::endl;
}

void Karen::info()
{
	std::cout << "lamentela inutile2" << std::endl;
}
void Karen::warning()
{
	std::cout << "lamentela inutile3" << std::endl;
}
void Karen::error()
{
	std::cout << "lamentela inutile4" << std::endl;
}

