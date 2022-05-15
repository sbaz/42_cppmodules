#include "../incs/Cat.hpp"

Cat::Cat(){
    std::cout << "Cat class created" << std::endl;
    type = "Cat";
    sound = "Meow";
}

Cat::~Cat(){
    std::cout << "Cat class destructed" << std::endl;
}

Cat::Cat(const Cat &src){
    *this = src;
    std::cout << "cat copied" << std::endl;
}

void Cat::makeSound() const{
    std::cout << sound << std::endl;
}

Cat &Cat::operator=(const Cat &cpy)
{
	Animal::operator=(cpy);
	return *this;
}