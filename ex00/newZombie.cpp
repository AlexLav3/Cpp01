#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie *new_zmb;
    this->name = name; 
    return new_zmb;
}
