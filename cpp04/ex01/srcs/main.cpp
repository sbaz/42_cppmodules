#include "../incs/Animal.hpp"
#include "../incs/Brain.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
int main()
{
    int n = 10;
    Animal *pack[n];
    for (int i = 0; i<n; i++)
    {
        if (i < (n/2))
            pack[i] = new Dog();
        else
            pack[i] = new Cat;
    }
    for (int i = 0; i < n; i++) delete pack[i];

    Cat *kitty = new Cat;
    kitty->think(3, "dominate the world");

    return 0;
}