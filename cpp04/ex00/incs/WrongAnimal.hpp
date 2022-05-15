#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal  ();
        virtual ~WrongAnimal ();
        WrongAnimal  (const WrongAnimal &src);
        WrongAnimal  & operator=(const WrongAnimal&src);
        virtual void    makeSound() const;
        std::string     getType();
};

#endif