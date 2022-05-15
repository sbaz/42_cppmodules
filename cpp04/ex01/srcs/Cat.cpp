#include "../incs/Cat.hpp"
#include "../incs/Brain.hpp"

Cat::Cat(){
    mind = new Brain();
    type = "Cat";
    sound = "Meow";
    std::cout << "Cat class created" << std::endl;
}

Cat::~Cat(){
    delete mind;
    std::cout << "Cat class destructed" << std::endl;
}

Cat::Cat(const Cat &src){
    *this = src;
    std::cout << "cat copied" << std::endl;
}

void Cat::makeSound() const{
    std::cout << sound << std::endl;
}

Cat &Cat::operator=(const Cat &cpy){
	Animal::operator=(cpy);
	return *this;
}

void    Cat::think(int i, std::string idea){
    mind->setIdea(i, idea);
    mind->getIdea(i);
}