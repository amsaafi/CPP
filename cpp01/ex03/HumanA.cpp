/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:42:21 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:42:22 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

humanA::humanA(std::string name, weapon &weap) : _name(name), _weapon(weap) {}
humanA::~humanA(){}

weapon &humanA::getweapon() const{
    return (this->_weapon);
}

void humanA::setweapon(weapon const &weap)
{
    this->_weapon = weap;
}

void humanA::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.get_type() << std::endl;

}
