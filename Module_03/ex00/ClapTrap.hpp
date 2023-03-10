/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:43:21 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/08 15:18:13 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	name;
	int	hit_pts;
	int	energy_pts;
	int	attack_dmg;
public:
	ClapTrap(void);
	ClapTrap(const ClapTrap& copy);
	ClapTrap(std::string name);
	~ClapTrap();
	void	setdmg(int dmg);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		gethitpts(void);
	operator std::string() const;
	ClapTrap&	operator=(const ClapTrap& obj);
	operator int() const;
};

#endif