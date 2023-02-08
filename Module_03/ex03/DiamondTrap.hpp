/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:03:58 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/08 16:23:55 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;
public:
    DiamondTrap(/* args */);
    DiamondTrap(const std::string name);
    DiamondTrap(const DiamondTrap& copy);
    DiamondTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg);
    ~DiamondTrap();
    void    whoAmI();
    DiamondTrap&    operator=(const DiamondTrap& obj);
};

#endif
