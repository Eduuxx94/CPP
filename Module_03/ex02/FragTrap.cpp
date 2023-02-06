/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:38:00 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/05 18:05:41 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){
    this->setvar("FragTrap", 100, 100, 30);
    std::cout << "FragTrap default Constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
    this->setvar(obj.getname(), obj.gethit_pts(), obj.getenergy_pts(), obj.getattack_dmg());
    std::cout << "FragTrap " << this->getname() << " Copy constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) {
     this->setvar(name, 100, 100, 30);
     std::cout << "FragTrap " << this->getname() << " Name passed to constructor!" << std::endl;
}

FragTrap::FragTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg) {
    this->setvar(name, hit_pts, energy_pts, attack_dmg);
    std::cout << "FragTrap " << this->getname() << " Constructor attributes passed as argument!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->getname() << " desctructor called!" << std::endl;
}

void FragTrap::highFiveGuys(void) {
    std::cout << this->getname() << " Requested high fives!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    this->setname(obj.getname());
    this->setdmg(obj.getattack_dmg());
    this->setepts(obj.getenergy_pts());
    this->sethpts(obj.gethit_pts());
    return *this;
}
