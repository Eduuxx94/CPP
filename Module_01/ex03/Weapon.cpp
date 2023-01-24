/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:46:02 by ede-alme          #+#    #+#             */
/*   Updated: 2023/01/24 22:22:52 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){

}

Weapon::~Weapon(void){

}

Weapon::Weapon(std::string type){
	this->type = type;
}

void	Weapon::setType(std::string newType){
	this->type = newType;
}

std::string	Weapon::getType(void) const{
	return this->type;
}
