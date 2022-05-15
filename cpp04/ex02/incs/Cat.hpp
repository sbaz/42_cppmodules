#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class   Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &src);
        ~Cat();
       	Cat &operator=(const Cat &cpy);

        void    think(int i, std::string idea);
        void    makeSound() const;
    private:
        std::string sound;
        Brain *mind;
};

#endif