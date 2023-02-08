/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:03:49 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/08 16:19:22 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
}

DiamondTrap::DiamondTrap(const std::string name) {
    
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) {
}

DiamondTrap::DiamondTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg) {
}

DiamondTrap::~DiamondTrap() {
}

void DiamondTrap::whoAmI() {
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
    std::cout << "DiamondTrap Copy assign operator called!" << std::endl;
    return *this;
}
