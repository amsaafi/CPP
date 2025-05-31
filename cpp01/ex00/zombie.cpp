/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:41:46 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:41:47 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
