/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:53:09 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/24 22:16:21 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB(){
}

HumanB::HumanB(std::string name) : name(name){
}

void    HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void	HumanB::attack(void){
	std::cout << this->name << " Attacked with a " << (*this->weapon).getType() << std::endl;
}

std::string    HumanB::getName(void){
    return this->name;
}
