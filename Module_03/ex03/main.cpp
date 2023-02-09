/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:42:33 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/08 15:31:30 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap a("DI4M-42");
	std::cout << std::endl;
	a.whoAmI();
	std::cout << "Hit Points: " << a.gethit_pts() << std::endl;
	std::cout << "Energy points: " << a.getenergy_pts() << std::endl;
	std::cout << "Attack Damage: " << a.getattack_dmg() << std::endl;
	a.setepts(5);
	std::cout << std::endl;
	for (int i = 0; i < 6; i++) {
		a.attack("Slowest Bot");
	}
	a.guardGate();
	a.highFiveGuys();
	std::cout << std::endl;
	for (int i = 0; i < 6; i++) {
		a.takeDamage(20);
	}
	std::cout << std::endl;
}
