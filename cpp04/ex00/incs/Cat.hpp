#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class   Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &src);
        ~Cat();
       	Cat &operator=(const Cat &cpy);

        void    makeSound() const;
    private:
        std::string sound;
};

#endif