/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:43:21 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/05 17:26:54 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int	hit_pts;
	int	energy_pts;
	int	attack_dmg;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& obj);
	ClapTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg);
	~ClapTrap();
	void	setdmg(int dmg);
	void	setname(std::string name);
	void	sethpts(int hit_pts);
	void	setepts(int energy_pts);
	void	setvar(std::string name, int hit_pts, int energy_pts, int attack_dmg);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		gethit_pts(void) const;
	int		getenergy_pts(void) const;
	std::string	getname(void) const;
	int		getattack_dmg(void) const;
	ClapTrap&	operator=(const ClapTrap& obj);
};

#endif