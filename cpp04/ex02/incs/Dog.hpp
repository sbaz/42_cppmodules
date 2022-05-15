#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &src);
        ~Dog();
        Dog &operator=(const Dog &src);

        void        makeSound() const;
        void        think(int i, std::string idea);

    private:
        std::string sound;
        Brain *mind;
};

#endif