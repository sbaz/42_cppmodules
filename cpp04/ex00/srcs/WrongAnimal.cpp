#include "../incs/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal class created" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal class destructed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src){
    (void)src;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
    (void)src;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong No sound"<< std::endl;
}
