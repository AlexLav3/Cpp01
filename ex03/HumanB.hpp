#pragma once
#include "Weapon.hpp"

class HumanB
{
    private: 
    std::string name; 
    Weapon *weapon;


    public:    
    void setWeapon(Weapon& wp);
    HumanB(std::string name);
    ~HumanB();
    void attack() const;
};
