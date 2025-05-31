/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <samsaafi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 09:41:21 by samsaafi          #+#    #+#             */
/*   Updated: 2025/05/31 09:41:22 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    zombie one("salah");
    zombie two("med");
    zombie *three = newzombie("alex");

    two.announce();
    randomChump("saiiiiiid");
    one.announce();
    delete three;
}