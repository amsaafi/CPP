/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:42:26 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:42:27 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

humanB::humanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
}

humanB::~humanB(){}

void humanB::attack(void) const
{
    if(!this->_weapon)
        std::cout << this->_name << " is unarmed " << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->get_type() << std::endl;
}


weapon &humanB::getweapon(void) const {
	return (*this->_weapon);
}

void humanB::setweapon(weapon &weap) {
    this->_weapon = &weap;
}

void humanB::unsetWeapon(void) {
    this->_weapon = NULL;
}