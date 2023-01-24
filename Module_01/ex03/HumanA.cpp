/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:53:09 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/24 22:25:41 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(){
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
}

void    HumanA::attack(void){
    std::cout << this->name << " Attacked with a " << this->weapon.getType() << std::endl;
}

std::string    HumanA::getName(void){
    return this->name;
}
