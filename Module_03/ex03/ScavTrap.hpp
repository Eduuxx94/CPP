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

class ScavTrap : public ClapTrap {
private:
    /* data */
public:
    ScavTrap(void);
    ScavTrap(const ScavTrap& obj);
    ScavTrap(std::string name);
    ScavTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg);
    ~ScavTrap();
    void guardGate();
    ScavTrap& operator=(const ScavTrap& obj);
};
