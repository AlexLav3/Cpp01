#include "Weapon.hpp"

//code given in subject for testing:
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
return 0;
}
//Weapon.{h, hpp}, Weapon.cpp, HumanA.{h,
// hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp