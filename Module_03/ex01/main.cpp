/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-alme <ede-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:42:33 by ede-alme          #+#    #+#             */
/*   Updated: 2023/02/05 17:31:52 by ede-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	a;
	ScavTrap	b("LOLOL", 12, 40, 42);
	b.guardGate();
	ScavTrap	c(b);
	c = a;
}
