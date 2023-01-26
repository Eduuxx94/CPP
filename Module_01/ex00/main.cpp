/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:47:24 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/26 19:25:38 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie  Zombie1;
    randomChump("Fat Zombie");
	Zombie* Zombie2 = newZombie("Warrior");
	Zombie2->announce();
	delete Zombie2;
}