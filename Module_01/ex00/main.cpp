/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:35:51 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/21 22:00:31 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie	*zombie1;
	Zombie	zombie2;
	Zombie	*horde;

	zombie1 = zombie2.newZombie("Joao");
	delete zombie1;
	horde = zombie2.zombieHorde(10, "MAX Zombie");
	zombie1 = zombie2.newZombie("Eduardo");
	delete zombie1;
	delete [] horde;
}