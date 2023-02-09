/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:26:50 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/05 17:04:39 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected:
    static const unsigned int MAX_hit_pts = 100;
    static const unsigned int MAX_energy_pts = 50;
    static const unsigned int MAX_attack_dmg = 20;
public:
    ScavTrap(void);
    ScavTrap(const ScavTrap& obj);
    ScavTrap(std::string name);
    ScavTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg);
    ~ScavTrap();
    void	attack(const std::string& target);
    void guardGate();
    ScavTrap& operator=(const ScavTrap& obj);
};
