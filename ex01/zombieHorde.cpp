#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zmb_h = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        zmb_h[i].newZombie(name);
    }
    return zmb_h;
}
