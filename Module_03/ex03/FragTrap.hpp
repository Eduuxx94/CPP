/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:38:02 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/05 17:41:17 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
protected:
    static const unsigned int MAX_hit_pts = 100;
    static const unsigned int MAX_energy_pts = 100;
    static const unsigned int MAX_attack_dmg = 30;
public:
    FragTrap(void);
    FragTrap(const FragTrap& obj);
    FragTrap(std::string name);
    FragTrap(std::string name, int hit_pts, int energy_pts, int attack_dmg);
    ~FragTrap();
    void highFiveGuys(void);
    FragTrap& operator=(const FragTrap& obj);
};
