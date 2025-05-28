#include "zombie.hpp"

int main()
{
    int i = 0;
    zombie one("yeger");
    zombie *horde = zombieHorde(9, "eiren");

    one.announce();
    for (i = 0; i < 8; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
}
