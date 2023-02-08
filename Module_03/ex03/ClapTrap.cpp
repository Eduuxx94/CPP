/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:43:23 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/08 16:18:10 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Noname"), hit_pts(10), energy_pts(10), attack_dmg(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_pts(10), energy_pts(10), attack_dmg(0) {
	std::cout << "ClapTrap String Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	this->name = obj.name;
	this->attack_dmg = obj.attack_dmg;
	this->energy_pts = obj.energy_pts;
	this->hit_pts = obj.hit_pts;
}

ClapTrap::ClapTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg): name(name), hit_pts(hit_pts), energy_pts(energy_pts), attack_dmg(attack_dmg) {
	std::cout << "ClapTrap set values Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called!" << std::endl;
}

void	ClapTrap::setdmg(int dmg) {
	this->attack_dmg = dmg;
}

void ClapTrap::setname(std::string name) {
	this->name = name;
}

void ClapTrap::sethpts(int hit_pts) {
	this->hit_pts = hit_pts;
}

void ClapTrap::setepts(int energy_pts) {
	this->energy_pts = energy_pts;
}

void ClapTrap::setvar(std::string name, int hit_pts, int energy_pts, int attack_dmg) {
	this->name = name;
	this->hit_pts = hit_pts;
	this->energy_pts = energy_pts;
	this->attack_dmg = attack_dmg;
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

int		ClapTrap::gethit_pts(void) const{
	return this->hit_pts;
}

int ClapTrap::getenergy_pts(void) const{
	return this->energy_pts;
}

std::string	ClapTrap::getname(void) const {
	return this->name;
}

int		ClapTrap::getattack_dmg(void) const{
	return this->attack_dmg;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &obj) {
	std::cout << "ClapTrap Copy assign operator called!" << std::endl;
	this->name = obj.name;
	this->attack_dmg = obj.attack_dmg;
	this->energy_pts = obj.energy_pts;
	this->hit_pts = obj.hit_pts;
	return *this;
}
