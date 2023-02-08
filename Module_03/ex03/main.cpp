/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:42:33 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/08 15:31:30 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	FragTrap	a;
	FragTrap	b("LOLOL", 12, 40, 42);
	b.highFiveGuys();
	FragTrap	c(b);
	c = a;
}
