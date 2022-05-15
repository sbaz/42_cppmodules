#include "../incs/Dog.hpp"
#include "../incs/Brain.hpp"

Dog::Dog(){
    mind = new Brain();

    std::cout << "Doc class created" << std::endl;
    type = "Dog";
    sound = "Woff";
}

Dog::~Dog(){
    delete mind;
    std::cout << "Dog class destructed" << std::endl;
}

Dog::Dog(const Dog &src){
    *this = src;
    std::cout << "dog copied" << std::endl;
}

void Dog::makeSound() const{
    std::cout << sound << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
	Animal::operator=(cpy);
	return *this;
}

void    Dog::think(int i, std::string idea){
    mind->setIdea(i, idea);
    mind->getIdea(i);
}
