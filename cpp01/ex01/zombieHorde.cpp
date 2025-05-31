/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:42:09 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:42:10 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

zombie  *zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return (NULL);
    zombie *horde = new zombie[N];

    int i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return(horde);
}
