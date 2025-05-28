#include "zombie.hpp"

zombie::zombie(std::string name)
{
    this->_name = name;
}

zombie::~zombie()
{
    std::cout << this->_name << " byeeeeeeeeeee" << std::endl;
}

void    zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
