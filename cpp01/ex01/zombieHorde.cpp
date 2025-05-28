#include "zombie.hpp"

zombie  *zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return (NULL);
    zombie *horde = new zombie[N];

    int i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return(horde);
}
