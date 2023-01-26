/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:47:24 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/26 21:52:39 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie* Zombie1 = zombiehorde(3, "Warrior");
	Zombie1[0].announce();
	delete[] Zombie1;
	Zombie* Zombie2 = zombiehorde(1, "Warrior");
	Zombie2[0].announce();
	delete[] Zombie2;
}