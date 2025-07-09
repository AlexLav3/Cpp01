#pragma once
#include <iostream>
#include <string>
#include <cctype> 

class Zombie {
    public: 
    void announce(void);
    Zombie *newZombie(std::string name);

    private:
    std::string name; 
};