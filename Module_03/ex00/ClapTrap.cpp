/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:43:23 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/08 15:24:14 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Noname"), hit_pts(10), energy_pts(10), attack_dmg(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copy): name(copy.name), hit_pts(copy.hit_pts), energy_pts(copy.energy_pts), attack_dmg(copy.attack_dmg) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_pts(10), energy_pts(10), attack_dmg(0) {
	std::cout << "String Constructor called: " << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called!" << std::endl;
}

void	ClapTrap::setdmg(int dmg) {
	this->attack_dmg = dmg;
	std::cout << this->name << " is now with " << dmg << " attack damage!" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->hit_pts <= 0) {
		std::cout << this->name << " cannot attack, because is already dead!..." << std::endl;
		return ;
	}
	if (this->energy_pts > 0) {
		this->energy_pts--;
		std::cout << this->name << " attacked " << target << ", causing " << this->attack_dmg << " damage!" << std::endl;
	}
	else {
		std::cout << this->name << " doesn't have energy points to attack " << target << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit_pts <= 0) {
		std::cout << this->name << " is already dead!" << std::endl;
	}
	else {
		this->hit_pts -= amount;
		std::cout << this->name << " was attacked and received " << amount << " damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit_pts <= 0) {
		std::cout << this->name << " is already died and cannot be repaired!" << std::endl;
		return ;
	}
	else if (energy_pts > 0) {
		this->hit_pts += amount;
		std::cout << this->name << " was repaired sucefully in amount of " << amount << std::endl;
	}
	else {
		std::cout << this->name << " doesn't have enougth energy points to be repaired!" << std::endl;
	}
}

int		ClapTrap::gethitpts(void) {
	return this->hit_pts;
}

ClapTrap::operator std::string() const {
	
	return this->name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assign operator called!" << std::endl;
    name = obj.name;
	hit_pts = obj.hit_pts;
	energy_pts = obj.energy_pts;
	attack_dmg = obj.attack_dmg;
	return *this;
}

ClapTrap::operator int() const {
	
	return this->attack_dmg;
}
