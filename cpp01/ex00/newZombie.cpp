#include "zombie.hpp"

zombie *newzombie(std::string name)
{
    return(new zombie(name));
}
