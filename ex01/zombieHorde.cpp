#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zmb_h = new Zombie[N]; // Allocate array of Zombies
    for(int i = 0; i < N; i++)
    {
        zmb_h[i].newZombie(name); // Assign name to each zombie
    }
    return zmb_h;
}
