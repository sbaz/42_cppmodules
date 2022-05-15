#include "../incs/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain was created" << std::endl;
}
Brain::~Brain()
{
	std::cout << "Brain was destryed" << std::endl;
}
Brain::Brain(Brain &src)
{
	std::cout << "Brain copy" << std::endl;
	*this = src;
}

Brain &Brain::operator=(Brain &src)
{
	std::cout << "A Brain assignation" << std::endl;
	for(int i=0;i<100;i++)
		ideas[i] = src.ideas[i];
	return (*this);
}

void Brain::setIdea(int i, std::string idea)
{
	ideas[i % 100] = idea;
	std::cout << "idea n" << i % 100<< "  " << idea << std::endl;
}
std::string Brain::getIdea(int i)
{
	return (ideas[i]);
}