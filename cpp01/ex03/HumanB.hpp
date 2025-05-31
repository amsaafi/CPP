/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:42:29 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:42:30 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP


#include "weapon.hpp"

class humanB
{
    private:
    std::string _name;
    weapon *_weapon;

    public:
    humanB(std::string name);
    ~humanB();

    void attack(void) const;
    weapon &getweapon() const;
    void setweapon(weapon & weap);
    void unsetWeapon(void);
};


#endif