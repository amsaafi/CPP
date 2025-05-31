/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:41:57 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:41:58 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    int i = 0;
    zombie one("yeger");
    zombie *horde = zombieHorde(9, "eiren");

    one.announce();
    for (i = 0; i < 8; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
}
