#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{

}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon& wp)
{
    this->weapon = &wp;
}

void HumanB::attack() const {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}

