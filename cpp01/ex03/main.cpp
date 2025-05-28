#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        weapon club = weapon("crude spiked club");
        humanA bob("Bob", club);
        bob.attack();
        club.set_type("some other type of club");
        bob.attack();
    }
    {
        weapon club = weapon("crude spiked club");
        humanB jim("Jim");
        jim.setweapon(club);
        jim.attack();
        club.set_type("some other type of club");
        jim.attack();
    }
    return (0);
}   