/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:42:03 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:42:04 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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