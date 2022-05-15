#include "../incs/Dog.hpp"

Dog::Dog(){
    std::cout << "Doc class created" << std::endl;
    type = "Dog";
    sound = "Woff";
}

Dog::~Dog(){
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