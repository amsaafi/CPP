#include "zombie.hpp"

int main()
{
    int i = 0;
    //Zombie one("Bob");
    zombie *horde = zombieHorde(9, "eiren");

    for (i = 0; i < 8; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
}
