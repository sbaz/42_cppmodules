#ifndef BRAIN_HPP
# define BRAIN_HPP
#include "Animal.hpp"

class Brain
{
    protected:
        std::string ideas[100];

    public:
        Brain();
        Brain(Brain &cpy);
        Brain &operator=(Brain &cpy);
        ~Brain();

        void        setIdea(int i, std::string idea);
        std::string getIdea(int index);
};

#endif