#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "../incs/WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        ~WrongCat();
       	WrongCat &operator=(const WrongCat &cpy);

        void    makeSound() const;
    private:
        std::string sound;
};

#endif