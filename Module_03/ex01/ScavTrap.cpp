/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:26:48 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/05 17:31:30 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void): ClapTrap("ScavTrap", 100, 50, 20) {
    std::cout << "Default ScavTrap constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj) {
    std::cout << "ScavTrap copy constructor called with name" << this->getname() << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    setvar(name, 100, 50, 20);
}

ScavTrap::ScavTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg): ClapTrap(name, hit_pts, energy_pts, attack_dmg) {
    std::cout << "ScavTrap constructer called with set values!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << getname() << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    this->setname(obj.getname());
    this->setdmg(obj.getattack_dmg());
    this->setepts(obj.getenergy_pts());
    this->sethpts(obj.gethit_pts());
    return *this;
}
