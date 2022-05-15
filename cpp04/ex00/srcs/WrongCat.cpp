#include "../incs/WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat class created" << std::endl;
    type = "WrongCat";
    sound = "WrongMeow";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat class destructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src){
    *this = src;
    std::cout << "WrongCat copied" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << sound << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	WrongAnimal::operator=(cpy);
	return *this;
}