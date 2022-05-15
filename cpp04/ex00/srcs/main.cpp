#include "../incs/Animal.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Dog* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();

    const WrongAnimal* Neela = new WrongCat();
    Neela->makeSound();

    const WrongAnimal * sfigatto = new WrongAnimal();
    sfigatto->makeSound();

    std::cout << std::endl;
    const WrongCat * perla = new WrongCat();
    perla->makeSound();

    const Dog *pepe = new Dog();
    const Animal *test = pepe;
    test->makeSound();

    delete test;
    delete sfigatto;
    delete perla;
    delete pepe;
    delete Neela;
    delete meta;
    delete j;
    return 0;
}