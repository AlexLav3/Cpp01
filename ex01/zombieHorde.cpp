#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie *zmb_h;
    for(int i = 0; i < N; i++)
    {
        zmb_h = new Zombie;
        //std::cout << i; debug for count
        zmb_h->newZombie(name);
        zmb_h->announce();
    }
    return zmb_h;
}
