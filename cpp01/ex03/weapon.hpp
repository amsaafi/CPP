/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:42:43 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:42:44 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class weapon 
{
    private:
    std::string _type;

    public:
    weapon(std::string type);
    ~weapon();

    const std::string &get_type(void) const;
    void    set_type(std::string type);

};

#endif