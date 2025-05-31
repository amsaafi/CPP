/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:42:23 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:42:24 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

#include "weapon.hpp"

class humanA
{
    private:
    std::string _name;
    weapon &_weapon;

    public:
    humanA(std::string name, weapon &weapon);
    ~humanA();

    void attack(void) const;
    weapon &getweapon() const;
    void setweapon(weapon const & weap);
};


#endif