#pragma once
#include "Weapon.hpp"

class HumanB
{
    public:

    void setWeapon(Weapon *weapon);

    private: 
    std::string name; 
    Weapon *weapon;
};
