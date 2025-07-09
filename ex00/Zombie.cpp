#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    std::string name;
    std::cin >> name;
    randomChump(name);
}

Zombie::~Zombie()
{
    std::cout << name << " I am not needed..\n";
}
