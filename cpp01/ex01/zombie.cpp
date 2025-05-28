#include "zombie.hpp"

zombie::zombie(void)
{
}


zombie::zombie (std::string name)
{
    this->_name = name;
}

void    zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

zombie::~zombie()
{
    std::cout << this->_name << " byeeeeeeeeeee" << std::endl;
}

void    randomChump(std::string name)
{
    zombie  salah(name);

    salah.announce();
}

zombie  *newzombie(std::string name)
{
    return (new zombie(name));
}

void    zombie::setName(std::string name)
{
    this->_name = name;
}