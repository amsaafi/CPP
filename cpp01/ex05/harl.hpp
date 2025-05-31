/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:43:18 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:43:19 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class harl
{
    private:
        void    debug();
        void    info();
        void    warning();
        void    error();
    public:
        harl();
        ~harl();
        void    complain(std::string level);

        typedef void (harl::*harlfunction)();
        int getHash(const std::string& str);
};


#endif