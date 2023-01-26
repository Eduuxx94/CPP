/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:25:23 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/26 21:08:30 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombiehorde(int N, std::string name){
    Zombie* horde;
    if (N <= 0)
        return NULL;
    Zombie::_default_name = name;
    horde = new Zombie[N - 1];
    Zombie::_default_name = "Zombie";
    return horde;
}
