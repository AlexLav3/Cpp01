#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << name << " I am not needed..\n";
}
