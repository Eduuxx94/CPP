/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:03:49 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/08 18:14:31 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap(): ClapTrap(){
    this->name = "Diamond";
    std::cout << "Diamond default Constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap() {
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hit_pts = FragTrap::MAX_hit_pts;
    this->energy_pts = ScavTrap::MAX_energy_pts;
    this->attack_dmg = FragTrap::MAX_attack_dmg;
    std::cout << "Diamond String Constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
    *this = copy;
}

DiamondTrap::~DiamondTrap() {
    std::cout << DiamondTrap::name << " Destructor called!" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap named: " << name << " and my ClapTrap name is: " << ClapTrap::name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
    std::cout << "DiamondTrap Copy assign operator called!" << std::endl;
    this->attack_dmg = obj.attack_dmg;
    this->energy_pts = obj.energy_pts;
    this->hit_pts = obj.hit_pts;
    this->name = obj.name;
    return *this;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}
