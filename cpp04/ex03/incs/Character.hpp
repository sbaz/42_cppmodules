#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    protected:
        std::string name;
    public:
        std::string const   &getName() const;
        void                equip(AMateria *m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target);
};


std::string const   Character::&getName() const{
    return this->name;
}

