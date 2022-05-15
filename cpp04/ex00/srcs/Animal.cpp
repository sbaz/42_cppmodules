#include "../incs/Animal.hpp"

Animal::Animal(){
    std::cout << "Animal class created" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal class destructed" << std::endl;
}

Animal & Animal::operator=(const Animal &src){
    (void)src;
    return (*this);
}

Animal::Animal(const Animal &src){
    (void)src;
}

void Animal::makeSound() const{
    std::cout << "No sound"<< std::endl;
}

std::string Animal::getType() const{
    return this->type;
}