#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
    Zombie *zmb = newZombie(name);
    announce();
}