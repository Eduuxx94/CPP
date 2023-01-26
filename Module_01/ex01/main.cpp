/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:47:24 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/26 21:10:13 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie* Zombie1 = zombiehorde(6, "Warrior");
	Zombie1[0].announce();
	delete[] Zombie1;
	Zombie* Zombie2 = zombiehorde(6, "Warrior");
	Zombie2[0].announce();
	delete[] Zombie2;
}