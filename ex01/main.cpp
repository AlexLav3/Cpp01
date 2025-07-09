#include "Zombie.hpp"

int main(int argc, char **argv)
{
    if(argc > 1)
    {
       int z_n = atoi(argv[1]);
       Zombie zombies;
       std::string name = "bojo"; 
       zombies.zombieHorde(z_n, name);
    }
    return 0;
}
