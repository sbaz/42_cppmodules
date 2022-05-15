#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria
{
private:
    std::string type;
public:
    Ice         ();
    ~Ice        ();
    Ice         *clone(); 
    void        use(ICharacter & target);  
};

Ice::Ice()
{
    std::cout << "Ice Constructed" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructed" << std::endl;
}

void    Ice::use(ICharacter &src){
    
}


Ice Ice::*clone(Ice * toclone){
    Ice *cloned = new Ice();
    std::cout << "cloned " << std::endl;
    return (cloned);
}