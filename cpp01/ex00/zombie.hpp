/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:41:50 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:41:51 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class   zombie
{
    private:
    std::string _name;

    public:
    zombie(std::string name);
    ~zombie();

    void    announce(void) const;


};


void    randomChump(std::string name);
zombie *newzombie(std::string name);

#endif

