#pragma once
#include <iostream>
#include <string>
#include <cctype> 

class Zombie {
    public: 
    Zombie();
    ~Zombie();
    Zombie *newZombie(std::string name);
    void randomChump(std::string name);
    
    
    private:
    std::string name; 
    void announce(void);
  
};
Zombie* zombieHorde(int N, std::string name);