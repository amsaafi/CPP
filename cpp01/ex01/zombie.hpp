/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:42:06 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:42:07 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class zombie
{
    private:
    std::string _name;

    public:
    zombie();
    zombie(std::string name);
    ~zombie();

    void    announce(void) const;
    void    setName(std::string name);

};

void    randomChump(std::string name);
zombie  *newzombie(std::string name);
zombie  *zombieHorde( int N, std::string name );

#endif