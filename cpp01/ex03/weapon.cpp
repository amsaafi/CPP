/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:42:40 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:42:41 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

weapon::weapon(std::string type) : _type(type) {}

weapon::~weapon(){}

const std::string &weapon::get_type() const
{
    return(_type);
}

void weapon::set_type(std::string type)
{
    this->_type = type;
}
